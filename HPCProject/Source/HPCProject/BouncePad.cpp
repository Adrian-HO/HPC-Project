// Fill out your copyright notice in the Description page of Project Settings.


#include "BouncePad.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Engine/StaticMesh.h"

ABouncePad::ABouncePad()
{
    PrimaryActorTick.bCanEverTick = false;
    
    // Create static mesh component
    PadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PadMesh"));
    RootComponent = PadMesh;
    
    // Set up a default cube mesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> 
        CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    if (CubeMeshAsset.Succeeded()) {
        PadMesh->SetStaticMesh(CubeMeshAsset.Object);
    }
    
    // Scale the mesh to be more pad-like
    PadMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.25f));
    
    // Set up physics
    PadMesh->SetSimulatePhysics(false);
    PadMesh->SetCollisionProfileName(TEXT("BlockAll"));
    
    // Create trigger box
    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    TriggerBox->SetupAttachment(RootComponent);
    TriggerBox->SetRelativeLocation(FVector(0.0f, 0.0f, 30.0f));
    TriggerBox->SetBoxExtent(FVector(50.0f, 50.0f, 10.0f));
    TriggerBox->SetCollisionProfileName(TEXT("Trigger"));
    
    // Bind collision event
    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABouncePad::OnOverlapBegin);
}

void ABouncePad::BeginPlay()
{
    Super::BeginPlay();
    
    // Apply the bounce material if specified
    if (BounceMaterial) {
        PadMesh->SetMaterial(0, BounceMaterial);
    }
}

void ABouncePad::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
                              UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
                              bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this && OtherComp)
    {
        // Check if component simulates physics
        if (OtherComp->IsSimulatingPhysics())
        {
            // Check for cooldown period
            float CurrentTime = GetWorld()->GetTimeSeconds();
            
            // Check if this object is on cooldown
            if (LastBounceTimeMap.Contains(OtherComp))
            {
                if (CurrentTime - LastBounceTimeMap[OtherComp] < BounceCooldown)
                {
                    // Skip this bounce, still on cooldown
                    return;
                }
            }
            
            // Update the last bounce time
            LastBounceTimeMap.Add(OtherComp, CurrentTime);
            
            // Reduce debug spam with static timer
            static float LastDebugTime = 0.0f;
            if (CurrentTime - LastDebugTime > 1.0f) // Only print once per second max
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, 
                    FString::Printf(TEXT("Bounce detected! Mult: %f"), BounceMultiplier));
                LastDebugTime = CurrentTime;
            }
            
            // Make sure we have a reasonable minimum bounce multiplier
            float ActualBounceMultiplier = FMath::Max(BounceMultiplier, 1.0f);
            
            // Start with base bounce direction
            FVector FinalBounceDirection = BounceDirection.GetSafeNormal();
            
            // Apply randomization if enabled
            if (bRandomizeDirection)
            {
                // Create a random rotation around X and Y axes
                float RandomX = FMath::RandRange(-RandomAngleVariance, RandomAngleVariance);
                float RandomY = FMath::RandRange(-RandomAngleVariance, RandomAngleVariance);
                
                FRotator RandomRotation(RandomX, RandomY, 0);
                FinalBounceDirection = RandomRotation.RotateVector(FinalBounceDirection);
            }
            
            // Get current velocity
            FVector CurrentVelocity = OtherComp->GetPhysicsLinearVelocity();
            
            // Ensure minimum bounce velocity for consistency
            float MinimumVelocity = 500.0f;
            float BounceSpeed = FMath::Max(CurrentVelocity.Size(), MinimumVelocity);
            
            // Calculate bounce velocity with guaranteed minimum
            FVector BounceVelocity = FinalBounceDirection * BounceSpeed * ActualBounceMultiplier;
            
            // Apply the impulse using velocity change for more direct control
            OtherComp->SetPhysicsLinearVelocity(BounceVelocity, false);
        }
    }
}