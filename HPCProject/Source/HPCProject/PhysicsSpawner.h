// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsSpawner.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HPCPROJECT_API UPhysicsSpawner : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	UPhysicsSpawner();

	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	void SpawnPhysicsObjects(int32 Count);
    
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	void ClearSpawnedObjects();
    
	// Add this new setter method
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	void SetPhysicsObjectClass(TSubclassOf<AActor> InClass) { PhysicsObjectClass = InClass; }

	virtual void BeginPlay() override;
protected:

	UPROPERTY(EditAnywhere, Category = "Physics Research")
	TSubclassOf<AActor> PhysicsObjectClass;
    
	UPROPERTY(EditAnywhere, Category = "Physics Research")
	float SpacingBetweenObjects = 100.0f;
    
	UPROPERTY(EditAnywhere, Category = "Physics Research")
	int32 GridSizeX = 10;
    
	UPROPERTY(EditAnywhere, Category = "Physics Research")
	float SpawnHeight = 100.0f;
    
	UPROPERTY()
	TArray<AActor*> SpawnedObjects;
};

