// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HPCProject/PhysicsSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
HPCPROJECT_API UClass* Z_Construct_UClass_UPhysicsSpawner();
HPCPROJECT_API UClass* Z_Construct_UClass_UPhysicsSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_HPCProject();
// End Cross Module References

// Begin Class UPhysicsSpawner Function ClearSpawnedObjects
struct Z_Construct_UFunction_UPhysicsSpawner_ClearSpawnedObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpawner_ClearSpawnedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpawner, nullptr, "ClearSpawnedObjects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpawner_ClearSpawnedObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSpawner_ClearSpawnedObjects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPhysicsSpawner_ClearSpawnedObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSpawner_ClearSpawnedObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSpawner::execClearSpawnedObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSpawnedObjects();
	P_NATIVE_END;
}
// End Class UPhysicsSpawner Function ClearSpawnedObjects

// Begin Class UPhysicsSpawner Function SetPhysicsObjectClass
struct Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics
{
	struct PhysicsSpawner_eventSetPhysicsObjectClass_Parms
	{
		TSubclassOf<AActor> InClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add this new setter method\n" },
#endif
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add this new setter method" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsSpawner_eventSetPhysicsObjectClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::NewProp_InClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpawner, nullptr, "SetPhysicsObjectClass", nullptr, nullptr, Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::PhysicsSpawner_eventSetPhysicsObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::PhysicsSpawner_eventSetPhysicsObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSpawner::execSetPhysicsObjectClass)
{
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsObjectClass(Z_Param_InClass);
	P_NATIVE_END;
}
// End Class UPhysicsSpawner Function SetPhysicsObjectClass

// Begin Class UPhysicsSpawner Function SpawnPhysicsObjects
struct Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics
{
	struct PhysicsSpawner_eventSpawnPhysicsObjects_Parms
	{
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Research" },
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsSpawner_eventSpawnPhysicsObjects_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpawner, nullptr, "SpawnPhysicsObjects", nullptr, nullptr, Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::PhysicsSpawner_eventSpawnPhysicsObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::PhysicsSpawner_eventSpawnPhysicsObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSpawner::execSpawnPhysicsObjects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnPhysicsObjects(Z_Param_Count);
	P_NATIVE_END;
}
// End Class UPhysicsSpawner Function SpawnPhysicsObjects

// Begin Class UPhysicsSpawner
void UPhysicsSpawner::StaticRegisterNativesUPhysicsSpawner()
{
	UClass* Class = UPhysicsSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearSpawnedObjects", &UPhysicsSpawner::execClearSpawnedObjects },
		{ "SetPhysicsObjectClass", &UPhysicsSpawner::execSetPhysicsObjectClass },
		{ "SpawnPhysicsObjects", &UPhysicsSpawner::execSpawnPhysicsObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsSpawner);
UClass* Z_Construct_UClass_UPhysicsSpawner_NoRegister()
{
	return UPhysicsSpawner::StaticClass();
}
struct Z_Construct_UClass_UPhysicsSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PhysicsSpawner.h" },
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsObjectClass_MetaData[] = {
		{ "Category", "Physics Research" },
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingBetweenObjects_MetaData[] = {
		{ "Category", "Physics Research" },
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeX_MetaData[] = {
		{ "Category", "Physics Research" },
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnHeight_MetaData[] = {
		{ "Category", "Physics Research" },
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedObjects_MetaData[] = {
		{ "ModuleRelativePath", "PhysicsSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsObjectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingBetweenObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsSpawner_ClearSpawnedObjects, "ClearSpawnedObjects" }, // 2921347737
		{ &Z_Construct_UFunction_UPhysicsSpawner_SetPhysicsObjectClass, "SetPhysicsObjectClass" }, // 1709749882
		{ &Z_Construct_UFunction_UPhysicsSpawner_SpawnPhysicsObjects, "SpawnPhysicsObjects" }, // 3581285440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_PhysicsObjectClass = { "PhysicsObjectClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpawner, PhysicsObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsObjectClass_MetaData), NewProp_PhysicsObjectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpacingBetweenObjects = { "SpacingBetweenObjects", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpawner, SpacingBetweenObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingBetweenObjects_MetaData), NewProp_SpacingBetweenObjects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpawner, GridSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeX_MetaData), NewProp_GridSizeX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpawnHeight = { "SpawnHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpawner, SpawnHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnHeight_MetaData), NewProp_SpawnHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpawnedObjects_Inner = { "SpawnedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpawnedObjects = { "SpawnedObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpawner, SpawnedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedObjects_MetaData), NewProp_SpawnedObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_PhysicsObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpacingBetweenObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_GridSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpawnHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpawnedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpawner_Statics::NewProp_SpawnedObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HPCProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsSpawner_Statics::ClassParams = {
	&UPhysicsSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPhysicsSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpawner_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsSpawner()
{
	if (!Z_Registration_Info_UClass_UPhysicsSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsSpawner.OuterSingleton, Z_Construct_UClass_UPhysicsSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsSpawner.OuterSingleton;
}
template<> HPCPROJECT_API UClass* StaticClass<UPhysicsSpawner>()
{
	return UPhysicsSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSpawner);
UPhysicsSpawner::~UPhysicsSpawner() {}
// End Class UPhysicsSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsSpawner, UPhysicsSpawner::StaticClass, TEXT("UPhysicsSpawner"), &Z_Registration_Info_UClass_UPhysicsSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsSpawner), 804469028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_3419051299(TEXT("/Script/HPCProject"),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
