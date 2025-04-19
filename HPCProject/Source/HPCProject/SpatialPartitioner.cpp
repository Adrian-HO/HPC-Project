// Fill out your copyright notice in the Description page of Project Settings.


#include "SpatialPartitioner.h"
#include "Components/PrimitiveComponent.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "HAL/ThreadManager.h"
#include "HPCBenchmarkManager.h"
#include "Async/ParallelFor.h"
#include "HPCPhysicsSubsystem.h"


ASpatialPartitioner::ASpatialPartitioner()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ASpatialPartitioner::SetupPartitioning(FVector InWorldSize, int32 InGridDimension)
{
    WorldSize = InWorldSize;
    GridDimension = InGridDimension;
    
    // Create grid of regions
    Regions.SetNum(GridDimension * GridDimension * GridDimension);
    
    // Calculate region size
    FVector RegionSize = WorldSize / GridDimension;
    
    // Initialize each region
    for (int32 x = 0; x < GridDimension; x++)
    {
        for (int32 y = 0; y < GridDimension; y++)
        {
            for (int32 z = 0; z < GridDimension; z++)
            {
                int32 Index = (x * GridDimension * GridDimension) + (y * GridDimension) + z;
                Regions[Index].Bounds = FBox(
                    FVector(x, y, z) * RegionSize,
                    FVector(x + 1, y + 1, z + 1) * RegionSize
                );
                Regions[Index].ThreadID = Index % FPlatformMisc::NumberOfCores();
                Regions[Index].ContainedActors.Empty();
            }
        }
    }
    
    // Get benchmark manager
    UWorld* World = GetWorld();
    if (World)
    {
        BenchmarkManager = UHPCBenchmarkManager::GetInstance(World);
    }
}

void ASpatialPartitioner::SetGridDimension(int32 NewDimension)
{
    if (NewDimension != GridDimension)
    {
        FScopeLock Lock(&RegionLock);
        
        // Store all currently registered actors
        TArray<AActor*> RegisteredActors;
        for (const FPhysicsRegion& Region : Regions)
        {
            RegisteredActors.Append(Region.ContainedActors);
        }
        
        // Reinitialize regions with new dimension
        SetupPartitioning(WorldSize, NewDimension);
        
        // Re-register all actors
        for (AActor* Actor : RegisteredActors)
        {
            if (Actor && IsValid(Actor))
            {
                RegisterActor(Actor);
            }
        }
    }
}

void ASpatialPartitioner::SetCollisionAlgorithm(ECollisionAlgorithm NewAlgorithm)
{
    CollisionAlgorithm = NewAlgorithm;
}

void ASpatialPartitioner::RegisterActor(AActor* Actor)
{
    if (!Actor || !bEnabled) return;
    
    FScopeLock Lock(&RegionLock);
    
    int32 RegionIndex = GetRegionIndex(Actor->GetActorLocation());
    if (RegionIndex >= 0 && RegionIndex < Regions.Num())
    {
        Regions[RegionIndex].ContainedActors.Add(Actor);
    }
}

void ASpatialPartitioner::UpdateActorRegion(AActor* Actor)
{
    if (!Actor || !bEnabled) return;
    
    FScopeLock Lock(&RegionLock);
    
    // Find and remove from current region
    for (FPhysicsRegion& Region : Regions)
    {
        Region.ContainedActors.Remove(Actor);
    }
    
    // Add to new region
    int32 RegionIndex = GetRegionIndex(Actor->GetActorLocation());
    if (RegionIndex >= 0 && RegionIndex < Regions.Num())
    {
        Regions[RegionIndex].ContainedActors.Add(Actor);
    }
}

