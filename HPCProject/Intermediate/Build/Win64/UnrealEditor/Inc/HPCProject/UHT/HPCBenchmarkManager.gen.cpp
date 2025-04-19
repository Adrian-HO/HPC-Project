// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HPCProject/HPCBenchmarkManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPCBenchmarkManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
HPCPROJECT_API UClass* Z_Construct_UClass_UHPCBenchmarkManager();
HPCPROJECT_API UClass* Z_Construct_UClass_UHPCBenchmarkManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HPCProject();
// End Cross Module References

// Begin Class UHPCBenchmarkManager Function ExportPerformanceDataToCSV
struct Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics
{
	struct HPCBenchmarkManager_eventExportPerformanceDataToCSV_Parms
	{
		FString Filename;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Export performance data to CSV\n" },
#endif
		{ "ModuleRelativePath", "HPCBenchmarkManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export performance data to CSV" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPCBenchmarkManager_eventExportPerformanceDataToCSV_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPCBenchmarkManager, nullptr, "ExportPerformanceDataToCSV", nullptr, nullptr, Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::HPCBenchmarkManager_eventExportPerformanceDataToCSV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::HPCBenchmarkManager_eventExportPerformanceDataToCSV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPCBenchmarkManager::execExportPerformanceDataToCSV)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportPerformanceDataToCSV(Z_Param_Filename);
	P_NATIVE_END;
}
// End Class UHPCBenchmarkManager Function ExportPerformanceDataToCSV

// Begin Class UHPCBenchmarkManager Function GetAveragePhysicsTimeMS
struct Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics
{
	struct HPCBenchmarkManager_eventGetAveragePhysicsTimeMS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get average physics time over the last few frames\n" },
#endif
		{ "ModuleRelativePath", "HPCBenchmarkManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get average physics time over the last few frames" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPCBenchmarkManager_eventGetAveragePhysicsTimeMS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPCBenchmarkManager, nullptr, "GetAveragePhysicsTimeMS", nullptr, nullptr, Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::HPCBenchmarkManager_eventGetAveragePhysicsTimeMS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::HPCBenchmarkManager_eventGetAveragePhysicsTimeMS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPCBenchmarkManager::execGetAveragePhysicsTimeMS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAveragePhysicsTimeMS();
	P_NATIVE_END;
}
// End Class UHPCBenchmarkManager Function GetAveragePhysicsTimeMS

// Begin Class UHPCBenchmarkManager Function GetLastPhysicsTimeMS
struct Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics
{
	struct HPCBenchmarkManager_eventGetLastPhysicsTimeMS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the last measured physics time in milliseconds\n" },
#endif
		{ "ModuleRelativePath", "HPCBenchmarkManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the last measured physics time in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPCBenchmarkManager_eventGetLastPhysicsTimeMS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPCBenchmarkManager, nullptr, "GetLastPhysicsTimeMS", nullptr, nullptr, Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::HPCBenchmarkManager_eventGetLastPhysicsTimeMS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::HPCBenchmarkManager_eventGetLastPhysicsTimeMS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPCBenchmarkManager::execGetLastPhysicsTimeMS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLastPhysicsTimeMS();
	P_NATIVE_END;
}
// End Class UHPCBenchmarkManager Function GetLastPhysicsTimeMS

// Begin Class UHPCBenchmarkManager Function GetPhysicsObjectCount
struct Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics
{
	struct HPCBenchmarkManager_eventGetPhysicsObjectCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get current object count\n" },
#endif
		{ "ModuleRelativePath", "HPCBenchmarkManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current object count" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPCBenchmarkManager_eventGetPhysicsObjectCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPCBenchmarkManager, nullptr, "GetPhysicsObjectCount", nullptr, nullptr, Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::HPCBenchmarkManager_eventGetPhysicsObjectCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::HPCBenchmarkManager_eventGetPhysicsObjectCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPCBenchmarkManager::execGetPhysicsObjectCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPhysicsObjectCount();
	P_NATIVE_END;
}
// End Class UHPCBenchmarkManager Function GetPhysicsObjectCount

// Begin Class UHPCBenchmarkManager
void UHPCBenchmarkManager::StaticRegisterNativesUHPCBenchmarkManager()
{
	UClass* Class = UHPCBenchmarkManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportPerformanceDataToCSV", &UHPCBenchmarkManager::execExportPerformanceDataToCSV },
		{ "GetAveragePhysicsTimeMS", &UHPCBenchmarkManager::execGetAveragePhysicsTimeMS },
		{ "GetLastPhysicsTimeMS", &UHPCBenchmarkManager::execGetLastPhysicsTimeMS },
		{ "GetPhysicsObjectCount", &UHPCBenchmarkManager::execGetPhysicsObjectCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHPCBenchmarkManager);
UClass* Z_Construct_UClass_UHPCBenchmarkManager_NoRegister()
{
	return UHPCBenchmarkManager::StaticClass();
}
struct Z_Construct_UClass_UHPCBenchmarkManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HPCBenchmarkManager.h" },
		{ "ModuleRelativePath", "HPCBenchmarkManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHPCBenchmarkManager_ExportPerformanceDataToCSV, "ExportPerformanceDataToCSV" }, // 914982235
		{ &Z_Construct_UFunction_UHPCBenchmarkManager_GetAveragePhysicsTimeMS, "GetAveragePhysicsTimeMS" }, // 2595401040
		{ &Z_Construct_UFunction_UHPCBenchmarkManager_GetLastPhysicsTimeMS, "GetLastPhysicsTimeMS" }, // 2571696445
		{ &Z_Construct_UFunction_UHPCBenchmarkManager_GetPhysicsObjectCount, "GetPhysicsObjectCount" }, // 2803189788
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHPCBenchmarkManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHPCBenchmarkManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HPCProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHPCBenchmarkManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHPCBenchmarkManager_Statics::ClassParams = {
	&UHPCBenchmarkManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHPCBenchmarkManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UHPCBenchmarkManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHPCBenchmarkManager()
{
	if (!Z_Registration_Info_UClass_UHPCBenchmarkManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHPCBenchmarkManager.OuterSingleton, Z_Construct_UClass_UHPCBenchmarkManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHPCBenchmarkManager.OuterSingleton;
}
template<> HPCPROJECT_API UClass* StaticClass<UHPCBenchmarkManager>()
{
	return UHPCBenchmarkManager::StaticClass();
}
UHPCBenchmarkManager::UHPCBenchmarkManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHPCBenchmarkManager);
UHPCBenchmarkManager::~UHPCBenchmarkManager() {}
// End Class UHPCBenchmarkManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCBenchmarkManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHPCBenchmarkManager, UHPCBenchmarkManager::StaticClass, TEXT("UHPCBenchmarkManager"), &Z_Registration_Info_UClass_UHPCBenchmarkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHPCBenchmarkManager), 501744890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCBenchmarkManager_h_3093620733(TEXT("/Script/HPCProject"),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCBenchmarkManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCBenchmarkManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
