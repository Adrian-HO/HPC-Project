// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SpatialPartitioner.h"
#include "Tickable.h"
#include "HPCPhysicsSubsystem.generated.h"


UENUM(BlueprintType)
enum class EPhysicsMode : uint8
{
	Standard UMETA(DisplayName = "Standard Unreal Physics"),
	SpatialPartitioning UMETA(DisplayName = "Sequential Spatial Partitioning"),
	ParallelProcessing UMETA(DisplayName = "Multicore Parallel Processing"),
	HighPerformanceParallel UMETA(DisplayName = "High Performance Parallel")
};
/**
 * 
 */
UCLASS()
class HPCPROJECT_API UHPCPhysicsSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UHPCPhysicsSubsystem();
    
	// USubsystem implementation
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
    
	// FTickableGameObject implementation
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override { return true; }
	virtual TStatId GetStatId() const override { return TStatId(); }
    
	// Set the physics mode
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	void SetPhysicsMode(EPhysicsMode NewMode);
    
	// Get the current physics mode
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	EPhysicsMode GetPhysicsMode() const { return CurrentMode; }

	void RegisterAllPhysicsActors();

private:
	// Current physics processing mode
	UPROPERTY()
	EPhysicsMode CurrentMode = EPhysicsMode::Standard;
    
	// Spatial partitioner instance
	UPROPERTY()
	ASpatialPartitioner* SpatialPartitioner;
    
	// Initialize our custom physics systems
	void InitializePhysicsSystems();
    
	// Update registrations of physics actors
	void UpdateActorRegistrations();
    
	// Track registered actors
	UPROPERTY()
	TSet<AActor*> RegisteredActors;
    
	// World reference
	UPROPERTY()
	UWorld* World;
	
};
