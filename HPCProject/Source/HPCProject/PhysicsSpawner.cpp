// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsSpawner.h"
#include "Engine/World.h"
#include "HPCBenchmarkManager.h"

UPhysicsSpawner::UPhysicsSpawner()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPhysicsSpawner::BeginPlay()
{
	Super::BeginPlay();
}

void UPhysicsSpawner::SpawnPhysicsObjects(int32 Count)
{
	// Clear any existing objects first
	ClearSpawnedObjects();
    
	UWorld* World = GetWorld();
	if (!World || !PhysicsObjectClass) return;
    
	SpawnedObjects.Reserve(Count);
    
	// Calculate grid dimensions for a square pattern
	// Take the square root and round up to get grid size
	int32 GridSize = FMath::CeilToInt(FMath::Sqrt((float)Count));
    
	// Calculate spacing to maintain the desired density
	float AdjustedSpacing = SpacingBetweenObjects;
    
	for (int32 Index = 0; Index < Count; ++Index)
	{
		// Calculate row and column in a square grid
		int32 Row = Index / GridSize;
		int32 Column = Index % GridSize;
        
		// Calculate position in square pattern, centered on the origin
		float X = (Column - (GridSize / 2.0f)) * AdjustedSpacing;
		float Y = (Row - (GridSize / 2.0f)) * AdjustedSpacing;
		float Z = SpawnHeight;
        
		FVector SpawnLocation = FVector(X, Y, Z);
		FRotator SpawnRotation = FRotator::ZeroRotator;
        
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        
		AActor* SpawnedActor = World->SpawnActor<AActor>(PhysicsObjectClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (SpawnedActor)
		{
			SpawnedObjects.Add(SpawnedActor);
		}
	}
    
	// Notify the benchmark manager about the new object count
	UHPCBenchmarkManager* BenchmarkManager = UHPCBenchmarkManager::GetInstance(World);
	if (BenchmarkManager)
	{
		BenchmarkManager->SetPhysicsObjectCount(SpawnedObjects.Num());
	}
}

void UPhysicsSpawner::ClearSpawnedObjects()
{
	for (AActor* Actor : SpawnedObjects)
	{
		if (Actor)
		{
			Actor->Destroy();
		}
	}
    
	SpawnedObjects.Empty();
}