void ASpatialPartitioner::ParallelPhysicsStep(float DeltaTime)
{
    if (!bEnabled) return;
    
    // More detailed timing - start
    double StartTime = FPlatformTime::Seconds();
    int32 TotalActorCount = 0;
    int32 TotalCollisions = 0;
    
    // Get current physics mode
    UHPCPhysicsSubsystem* PhysicsSubsystem = nullptr;
    UGameInstance* GameInstance = GetWorld()->GetGameInstance();
    if (GameInstance)
    {
        PhysicsSubsystem = GameInstance->GetSubsystem<UHPCPhysicsSubsystem>();
    }
    
    EPhysicsMode CurrentMode = EPhysicsMode::Standard;
    if (PhysicsSubsystem)
    {
        CurrentMode = PhysicsSubsystem->GetPhysicsMode();
    }
    
    // Choose processing method based on mode
    switch (CurrentMode)
    {
    case EPhysicsMode::Standard:
        // Standard mode - use Unreal's built-in physics
        // Nothing to do here, as Unreal handles it
        break;
            
    case EPhysicsMode::SpatialPartitioning:
        // Sequential spatial partitioning
        for (FPhysicsRegion& Region : Regions)
        {
            TotalActorCount += Region.ContainedActors.Num();
            TotalCollisions += ProcessRegionWithMetrics(Region, DeltaTime);
        }
        break;
            
    case EPhysicsMode::ParallelProcessing:
        // Basic multicore parallelization
        {
            // Count actors before processing
            for (const FPhysicsRegion& Region : Regions)
            {
                TotalActorCount += Region.ContainedActors.Num();
            }
            
            // Thread-safe collision counter
            FCriticalSection CounterLock;
            
            ParallelFor(Regions.Num(), [this, DeltaTime, &TotalCollisions, &CounterLock](int32 Index) {
                int32 RegionCollisions = ProcessRegionWithMetrics(Regions[Index], DeltaTime);
                
                // Update total collision count thread-safely
                FScopeLock Lock(&CounterLock);
                TotalCollisions += RegionCollisions;
            });
        }
        break;
            
    case EPhysicsMode::HighPerformanceParallel:
        // Advanced parallelization - use more threads and granular parallelism
        {
            // Count actors before processing
            for (const FPhysicsRegion& Region : Regions)
            {
                TotalActorCount += Region.ContainedActors.Num();
            }
            
            // Thread-safe collision counter
            FCriticalSection CounterLock;
            
            ParallelFor(Regions.Num(), [this, DeltaTime, &TotalCollisions, &CounterLock](int32 Index) {
                int32 RegionCollisions = ProcessRegionWithMetrics(Regions[Index], DeltaTime);
                
                // Update total collision count thread-safely
                FScopeLock Lock(&CounterLock);
                TotalCollisions += RegionCollisions;
            }, true); // Force more granular parallelism
        }
        break;
    }
    
    // Calculate detailed timing
    double EndTime = FPlatformTime::Seconds();
    float ElapsedMS = (EndTime - StartTime) * 1000.0f;
    
    // Log detailed timing every few frames
    static int32 FrameCounter = 0;
    if (++FrameCounter % 30 == 0)  // Log every 30 frames
    {
        FString ModeName;
        switch (CurrentMode)
        {
            case EPhysicsMode::Standard: ModeName = TEXT("Standard"); break;
            case EPhysicsMode::SpatialPartitioning: ModeName = TEXT("Spatial Partitioning"); break;
            case EPhysicsMode::ParallelProcessing: ModeName = TEXT("Multicore Parallel"); break;
            case EPhysicsMode::HighPerformanceParallel: ModeName = TEXT("High Performance Parallel"); break;
        }
        
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, 
            FString::Printf(TEXT("Physics [%s]: %.3f ms, %d actors, %d collisions"),
            *ModeName, ElapsedMS, TotalActorCount, TotalCollisions));
    }
    
    if (BenchmarkManager)
    {
        BenchmarkManager->StopPhysicsTimer();
    }
}

