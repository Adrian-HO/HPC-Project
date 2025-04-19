// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "PhysicsSpawner.h"
#include "HPCPhysicsSubsystem.h"

#include "HPCPhysicsController.generated.h"

UCLASS()
class HPCPROJECT_API AHPCPhysicsController : public APawn
{
	GENERATED_BODY()

public:    
	AHPCPhysicsController();

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
    
	// Called to bind input (already part of APawn)
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	UFloatingPawnMovement* MovementComponent;
	
	// Physics spawner component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Physics Research")
	UPhysicsSpawner* PhysicsSpawner;
    
	// Text render component for stats display
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Physics Research")
	UTextRenderComponent* StatsDisplay;
    
	// The physics object to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Research")
	TSubclassOf<AActor> PhysicsObjectClass;
    
	// Number of objects to spawn when pressing the spacebar
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Research")
	int32 SpawnCount = 100;
    
	// Reference to physics subsystem
	UPROPERTY()
	UHPCPhysicsSubsystem* PhysicsSubsystem;
    
	// Input handlers
	void SwitchToStandardPhysics();
	void SwitchToSpatialPartitioning();
	void SwitchTomulticore();
	void SwitchToIntensiveMulticore();
	void SpawnObjects();
	void ClearObjects();
    
	// Update stats text
	void UpdateStatsDisplay();

	void IncreaseSpawnCount();
	void DecreaseSpawnCount();

	float AccumulatedFPS;
	float AccumulatedPhysicsTime;
	int32 AccumulatedFrames;
	float LastStatsUpdateTime;
	const float StatsUpdateInterval = 3.0f;
};
