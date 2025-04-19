// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HPCProject/HPCPhysicsSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPCPhysicsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
HPCPROJECT_API UClass* Z_Construct_UClass_ASpatialPartitioner_NoRegister();
HPCPROJECT_API UClass* Z_Construct_UClass_UHPCPhysicsSubsystem();
HPCPROJECT_API UClass* Z_Construct_UClass_UHPCPhysicsSubsystem_NoRegister();
HPCPROJECT_API UEnum* Z_Construct_UEnum_HPCProject_EPhysicsMode();
UPackage* Z_Construct_UPackage__Script_HPCProject();
// End Cross Module References

// Begin Enum EPhysicsMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsMode;
static UEnum* EPhysicsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhysicsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhysicsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HPCProject_EPhysicsMode, (UObject*)Z_Construct_UPackage__Script_HPCProject(), TEXT("EPhysicsMode"));
	}
	return Z_Registration_Info_UEnum_EPhysicsMode.OuterSingleton;
}
template<> HPCPROJECT_API UEnum* StaticEnum<EPhysicsMode>()
{
	return EPhysicsMode_StaticEnum();
}
struct Z_Construct_UEnum_HPCProject_EPhysicsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HighPerformanceParallel.DisplayName", "High Performance Parallel" },
		{ "HighPerformanceParallel.Name", "EPhysicsMode::HighPerformanceParallel" },
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
		{ "ParallelProcessing.DisplayName", "Multicore Parallel Processing" },
		{ "ParallelProcessing.Name", "EPhysicsMode::ParallelProcessing" },
		{ "SpatialPartitioning.DisplayName", "Sequential Spatial Partitioning" },
		{ "SpatialPartitioning.Name", "EPhysicsMode::SpatialPartitioning" },
		{ "Standard.DisplayName", "Standard Unreal Physics" },
		{ "Standard.Name", "EPhysicsMode::Standard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhysicsMode::Standard", (int64)EPhysicsMode::Standard },
		{ "EPhysicsMode::SpatialPartitioning", (int64)EPhysicsMode::SpatialPartitioning },
		{ "EPhysicsMode::ParallelProcessing", (int64)EPhysicsMode::ParallelProcessing },
		{ "EPhysicsMode::HighPerformanceParallel", (int64)EPhysicsMode::HighPerformanceParallel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HPCProject_EPhysicsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HPCProject,
	nullptr,
	"EPhysicsMode",
	"EPhysicsMode",
	Z_Construct_UEnum_HPCProject_EPhysicsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HPCProject_EPhysicsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HPCProject_EPhysicsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HPCProject_EPhysicsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HPCProject_EPhysicsMode()
{
	if (!Z_Registration_Info_UEnum_EPhysicsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsMode.InnerSingleton, Z_Construct_UEnum_HPCProject_EPhysicsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhysicsMode.InnerSingleton;
}
// End Enum EPhysicsMode

// Begin Class UHPCPhysicsSubsystem Function GetPhysicsMode
struct Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics
{
	struct HPCPhysicsSubsystem_eventGetPhysicsMode_Parms
	{
		EPhysicsMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the current physics mode\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current physics mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPCPhysicsSubsystem_eventGetPhysicsMode_Parms, ReturnValue), Z_Construct_UEnum_HPCProject_EPhysicsMode, METADATA_PARAMS(0, nullptr) }; // 3958004302
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPCPhysicsSubsystem, nullptr, "GetPhysicsMode", nullptr, nullptr, Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::HPCPhysicsSubsystem_eventGetPhysicsMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::HPCPhysicsSubsystem_eventGetPhysicsMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPCPhysicsSubsystem::execGetPhysicsMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPhysicsMode*)Z_Param__Result=P_THIS->GetPhysicsMode();
	P_NATIVE_END;
}
// End Class UHPCPhysicsSubsystem Function GetPhysicsMode