int32 ASpatialPartitioner::GetRegionIndex(const FVector& Location)
{
    if (GridDimension <= 0) return -1;
    
    // Calculate which region contains this location
    FVector NormalizedPos = Location / WorldSize;
    
    int32 X = FMath::Clamp(FMath::FloorToInt(NormalizedPos.X * GridDimension), 0, GridDimension - 1);
    int32 Y = FMath::Clamp(FMath::FloorToInt(NormalizedPos.Y * GridDimension), 0, GridDimension - 1);
    int32 Z = FMath::Clamp(FMath::FloorToInt(NormalizedPos.Z * GridDimension), 0, GridDimension - 1);
    
    return (X * GridDimension * GridDimension) + (Y * GridDimension) + Z;
}

void ASpatialPartitioner::ProcessRegion(FPhysicsRegion& Region, float DeltaTime)
{
    // Skip empty regions
    if (Region.ContainedActors.Num() == 0)
    {
        return;
    }
    
    // Apply the selected collision algorithm
    switch (CollisionAlgorithm)
    {
    case ECollisionAlgorithm::BruteForce:
        BruteForceCollisionDetection(Region.ContainedActors, DeltaTime);
        break;
            
    case ECollisionAlgorithm::SweepAndPrune:
    case ECollisionAlgorithm::ParallelSweepAndPrune:
        SweepAndPruneCollisionDetection(Region.ContainedActors, DeltaTime);
        break;
            
    case ECollisionAlgorithm::GPUBroadphase:
        // This would be handled by the GPU resources class
            // Just fall back to brute force in this implementation
                BruteForceCollisionDetection(Region.ContainedActors, DeltaTime);
        break;
    }
}

// New helper function to count collisions during processing
int32 ASpatialPartitioner::ProcessRegionWithMetrics(FPhysicsRegion& Region, float DeltaTime)
{
    // Skip empty regions
    if (Region.ContainedActors.Num() == 0)
    {
        return 0;
    }
    
    int32 CollisionCount = 0;
    
    // Apply the selected collision algorithm with metrics
    switch (CollisionAlgorithm)
    {
    case ECollisionAlgorithm::BruteForce:
        CollisionCount = BruteForceCollisionDetectionWithMetrics(Region.ContainedActors, DeltaTime);
        break;
            
    case ECollisionAlgorithm::SweepAndPrune:
    case ECollisionAlgorithm::ParallelSweepAndPrune:
        CollisionCount = SweepAndPruneCollisionDetectionWithMetrics(Region.ContainedActors, DeltaTime);
        break;
            
    case ECollisionAlgorithm::GPUBroadphase:
        // Just fall back to brute force in this implementation
        CollisionCount = BruteForceCollisionDetectionWithMetrics(Region.ContainedActors, DeltaTime);
        break;
    }
    
    return CollisionCount;
}

void ASpatialPartitioner::BruteForceCollisionDetection(TArray<AActor*>& Actors, float DeltaTime)
{
    // Brute force checks every pair of objects
    for (int32 i = 0; i < Actors.Num(); i++)
    {
        AActor* ActorA = Actors[i];
        if (!ActorA || !ActorA->GetRootComponent())
            continue;
            
        UPrimitiveComponent* CompA = Cast<UPrimitiveComponent>(ActorA->GetRootComponent());
        if (!CompA || !CompA->IsSimulatingPhysics())
            continue;
            
        for (int32 j = i + 1; j < Actors.Num(); j++)
        {
            AActor* ActorB = Actors[j];
            if (!ActorB || !ActorB->GetRootComponent())
                continue;
                
            UPrimitiveComponent* CompB = Cast<UPrimitiveComponent>(ActorB->GetRootComponent());
            if (!CompB || !CompB->IsSimulatingPhysics())
                continue;
                
            // Simple sphere-sphere collision detection
            FVector LocationA = ActorA->GetActorLocation();
            FVector LocationB = ActorB->GetActorLocation();
            
            float RadiusA = CompA->Bounds.SphereRadius;
            float RadiusB = CompB->Bounds.SphereRadius;
            
            float Distance = FVector::Distance(LocationA, LocationB);
            
            if (Distance < (RadiusA + RadiusB))
            {
                // Handle collision
                ResolveCollision(ActorA, ActorB, CompA, CompB, LocationA, LocationB, RadiusA, RadiusB, Distance, DeltaTime);
            }
        }
    }
}

