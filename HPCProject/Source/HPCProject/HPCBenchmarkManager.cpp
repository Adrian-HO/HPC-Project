// Fill out your copyright notice in the Description page of Project Settings.


#include "HPCBenchmarkManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformTime.h"
#include "HPCPhysicsSubsystem.h"

UHPCBenchmarkManager* UHPCBenchmarkManager::GetInstance(UWorld* World)
{
    if (!World) return nullptr;
    
    return World->GetSubsystem<UHPCBenchmarkManager>();
}

void UHPCBenchmarkManager::StartPhysicsTimer()
{
    PhysicsStartTime = FPlatformTime::Seconds();
}

void UHPCBenchmarkManager::StopPhysicsTimer()
{
    PhysicsEndTime = FPlatformTime::Seconds();
    LastPhysicsTimeMS = (PhysicsEndTime - PhysicsStartTime) * 1000.0f;
    
    // Add to history for averaging
    if (PhysicsTimeHistory.Num() >= TimeHistorySize)
    {
        PhysicsTimeHistory.RemoveAt(0);
    }
    PhysicsTimeHistory.Add(LastPhysicsTimeMS);
    
    // Record data point if we have objects
    if (PhysicsObjectCount > 0)
    {
        FPerformanceDataPoint DataPoint;
        DataPoint.ObjectCount = PhysicsObjectCount;
        
        // Get current physics mode
        UGameInstance* GameInstance = GetWorld()->GetGameInstance();
        if (GameInstance)
        {
            UHPCPhysicsSubsystem* PhysicsSubsystem = GameInstance->GetSubsystem<UHPCPhysicsSubsystem>();
            if (PhysicsSubsystem)
            {
                switch (PhysicsSubsystem->GetPhysicsMode())
                {
                case EPhysicsMode::Standard:
                    DataPoint.PhysicsMode = "Standard";
                    break;
                case EPhysicsMode::SpatialPartitioning:
                    DataPoint.PhysicsMode = "Spatial Partitioning";
                    break;
                case EPhysicsMode::ParallelProcessing:
                    DataPoint.PhysicsMode = "Multicore Parallel";
                    break;
                case EPhysicsMode::HighPerformanceParallel:
                    DataPoint.PhysicsMode = "High Performance Parallel";
                    break;
                }
            }
        }
        
        DataPoint.TimeMS = LastPhysicsTimeMS;
        PerformanceData.Add(DataPoint);
    }
}

float UHPCBenchmarkManager::GetAveragePhysicsTimeMS() const
{
    if (PhysicsTimeHistory.Num() == 0) return 0.0f;
    
    float Sum = 0.0f;
    for (float Time : PhysicsTimeHistory)
    {
        Sum += Time;
    }
    
    return Sum / PhysicsTimeHistory.Num();
}

void UHPCBenchmarkManager::ExportPerformanceDataToCSV(const FString& Filename)
{
    FString CSVContent = "ObjectCount,PhysicsMode,TimeMS\n";
    
    for (const FPerformanceDataPoint& DataPoint : PerformanceData)
    {
        CSVContent += FString::Printf(TEXT("%d,%s,%f\n"), 
                                      DataPoint.ObjectCount, 
                                      *DataPoint.PhysicsMode, 
                                      DataPoint.TimeMS);
    }
    
    FFileHelper::SaveStringToFile(CSVContent, *Filename);
}