// Begin Class UHPCPhysicsSubsystem Function SetPhysicsMode
struct Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics
{
	struct HPCPhysicsSubsystem_eventSetPhysicsMode_Parms
	{
		EPhysicsMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the physics mode\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the physics mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPCPhysicsSubsystem_eventSetPhysicsMode_Parms, NewMode), Z_Construct_UEnum_HPCProject_EPhysicsMode, METADATA_PARAMS(0, nullptr) }; // 3958004302
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPCPhysicsSubsystem, nullptr, "SetPhysicsMode", nullptr, nullptr, Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::HPCPhysicsSubsystem_eventSetPhysicsMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::HPCPhysicsSubsystem_eventSetPhysicsMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHPCPhysicsSubsystem::execSetPhysicsMode)
{
	P_GET_ENUM(EPhysicsMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsMode(EPhysicsMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Class UHPCPhysicsSubsystem Function SetPhysicsMode

// Begin Class UHPCPhysicsSubsystem
void UHPCPhysicsSubsystem::StaticRegisterNativesUHPCPhysicsSubsystem()
{
	UClass* Class = UHPCPhysicsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPhysicsMode", &UHPCPhysicsSubsystem::execGetPhysicsMode },
		{ "SetPhysicsMode", &UHPCPhysicsSubsystem::execSetPhysicsMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHPCPhysicsSubsystem);
UClass* Z_Construct_UClass_UHPCPhysicsSubsystem_NoRegister()
{
	return UHPCPhysicsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UHPCPhysicsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HPCPhysicsSubsystem.h" },
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current physics processing mode\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current physics processing mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialPartitioner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spatial partitioner instance\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spatial partitioner instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Track registered actors\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Track registered actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World reference\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpatialPartitioner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RegisteredActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHPCPhysicsSubsystem_GetPhysicsMode, "GetPhysicsMode" }, // 769001237
		{ &Z_Construct_UFunction_UHPCPhysicsSubsystem_SetPhysicsMode, "SetPhysicsMode" }, // 811599739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHPCPhysicsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_CurrentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_CurrentMode = { "CurrentMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHPCPhysicsSubsystem, CurrentMode), Z_Construct_UEnum_HPCProject_EPhysicsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMode_MetaData), NewProp_CurrentMode_MetaData) }; // 3958004302
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_SpatialPartitioner = { "SpatialPartitioner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHPCPhysicsSubsystem, SpatialPartitioner), Z_Construct_UClass_ASpatialPartitioner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialPartitioner_MetaData), NewProp_SpatialPartitioner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_RegisteredActors_ElementProp = { "RegisteredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_RegisteredActors = { "RegisteredActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHPCPhysicsSubsystem, RegisteredActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredActors_MetaData), NewProp_RegisteredActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHPCPhysicsSubsystem, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_CurrentMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_CurrentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_SpatialPartitioner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_RegisteredActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_RegisteredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HPCProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::ClassParams = {
	&UHPCPhysicsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHPCPhysicsSubsystem()
{
	if (!Z_Registration_Info_UClass_UHPCPhysicsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHPCPhysicsSubsystem.OuterSingleton, Z_Construct_UClass_UHPCPhysicsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHPCPhysicsSubsystem.OuterSingleton;
}
template<> HPCPROJECT_API UClass* StaticClass<UHPCPhysicsSubsystem>()
{
	return UHPCPhysicsSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHPCPhysicsSubsystem);
UHPCPhysicsSubsystem::~UHPCPhysicsSubsystem() {}
// End Class UHPCPhysicsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPhysicsMode_StaticEnum, TEXT("EPhysicsMode"), &Z_Registration_Info_UEnum_EPhysicsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3958004302U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHPCPhysicsSubsystem, UHPCPhysicsSubsystem::StaticClass, TEXT("UHPCPhysicsSubsystem"), &Z_Registration_Info_UClass_UHPCPhysicsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHPCPhysicsSubsystem), 3686266752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_2846858424(TEXT("/Script/HPCProject"),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
