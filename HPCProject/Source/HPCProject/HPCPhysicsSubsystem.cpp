// Fill out your copyright notice in the Description page of Project Settings.


#include "HPCPhysicsSubsystem.h"
#include "HPCBenchmarkManager.h"
#include "SpatialPartitioner.h"
#include "Engine/World.h"
#include "EngineUtils.h"


UHPCPhysicsSubsystem::UHPCPhysicsSubsystem()
{
}

void UHPCPhysicsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    World = GetWorld();
    if (World)
    {
        // Initialize physics systems
        InitializePhysicsSystems();
    }
}

void UHPCPhysicsSubsystem::Deinitialize()
{
    Super::Deinitialize();
}

void UHPCPhysicsSubsystem::Tick(float DeltaTime)
{
    if (!World) return;
    
    // Start benchmark timer
    UHPCBenchmarkManager* BenchmarkManager = UHPCBenchmarkManager::GetInstance(World);
    if (BenchmarkManager)
    {
        BenchmarkManager->StartPhysicsTimer();
    }
    
    switch(CurrentMode)
    {
    case EPhysicsMode::Standard:
            // Iterate through physics objects to measure similar overhead
            for (TActorIterator<AActor> It(World); It; ++It)
            {
                AActor* Actor = *It;
                if (Actor && IsValid(Actor) && Actor->GetRootComponent())
                {
                    UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
                    if (PrimComp && PrimComp->IsSimulatingPhysics())
                    {
                        // Just read values to simulate similar overhead
                        FVector Location = Actor->GetActorLocation();
                        FVector Velocity = PrimComp->GetPhysicsLinearVelocity();
                    }
                }
            }
        break;
            
    case EPhysicsMode::SpatialPartitioning:
        // Update spatial grid
        UpdateActorRegistrations();
            
        // Process physics with spatial optimization
        if (SpatialPartitioner && SpatialPartitioner->bEnabled)
        {
            SpatialPartitioner->ParallelPhysicsStep(DeltaTime);
        }
        break;
            
    case EPhysicsMode::ParallelProcessing:
        // Update spatial grid
        UpdateActorRegistrations();
            
        // Process physics with multi-threading
        if (SpatialPartitioner && SpatialPartitioner->bEnabled)
        {
            SpatialPartitioner->ParallelPhysicsStep(DeltaTime);
        }
        break;
            
    case EPhysicsMode::HighPerformanceParallel:
        // Update spatial grid
        UpdateActorRegistrations();
            
        // Process physics with enhanced parallel
        if (SpatialPartitioner && SpatialPartitioner->bEnabled)
        {
            SpatialPartitioner->ParallelPhysicsStep(DeltaTime);
        }
        break;
    }
    
    // Stop benchmark timer
    if (BenchmarkManager)
    {
        BenchmarkManager->StopPhysicsTimer();
    }
}

void UHPCPhysicsSubsystem::SetPhysicsMode(EPhysicsMode NewMode)
{
   // Store previous mode for cleanup
    EPhysicsMode OldMode = CurrentMode;
    CurrentMode = NewMode;
    
    // Initialize new mode-specific resources
    switch(CurrentMode)
    {
        case EPhysicsMode::Standard:
            // Enable Unreal's built-in physics
            if (World)
            {
                World->bShouldSimulatePhysics = true;
                // Disable our custom physics calculation
                if (SpatialPartitioner)
                {
                    SpatialPartitioner->bEnabled = false;
                }
            }
            break;
            
        case EPhysicsMode::SpatialPartitioning:
            if (World)
            {
                World->bShouldSimulatePhysics = true;
            }
            
            // Initialize spatial partitioning grid
            if (SpatialPartitioner)
            {
                FVector WorldSize(10000.0f, 10000.0f, 5000.0f);
                SpatialPartitioner->SetupPartitioning(WorldSize, 4); // 4x4x4 grid
                SpatialPartitioner->bEnabled = true;
                SpatialPartitioner->SetCollisionAlgorithm(ECollisionAlgorithm::BruteForce);
            }
            break;
            
        case EPhysicsMode::ParallelProcessing:
            if (World)
            {
                World->bShouldSimulatePhysics = true;
            }
            
            if (SpatialPartitioner)
            {
                FVector WorldSize(10000.0f, 10000.0f, 5000.0f);
                SpatialPartitioner->SetupPartitioning(WorldSize, 8); // More divisions for parallel processing
                SpatialPartitioner->bEnabled = true;
                SpatialPartitioner->SetCollisionAlgorithm(ECollisionAlgorithm::ParallelSweepAndPrune);
            }
            break;
            
        case EPhysicsMode::HighPerformanceParallel:
            if (World)
            {
                World->bShouldSimulatePhysics = true;
            }
            
            if (SpatialPartitioner)
            {
                FVector WorldSize(10000.0f, 10000.0f, 5000.0f);
                SpatialPartitioner->SetupPartitioning(WorldSize, 16); // Finer grid for more parallel work
                SpatialPartitioner->bEnabled = true;
                SpatialPartitioner->SetCollisionAlgorithm(ECollisionAlgorithm::ParallelSweepAndPrune);
            }
            break;
    }
    
    // Register all current physics actors with the new system
    RegisterAllPhysicsActors();
}

void UHPCPhysicsSubsystem::InitializePhysicsSystems()
{
    if (!World) return;
    
    // Create spatial partitioner
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    
    SpatialPartitioner = World->SpawnActor<ASpatialPartitioner>(SpawnParams);
    if (SpatialPartitioner)
    {
        // Initialize with reasonable defaults for a game level
        FVector WorldSize(10000.0f, 10000.0f, 5000.0f);
        const int32 GridDimension = 4; // 4x4x4 grid = 64 regions
        
        SpatialPartitioner->SetupPartitioning(WorldSize, GridDimension);
        SpatialPartitioner->bEnabled = (CurrentMode == EPhysicsMode::SpatialPartitioning);
    }
}

void UHPCPhysicsSubsystem::UpdateActorRegistrations()
{
    if (!World || !SpatialPartitioner) return;
    
    // Get all physics-enabled actors
    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* Actor = *It;
        if (Actor && IsValid(Actor) && Actor->GetRootComponent())
        {
            UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
            if (PrimComp && PrimComp->IsSimulatingPhysics())
            {
                // Check if already registered
                if (!RegisteredActors.Contains(Actor))
                {
                    SpatialPartitioner->RegisterActor(Actor);
                    RegisteredActors.Add(Actor);
                }
                else
                {
                    // Update region if actor has moved
                    SpatialPartitioner->UpdateActorRegion(Actor);
                }
            }
        }
    }
}

void UHPCPhysicsSubsystem::RegisterAllPhysicsActors()
{
    if (!World || !SpatialPartitioner) return;
    
    // Clear existing registrations
    RegisteredActors.Empty();
    
    // Register all physics actors
    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* Actor = *It;
        if (Actor && IsValid(Actor) && Actor->GetRootComponent())
        {
            UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
            if (PrimComp && PrimComp->IsSimulatingPhysics())
            {
                SpatialPartitioner->RegisterActor(Actor);
                RegisteredActors.Add(Actor);
            }
        }
    }
}