// Modified collision detection with metrics
int32 ASpatialPartitioner::BruteForceCollisionDetectionWithMetrics(TArray<AActor*>& Actors, float DeltaTime)
{
    int32 CollisionCount = 0;
    
    // Brute force checks every pair of objects
    for (int32 i = 0; i < Actors.Num(); i++)
    {
        AActor* ActorA = Actors[i];
        if (!ActorA || !ActorA->GetRootComponent())
            continue;
            
        UPrimitiveComponent* CompA = Cast<UPrimitiveComponent>(ActorA->GetRootComponent());
        if (!CompA || !CompA->IsSimulatingPhysics())
            continue;
            
        for (int32 j = i + 1; j < Actors.Num(); j++)
        {
            AActor* ActorB = Actors[j];
            if (!ActorB || !ActorB->GetRootComponent())
                continue;
                
            UPrimitiveComponent* CompB = Cast<UPrimitiveComponent>(ActorB->GetRootComponent());
            if (!CompB || !CompB->IsSimulatingPhysics())
                continue;
                
            // Simple sphere-sphere collision detection
            FVector LocationA = ActorA->GetActorLocation();
            FVector LocationB = ActorB->GetActorLocation();
            
            float RadiusA = CompA->Bounds.SphereRadius;
            float RadiusB = CompB->Bounds.SphereRadius;
            
            float Distance = FVector::Distance(LocationA, LocationB);
            
            if (Distance < (RadiusA + RadiusB))
            {
                // Count collision
                CollisionCount++;
                
                // Handle collision
                ResolveCollision(ActorA, ActorB, CompA, CompB, LocationA, LocationB, RadiusA, RadiusB, Distance, DeltaTime);
            }
        }
    }
    
    return CollisionCount;
}

    // Sweep and Prune algorithm sorts objects by their axis-aligned bounding box
    // and only checks for collisions between overlapping intervals
