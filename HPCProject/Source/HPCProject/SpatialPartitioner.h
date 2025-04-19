// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "SpatialPartitioner.generated.h"

class UHPCBenchmarkManager;

UENUM(BlueprintType)
enum class ECollisionAlgorithm : uint8
{
	BruteForce UMETA(DisplayName = "Brute Force"),
	SweepAndPrune UMETA(DisplayName = "Sweep And Prune"),
	ParallelSweepAndPrune UMETA(DisplayName = "Parallel Sweep And Prune"),
	GPUBroadphase UMETA(DisplayName = "GPU Broadphase")
};

USTRUCT()
struct FPhysicsRegion
{
	GENERATED_BODY()
    
	// Spatial boundaries
	FBox Bounds;
    
	// Entities within this region
	UPROPERTY()
	TArray<AActor*> ContainedActors;
    
	// Thread ID assigned to this region
	int32 ThreadID;
    
	// Physics scene for this region
	FPhysScene* RegionPhysScene;
};

UCLASS()
class HPCPROJECT_API ASpatialPartitioner : public AActor
{
	GENERATED_BODY()
	
public:
	ASpatialPartitioner();
    
	// Initialize the grid
	void SetupPartitioning(FVector InWorldSize, int32 InGridDimension);
    
	// Change grid resolution
	void SetGridDimension(int32 NewDimension);
    
	// Change collision detection algorithm
	void SetCollisionAlgorithm(ECollisionAlgorithm NewAlgorithm);
    
	// Assign actor to appropriate region
	void RegisterActor(AActor* Actor);
    
	// Update actor region when it moves
	void UpdateActorRegion(AActor* Actor);
    
	// Calculate physics for all regions in parallel
	void ParallelPhysicsStep(float DeltaTime);

	int32 ProcessRegionWithMetrics(FPhysicsRegion& Region, float DeltaTime);
	int32 BruteForceCollisionDetectionWithMetrics(TArray<AActor*>& Actors, float DeltaTime);
	int32 SweepAndPruneCollisionDetectionWithMetrics(TArray<AActor*>& Actors, float DeltaTime);
    
	// Enable/disable the system
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Research")
	bool bEnabled = true;
    
	// Get regions for processing
	TArray<FPhysicsRegion>& GetRegions() { return Regions; }
    
	// Current collision algorithm
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Research")
	ECollisionAlgorithm CollisionAlgorithm = ECollisionAlgorithm::BruteForce;

	// Resolve collision between two actors
	void ResolveCollision(AActor* ActorA, AActor* ActorB, 
						 UPrimitiveComponent* CompA, UPrimitiveComponent* CompB,
						 const FVector& LocationA, const FVector& LocationB,
						 float RadiusA, float RadiusB, float Distance, float DeltaTime);

protected:
	// Grid of regions
	TArray<FPhysicsRegion> Regions;
    
	// Number of regions per dimension
	int32 GridDimension;
    
	// Size of the overall world
	FVector WorldSize;
    
	// For thread safety
	FCriticalSection RegionLock;
    
	// Calculate which region an actor belongs to
	int32 GetRegionIndex(const FVector& Location);
    
	// Process a single region
	void ProcessRegion(FPhysicsRegion& Region, float DeltaTime);
    
	// Collision detection algorithms
	void BruteForceCollisionDetection(TArray<AActor*>& Actors, float DeltaTime);
	void SweepAndPruneCollisionDetection(TArray<AActor*>& Actors, float DeltaTime);
    
	// Performance measurement
	UPROPERTY()
	UHPCBenchmarkManager* BenchmarkManager;
};
