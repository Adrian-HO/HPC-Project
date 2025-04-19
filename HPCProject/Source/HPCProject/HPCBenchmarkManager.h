// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "HPCBenchmarkManager.generated.h"

/**
 * 
 */
UCLASS()
class HPCPROJECT_API UHPCBenchmarkManager : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	// Get singleton instance
	static UHPCBenchmarkManager* GetInstance(UWorld* World);
    
	// Start/stop timer for physics processing
	void StartPhysicsTimer();
	void StopPhysicsTimer();
    
	// Get the last measured physics time in milliseconds
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	float GetLastPhysicsTimeMS() const { return LastPhysicsTimeMS; }
    
	// Get average physics time over the last few frames
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	float GetAveragePhysicsTimeMS() const;
    
	// Set current object count for tracking
	void SetPhysicsObjectCount(int32 Count) { PhysicsObjectCount = Count; }
    
	// Get current object count
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	int32 GetPhysicsObjectCount() const { return PhysicsObjectCount; }
    
	// Export performance data to CSV
	UFUNCTION(BlueprintCallable, Category = "Physics Research")
	void ExportPerformanceDataToCSV(const FString& Filename);

private:
	// Time tracking
	double PhysicsStartTime = 0.0;
	double PhysicsEndTime = 0.0;
    
	// Last measured time in milliseconds
	float LastPhysicsTimeMS = 0.0f;
    
	// Ring buffer of recent times for averaging
	static const int32 TimeHistorySize = 60;
	TArray<float> PhysicsTimeHistory;
    
	// Current object count
	int32 PhysicsObjectCount = 0;
    
	// Performance data for export
	struct FPerformanceDataPoint
	{
		int32 ObjectCount;
		FString PhysicsMode;
		float TimeMS;
	};
    
	TArray<FPerformanceDataPoint> PerformanceData;
};