void ASpatialPartitioner::SweepAndPruneCollisionDetection(TArray<AActor*>& Actors, float DeltaTime)
{
    // Early out for small numbers of actors
    if (Actors.Num() < 2)
        return;
        
    
    // Create array of axis intervals for each object
    struct FAxisInterval
    {
        float Min;
        float Max;
        int32 ActorIndex;
    };
    
    TArray<FAxisInterval> XIntervals;
    XIntervals.SetNum(Actors.Num());
    
    // Fill in intervals (just using X-axis for simplicity)
    for (int32 i = 0; i < Actors.Num(); i++)
    {
        AActor* Actor = Actors[i];
        if (!Actor || !Actor->GetRootComponent())
            continue;
            
        UPrimitiveComponent* Comp = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
        if (!Comp || !Comp->IsSimulatingPhysics())
            continue;
            
        FVector Location = Actor->GetActorLocation();
        float Radius = Comp->Bounds.SphereRadius;
        
        XIntervals[i].Min = Location.X - Radius;
        XIntervals[i].Max = Location.X + Radius;
        XIntervals[i].ActorIndex = i;
    }
    
    // Sort intervals by minimum value
    XIntervals.Sort([](const FAxisInterval& A, const FAxisInterval& B) {
        return A.Min < B.Min;
    });
    
    // Check for overlapping intervals
    TArray<TPair<int32, int32>> PotentialCollisions;
    
    for (int32 i = 0; i < XIntervals.Num(); i++)
    {
        for (int32 j = i + 1; j < XIntervals.Num(); j++)
        {
            // If this object's minimum is past the last object's maximum, no more overlaps are possible
            if (XIntervals[j].Min > XIntervals[i].Max)
                break;
                
            // These intervals overlap on the X-axis, so they're potential collisions
            PotentialCollisions.Add(TPair<int32, int32>(XIntervals[i].ActorIndex, XIntervals[j].ActorIndex));
        }
    }
    
    // Check potential collisions in detail - using ParallelFor
    FCriticalSection CollisionLock;
    ParallelFor(PotentialCollisions.Num(), [&](int32 Index) {
        const TPair<int32, int32>& Pair = PotentialCollisions[Index];
        AActor* ActorA = Actors[Pair.Key];
        AActor* ActorB = Actors[Pair.Value];
        
        if (!ActorA || !ActorB || !ActorA->GetRootComponent() || !ActorB->GetRootComponent())
            return;
            
        UPrimitiveComponent* CompA = Cast<UPrimitiveComponent>(ActorA->GetRootComponent());
        UPrimitiveComponent* CompB = Cast<UPrimitiveComponent>(ActorB->GetRootComponent());
        
        if (!CompA || !CompB || !CompA->IsSimulatingPhysics() || !CompB->IsSimulatingPhysics())
            return;
            
        // Full 3D collision check
        FVector LocationA = ActorA->GetActorLocation();
        FVector LocationB = ActorB->GetActorLocation();
        
        float RadiusA = CompA->Bounds.SphereRadius;
        float RadiusB = CompB->Bounds.SphereRadius;
        
        float Distance = FVector::Distance(LocationA, LocationB);
        
        if (Distance < (RadiusA + RadiusB))
        {
            // Handle collision - need to synchronize access
            FScopeLock Lock(&CollisionLock);
            ResolveCollision(ActorA, ActorB, CompA, CompB, LocationA, LocationB, RadiusA, RadiusB, Distance, DeltaTime);
        }
    });
}

// Modified sweep and prune with metrics
int32 ASpatialPartitioner::SweepAndPruneCollisionDetectionWithMetrics(TArray<AActor*>& Actors, float DeltaTime)
{
    // Early out for small numbers of actors
    if (Actors.Num() < 2)
        return 0;
    
    int32 CollisionCount = 0;
    
    // Create array of axis intervals for each object
    struct FAxisInterval
    {
        float Min;
        float Max;
        int32 ActorIndex;
    };
    
    TArray<FAxisInterval> XIntervals;
    XIntervals.SetNum(Actors.Num());
    
    // Fill in intervals (just using X-axis for simplicity)
    for (int32 i = 0; i < Actors.Num(); i++)
    {
        AActor* Actor = Actors[i];
        if (!Actor || !Actor->GetRootComponent())
            continue;
            
        UPrimitiveComponent* Comp = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
        if (!Comp || !Comp->IsSimulatingPhysics())
            continue;
            
        FVector Location = Actor->GetActorLocation();
        float Radius = Comp->Bounds.SphereRadius;
        
        XIntervals[i].Min = Location.X - Radius;
        XIntervals[i].Max = Location.X + Radius;
        XIntervals[i].ActorIndex = i;
    }
    
    // Sort intervals by minimum value
    XIntervals.Sort([](const FAxisInterval& A, const FAxisInterval& B) {
        return A.Min < B.Min;
    });
    
    // Check for overlapping intervals
    TArray<TPair<int32, int32>> PotentialCollisions;
    
    for (int32 i = 0; i < XIntervals.Num(); i++)
    {
        for (int32 j = i + 1; j < XIntervals.Num(); j++)
        {
            // If this object's minimum is past the last object's maximum, no more overlaps are possible
            if (XIntervals[j].Min > XIntervals[i].Max)
                break;
                
            // These intervals overlap on the X-axis, so they're potential collisions
            PotentialCollisions.Add(TPair<int32, int32>(XIntervals[i].ActorIndex, XIntervals[j].ActorIndex));
        }
    }
    
    // Check potential collisions in detail - using ParallelFor
    FCriticalSection CollisionLock;
    
    // Create atomic counter for collisions
    FThreadSafeCounter ThreadSafeCollisionCount;
    
    ParallelFor(PotentialCollisions.Num(), [&](int32 Index) {
        const TPair<int32, int32>& Pair = PotentialCollisions[Index];
        AActor* ActorA = Actors[Pair.Key];
        AActor* ActorB = Actors[Pair.Value];
        
        if (!ActorA || !ActorB || !ActorA->GetRootComponent() || !ActorB->GetRootComponent())
            return;
            
        UPrimitiveComponent* CompA = Cast<UPrimitiveComponent>(ActorA->GetRootComponent());
        UPrimitiveComponent* CompB = Cast<UPrimitiveComponent>(ActorB->GetRootComponent());
        
        if (!CompA || !CompB || !CompA->IsSimulatingPhysics() || !CompB->IsSimulatingPhysics())
            return;
            
        // Full 3D collision check
        FVector LocationA = ActorA->GetActorLocation();
        FVector LocationB = ActorB->GetActorLocation();
        
        float RadiusA = CompA->Bounds.SphereRadius;
        float RadiusB = CompB->Bounds.SphereRadius;
        
        float Distance = FVector::Distance(LocationA, LocationB);
        
        if (Distance < (RadiusA + RadiusB))
        {
            // Count collision
            ThreadSafeCollisionCount.Increment();
            
            // Handle collision - need to synchronize access
            FScopeLock Lock(&CollisionLock);
            ResolveCollision(ActorA, ActorB, CompA, CompB, LocationA, LocationB, RadiusA, RadiusB, Distance, DeltaTime);
        }
    });
    
    return ThreadSafeCollisionCount.GetValue();
}

