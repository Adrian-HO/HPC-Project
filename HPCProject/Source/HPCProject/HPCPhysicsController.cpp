// Fill out your copyright notice in the Description page of Project Settings.


#include "HPCPhysicsController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "HPCBenchmarkManager.h"

AHPCPhysicsController::AHPCPhysicsController()
{
    PrimaryActorTick.bCanEverTick = true;
    
    // Create a simple collision component for the pawn
    UCapsuleComponent* CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent"));
    RootComponent = CapsuleComp;
    CapsuleComp->SetCollisionProfileName(TEXT("Pawn"));
    
    // Create the physics spawner component
    PhysicsSpawner = CreateDefaultSubobject<UPhysicsSpawner>(TEXT("PhysicsSpawner"));
    
    // Create the text render component
    StatsDisplay = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StatsDisplay"));
    StatsDisplay->SetupAttachment(RootComponent);
    StatsDisplay->SetRelativeLocation(FVector(0, 0, 100));
    StatsDisplay->SetRelativeRotation(FRotator(0, 180, 0));
    StatsDisplay->SetText(FText::FromString("HPC Physics Research"));
    StatsDisplay->SetTextRenderColor(FColor::Green);
    StatsDisplay->SetWorldSize(20.0f);
    
    // Set auto possess so player automatically controls this pawn
    AutoPossessPlayer = EAutoReceiveInput::Player0;

    MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));

    AccumulatedFPS = 0.0f;
    AccumulatedPhysicsTime = 0.0f;
    AccumulatedFrames = 0;
    LastStatsUpdateTime = 0.0f;
}

void AHPCPhysicsController::BeginPlay()
{
    Super::BeginPlay();
    
    // Set the physics object class for the spawner if needed
    if (PhysicsObjectClass && PhysicsSpawner)
    {
        // Use a setter method if you've added one to PhysicsSpawner
        PhysicsSpawner->SetPhysicsObjectClass(PhysicsObjectClass);
    }
    
    // Get physics subsystem
    UGameInstance* GameInstance = GetGameInstance();
    if (GameInstance)
    {
        PhysicsSubsystem = GameInstance->GetSubsystem<UHPCPhysicsSubsystem>();
    }
    
    // Debug message
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("HPC Physics Controller Initialized"));
}

void AHPCPhysicsController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Update stats display
    UpdateStatsDisplay();

    // Position text in front of camera
    if (StatsDisplay)
    {
        // Get camera location and forward vector
        FVector CameraLocation;
        FRotator CameraRotation;
        GetActorEyesViewPoint(CameraLocation, CameraRotation);
        
        // Position the text 150 units in front of camera, slightly below center
        FVector TextLocation = CameraLocation + (CameraRotation.Vector() * 150.0f) + FVector(0, 0, -30.0f);
        
        // Set text rotation to face the player
        FRotator TextRotation = CameraRotation;
        TextRotation.Pitch = 0; // Keep text upright
        TextRotation.Roll = 0;  // Keep text upright
        TextRotation.Yaw += 180.0f; // Flip to face the player
        
        // Update text component transform
        StatsDisplay->SetWorldLocation(TextLocation);
        StatsDisplay->SetWorldRotation(TextRotation);
    }
}

void AHPCPhysicsController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    
    // Bind input actions
    PlayerInputComponent->BindKey(EKeys::One, IE_Pressed, this, &AHPCPhysicsController::SwitchToStandardPhysics);
    PlayerInputComponent->BindKey(EKeys::Two, IE_Pressed, this, &AHPCPhysicsController::SwitchToSpatialPartitioning);
    PlayerInputComponent->BindKey(EKeys::Three, IE_Pressed, this, &AHPCPhysicsController::SwitchTomulticore);
    PlayerInputComponent->BindKey(EKeys::Four, IE_Pressed, this, &AHPCPhysicsController::SwitchToIntensiveMulticore);
    PlayerInputComponent->BindKey(EKeys::SpaceBar, IE_Pressed, this, &AHPCPhysicsController::SpawnObjects);
    PlayerInputComponent->BindKey(EKeys::C, IE_Pressed, this, &AHPCPhysicsController::ClearObjects);

    PlayerInputComponent->BindKey(EKeys::Down, IE_Pressed, this, &AHPCPhysicsController::DecreaseSpawnCount);
    PlayerInputComponent->BindKey(EKeys::Up, IE_Pressed, this, &AHPCPhysicsController::IncreaseSpawnCount);

    PlayerInputComponent->BindAxis("MoveForward", this, &AHPCPhysicsController::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AHPCPhysicsController::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &AHPCPhysicsController::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &AHPCPhysicsController::AddControllerPitchInput);
}

void AHPCPhysicsController::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        // Get forward direction based on camera orientation
        const FRotator Rotation = GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        
        // Get forward vector
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}

void AHPCPhysicsController::MoveRight(float Value)
{
    if (Value != 0.0f)
    {
        // Get right direction based on camera orientation
        const FRotator Rotation = GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        
        // Get right vector
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value);
    }
}

