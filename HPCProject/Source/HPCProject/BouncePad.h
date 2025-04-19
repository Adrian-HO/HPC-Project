// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BouncePad.generated.h"

UCLASS()
class HPCPROJECT_API ABouncePad : public AActor
{
	GENERATED_BODY()
	
public:	
	ABouncePad();

	virtual void BeginPlay() override;
    
	// The mesh component for the bounce pad
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* PadMesh;
    
	// Box collision component to detect overlaps
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* TriggerBox;
    
	// Bounce strength multiplier
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce Settings")
	float BounceMultiplier = 2.0f;
    
	// Direction to apply bounce force (normalized internally)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce Settings")
	FVector BounceDirection = FVector(0, 0, 1);
    
	// Material to show on the bounce pad
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	class UMaterialInterface* BounceMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce Settings")
	bool bRandomizeDirection = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce Settings", meta = (EditCondition = "bRandomizeDirection"))
	float RandomAngleVariance = 15.0f;

	UPROPERTY(EditAnywhere, Category = "Bounce Settings")
	float BounceCooldown = 0.5f; // seconds
    
protected:
	// Called when something overlaps the trigger box
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
					   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
					   bool bFromSweep, const FHitResult& SweepResult);

private:
	// Map to track when objects last bounced
	UPROPERTY()
	TMap<UPrimitiveComponent*, float> LastBounceTimeMap;
};