void ASpatialPartitioner::ResolveCollision(AActor* ActorA, AActor* ActorB, UPrimitiveComponent* CompA,
    UPrimitiveComponent* CompB, const FVector& LocationA, const FVector& LocationB, float RadiusA, float RadiusB,
    float Distance, float DeltaTime)
{
    // Calculate collision response
    FVector Direction = (LocationB - LocationA).GetSafeNormal();
    float Overlap = (RadiusA + RadiusB) - Distance;
    
    // Simple collision response
    float MassA = CompA->GetMass();
    float MassB = CompB->GetMass();
    float TotalMass = MassA + MassB;
    
    if (TotalMass > 0.0f)
    {
        // Calculate impulse
        FVector VelocityA = CompA->GetPhysicsLinearVelocity();
        FVector VelocityB = CompB->GetPhysicsLinearVelocity();
        
        FVector RelativeVelocity = VelocityB - VelocityA;
        float DotProduct = FVector::DotProduct(RelativeVelocity, Direction);
        
        // Only apply impulse if objects are moving toward each other
        if (DotProduct < 0.0f)
        {
            // Coefficient of restitution (bounciness)
            const float Restitution = 0.8f;
            
            // Calculate impulse magnitude
            float ImpulseMagnitude = -(1.0f + Restitution) * DotProduct;
            ImpulseMagnitude /= (1.0f / MassA) + (1.0f / MassB);
            
            // Apply impulses
            FVector Impulse = Direction * ImpulseMagnitude;
            
            // Update velocities
            CompA->AddImpulse(-Impulse, NAME_None, true);
            CompB->AddImpulse(Impulse, NAME_None, true);
            
            // Resolve penetration
            if (MassA > 0.0f && MassB > 0.0f)
            {
                FVector PositionCorrection = Direction * Overlap;
                FVector CorrectionA = PositionCorrection * (MassB / TotalMass);
                FVector CorrectionB = PositionCorrection * (-MassA / TotalMass);
                
                ActorA->SetActorLocation(LocationA - CorrectionA, false, nullptr, ETeleportType::TeleportPhysics);
                ActorB->SetActorLocation(LocationB - CorrectionB, false, nullptr, ETeleportType::TeleportPhysics);
            }
        }
    }
}