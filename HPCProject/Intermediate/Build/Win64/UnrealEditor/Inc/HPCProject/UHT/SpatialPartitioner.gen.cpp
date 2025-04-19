// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HPCProject/SpatialPartitioner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialPartitioner() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HPCPROJECT_API UClass* Z_Construct_UClass_ASpatialPartitioner();
HPCPROJECT_API UClass* Z_Construct_UClass_ASpatialPartitioner_NoRegister();
HPCPROJECT_API UClass* Z_Construct_UClass_UHPCBenchmarkManager_NoRegister();
HPCPROJECT_API UEnum* Z_Construct_UEnum_HPCProject_ECollisionAlgorithm();
HPCPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsRegion();
UPackage* Z_Construct_UPackage__Script_HPCProject();
// End Cross Module References

// Begin Enum ECollisionAlgorithm
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionAlgorithm;
static UEnum* ECollisionAlgorithm_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionAlgorithm.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HPCProject_ECollisionAlgorithm, (UObject*)Z_Construct_UPackage__Script_HPCProject(), TEXT("ECollisionAlgorithm"));
	}
	return Z_Registration_Info_UEnum_ECollisionAlgorithm.OuterSingleton;
}
template<> HPCPROJECT_API UEnum* StaticEnum<ECollisionAlgorithm>()
{
	return ECollisionAlgorithm_StaticEnum();
}
struct Z_Construct_UEnum_HPCProject_ECollisionAlgorithm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BruteForce.DisplayName", "Brute Force" },
		{ "BruteForce.Name", "ECollisionAlgorithm::BruteForce" },
		{ "GPUBroadphase.DisplayName", "GPU Broadphase" },
		{ "GPUBroadphase.Name", "ECollisionAlgorithm::GPUBroadphase" },
		{ "ModuleRelativePath", "SpatialPartitioner.h" },
		{ "ParallelSweepAndPrune.DisplayName", "Parallel Sweep And Prune" },
		{ "ParallelSweepAndPrune.Name", "ECollisionAlgorithm::ParallelSweepAndPrune" },
		{ "SweepAndPrune.DisplayName", "Sweep And Prune" },
		{ "SweepAndPrune.Name", "ECollisionAlgorithm::SweepAndPrune" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionAlgorithm::BruteForce", (int64)ECollisionAlgorithm::BruteForce },
		{ "ECollisionAlgorithm::SweepAndPrune", (int64)ECollisionAlgorithm::SweepAndPrune },
		{ "ECollisionAlgorithm::ParallelSweepAndPrune", (int64)ECollisionAlgorithm::ParallelSweepAndPrune },
		{ "ECollisionAlgorithm::GPUBroadphase", (int64)ECollisionAlgorithm::GPUBroadphase },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HPCProject_ECollisionAlgorithm_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HPCProject,
	nullptr,
	"ECollisionAlgorithm",
	"ECollisionAlgorithm",
	Z_Construct_UEnum_HPCProject_ECollisionAlgorithm_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HPCProject_ECollisionAlgorithm_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HPCProject_ECollisionAlgorithm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HPCProject_ECollisionAlgorithm_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HPCProject_ECollisionAlgorithm()
{
	if (!Z_Registration_Info_UEnum_ECollisionAlgorithm.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionAlgorithm.InnerSingleton, Z_Construct_UEnum_HPCProject_ECollisionAlgorithm_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionAlgorithm.InnerSingleton;
}
// End Enum ECollisionAlgorithm

// Begin ScriptStruct FPhysicsRegion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsRegion;
class UScriptStruct* FPhysicsRegion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsRegion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsRegion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsRegion, (UObject*)Z_Construct_UPackage__Script_HPCProject(), TEXT("PhysicsRegion"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsRegion.OuterSingleton;
}
template<> HPCPROJECT_API UScriptStruct* StaticStruct<FPhysicsRegion>()
{
	return FPhysicsRegion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsRegion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPartitioner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainedActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Entities within this region\n" },
#endif
		{ "ModuleRelativePath", "SpatialPartitioner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entities within this region" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContainedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsRegion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicsRegion_Statics::NewProp_ContainedActors_Inner = { "ContainedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhysicsRegion_Statics::NewProp_ContainedActors = { "ContainedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsRegion, ContainedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainedActors_MetaData), NewProp_ContainedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsRegion_Statics::NewProp_ContainedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsRegion_Statics::NewProp_ContainedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsRegion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsRegion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HPCProject,
	nullptr,
	&NewStructOps,
	"PhysicsRegion",
	Z_Construct_UScriptStruct_FPhysicsRegion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsRegion_Statics::PropPointers),
	sizeof(FPhysicsRegion),
	alignof(FPhysicsRegion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsRegion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsRegion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsRegion()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsRegion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsRegion.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsRegion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsRegion.InnerSingleton;
}
// End ScriptStruct FPhysicsRegion

// Begin Class ASpatialPartitioner
void ASpatialPartitioner::StaticRegisterNativesASpatialPartitioner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpatialPartitioner);
UClass* Z_Construct_UClass_ASpatialPartitioner_NoRegister()
{
	return ASpatialPartitioner::StaticClass();
}
struct Z_Construct_UClass_ASpatialPartitioner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialPartitioner.h" },
		{ "ModuleRelativePath", "SpatialPartitioner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable/disable the system\n" },
#endif
		{ "ModuleRelativePath", "SpatialPartitioner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionAlgorithm_MetaData[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current collision algorithm\n" },
#endif
		{ "ModuleRelativePath", "SpatialPartitioner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current collision algorithm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BenchmarkManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performance measurement\n" },
#endif
		{ "ModuleRelativePath", "SpatialPartitioner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance measurement" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionAlgorithm_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionAlgorithm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BenchmarkManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialPartitioner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ASpatialPartitioner*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpatialPartitioner), &Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_CollisionAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_CollisionAlgorithm = { "CollisionAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpatialPartitioner, CollisionAlgorithm), Z_Construct_UEnum_HPCProject_ECollisionAlgorithm, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionAlgorithm_MetaData), NewProp_CollisionAlgorithm_MetaData) }; // 3470507122
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_BenchmarkManager = { "BenchmarkManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpatialPartitioner, BenchmarkManager), Z_Construct_UClass_UHPCBenchmarkManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BenchmarkManager_MetaData), NewProp_BenchmarkManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialPartitioner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_CollisionAlgorithm_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_CollisionAlgorithm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPartitioner_Statics::NewProp_BenchmarkManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPartitioner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpatialPartitioner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HPCProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPartitioner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpatialPartitioner_Statics::ClassParams = {
	&ASpatialPartitioner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpatialPartitioner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPartitioner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPartitioner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpatialPartitioner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpatialPartitioner()
{
	if (!Z_Registration_Info_UClass_ASpatialPartitioner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpatialPartitioner.OuterSingleton, Z_Construct_UClass_ASpatialPartitioner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpatialPartitioner.OuterSingleton;
}
template<> HPCPROJECT_API UClass* StaticClass<ASpatialPartitioner>()
{
	return ASpatialPartitioner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialPartitioner);
ASpatialPartitioner::~ASpatialPartitioner() {}
// End Class ASpatialPartitioner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECollisionAlgorithm_StaticEnum, TEXT("ECollisionAlgorithm"), &Z_Registration_Info_UEnum_ECollisionAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3470507122U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicsRegion::StaticStruct, Z_Construct_UScriptStruct_FPhysicsRegion_Statics::NewStructOps, TEXT("PhysicsRegion"), &Z_Registration_Info_UScriptStruct_PhysicsRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsRegion), 3835286383U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpatialPartitioner, ASpatialPartitioner::StaticClass, TEXT("ASpatialPartitioner"), &Z_Registration_Info_UClass_ASpatialPartitioner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpatialPartitioner), 2959140321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_822996509(TEXT("/Script/HPCProject"),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