void AHPCPhysicsController::SwitchToStandardPhysics()
{
    if (PhysicsSubsystem)
    {
        PhysicsSubsystem->SetPhysicsMode(EPhysicsMode::Standard);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Switched to Standard Physics"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Physics Subsystem not found!"));
    }
}

void AHPCPhysicsController::SwitchToSpatialPartitioning()
{
    if (PhysicsSubsystem)
    {
        PhysicsSubsystem->SetPhysicsMode(EPhysicsMode::SpatialPartitioning);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Switched to Spatial Partitioning (Sequential)"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Physics Subsystem not found!"));
    }
}

void AHPCPhysicsController::SwitchTomulticore()
{
    //  for multicore
    if (PhysicsSubsystem)
    {
        PhysicsSubsystem->SetPhysicsMode(EPhysicsMode::ParallelProcessing);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Switched to Multicore Parallel Processing"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Physics Subsystem not found!"));
    }
}

void AHPCPhysicsController::SwitchToIntensiveMulticore()
{
    // intensive multicore test
    if (PhysicsSubsystem)
    {
        PhysicsSubsystem->SetPhysicsMode(EPhysicsMode::HighPerformanceParallel);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Switched to High Performance Parallel Processing"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Physics Subsystem not found!"));
    }
}

void AHPCPhysicsController::SpawnObjects()
{
    if (PhysicsSpawner && PhysicsObjectClass)
    {
        PhysicsSpawner->SpawnPhysicsObjects(SpawnCount);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, 
            FString::Printf(TEXT("Spawned %d Physics Objects"), SpawnCount));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, 
            TEXT("Cannot spawn objects: PhysicsSpawner or PhysicsObjectClass is missing!"));
    }
}

void AHPCPhysicsController::ClearObjects()
{
    if (PhysicsSpawner)
    {
        PhysicsSpawner->ClearSpawnedObjects();
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Cleared Physics Objects"));
    }
}

void AHPCPhysicsController::UpdateStatsDisplay()
{
     // Get the benchmark manager
    UWorld* World = GetWorld();
    if (!World) return;
    
    UHPCBenchmarkManager* BenchmarkManager = UHPCBenchmarkManager::GetInstance(World);
    if (!BenchmarkManager) return;
    
    // Calculate current values
    float CurrentPhysicsTime = BenchmarkManager->GetLastPhysicsTimeMS();
    int32 ObjectCount = BenchmarkManager->GetPhysicsObjectCount();
    float CurrentFPS = 1.0f / World->GetDeltaSeconds();
    
    // Accumulate values
    AccumulatedFPS += CurrentFPS;
    AccumulatedPhysicsTime += CurrentPhysicsTime;
    AccumulatedFrames++;
    
    // Check if it's time to update the display
    float CurrentTime = World->GetTimeSeconds();
    if (CurrentTime - LastStatsUpdateTime >= StatsUpdateInterval)
    {
        // Get current physics mode name
        FString ModeName = "Standard";
        if (PhysicsSubsystem)
        {
            switch (PhysicsSubsystem->GetPhysicsMode())
            {
                case EPhysicsMode::Standard:
                    ModeName = "Standard";
                    break;
                case EPhysicsMode::SpatialPartitioning:
                    ModeName = "Spatial Partitioning";
                    break;
                case EPhysicsMode::ParallelProcessing:
                    ModeName = "Multicore Parallel";
                    break;
                case EPhysicsMode::HighPerformanceParallel:
                    ModeName = "High Performance Parallel";
                    break;
            }
        }
        
        // Calculate averages
        float AverageFPS = (AccumulatedFrames > 0) ? AccumulatedFPS / AccumulatedFrames : 0.0f;
        float AveragePhysicsTime = (AccumulatedFrames > 0) ? AccumulatedPhysicsTime / AccumulatedFrames : 0.0f;
        
        // Build stats string
        FString StatsText = FString::Printf(
            TEXT("Physics Mode: %s\nObjects: %d\nPhysics Time: %.2f ms (avg)\nFPS: %.1f (avg)"),
            *ModeName, ObjectCount, AveragePhysicsTime, AverageFPS);
        
        // Update text component
        StatsDisplay->SetText(FText::FromString(StatsText));
        
        // Reset accumulators
        AccumulatedFPS = 0.0f;
        AccumulatedPhysicsTime = 0.0f;
        AccumulatedFrames = 0;
        LastStatsUpdateTime = CurrentTime;
    }
}

void AHPCPhysicsController::IncreaseSpawnCount()
{
    SpawnCount = FMath::Min(SpawnCount + 100, 5000);
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, 
        FString::Printf(TEXT("Spawn Count: %d"), SpawnCount));
}

void AHPCPhysicsController::DecreaseSpawnCount()
{
    SpawnCount = FMath::Max(SpawnCount - 100, 100);
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, 
        FString::Printf(TEXT("Spawn Count: %d"), SpawnCount));
}