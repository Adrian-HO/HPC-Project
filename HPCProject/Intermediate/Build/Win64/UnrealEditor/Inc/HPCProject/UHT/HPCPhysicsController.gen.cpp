// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HPCProject/HPCPhysicsController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPCPhysicsController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
HPCPROJECT_API UClass* Z_Construct_UClass_AHPCPhysicsController();
HPCPROJECT_API UClass* Z_Construct_UClass_AHPCPhysicsController_NoRegister();
HPCPROJECT_API UClass* Z_Construct_UClass_UHPCPhysicsSubsystem_NoRegister();
HPCPROJECT_API UClass* Z_Construct_UClass_UPhysicsSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_HPCProject();
// End Cross Module References

// Begin Class AHPCPhysicsController
void AHPCPhysicsController::StaticRegisterNativesAHPCPhysicsController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHPCPhysicsController);
UClass* Z_Construct_UClass_AHPCPhysicsController_NoRegister()
{
	return AHPCPhysicsController::StaticClass();
}
struct Z_Construct_UClass_AHPCPhysicsController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HPCPhysicsController.h" },
		{ "ModuleRelativePath", "HPCPhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HPCPhysicsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSpawner_MetaData[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Physics spawner component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HPCPhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics spawner component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsDisplay_MetaData[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text render component for stats display\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HPCPhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text render component for stats display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsObjectClass_MetaData[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The physics object to spawn\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physics object to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Physics Research" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of objects to spawn when pressing the spacebar\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of objects to spawn when pressing the spacebar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSubsystem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to physics subsystem\n" },
#endif
		{ "ModuleRelativePath", "HPCPhysicsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to physics subsystem" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsSpawner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsDisplay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsObjectClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHPCPhysicsController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPCPhysicsController, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_PhysicsSpawner = { "PhysicsSpawner", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPCPhysicsController, PhysicsSpawner), Z_Construct_UClass_UPhysicsSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsSpawner_MetaData), NewProp_PhysicsSpawner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_StatsDisplay = { "StatsDisplay", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPCPhysicsController, StatsDisplay), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsDisplay_MetaData), NewProp_StatsDisplay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_PhysicsObjectClass = { "PhysicsObjectClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPCPhysicsController, PhysicsObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsObjectClass_MetaData), NewProp_PhysicsObjectClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPCPhysicsController, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_PhysicsSubsystem = { "PhysicsSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPCPhysicsController, PhysicsSubsystem), Z_Construct_UClass_UHPCPhysicsSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsSubsystem_MetaData), NewProp_PhysicsSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHPCPhysicsController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_PhysicsSpawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_StatsDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_PhysicsObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPCPhysicsController_Statics::NewProp_PhysicsSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHPCPhysicsController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHPCPhysicsController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HPCProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHPCPhysicsController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHPCPhysicsController_Statics::ClassParams = {
	&AHPCPhysicsController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHPCPhysicsController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHPCPhysicsController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHPCPhysicsController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHPCPhysicsController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHPCPhysicsController()
{
	if (!Z_Registration_Info_UClass_AHPCPhysicsController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHPCPhysicsController.OuterSingleton, Z_Construct_UClass_AHPCPhysicsController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHPCPhysicsController.OuterSingleton;
}
template<> HPCPROJECT_API UClass* StaticClass<AHPCPhysicsController>()
{
	return AHPCPhysicsController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHPCPhysicsController);
AHPCPhysicsController::~AHPCPhysicsController() {}
// End Class AHPCPhysicsController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHPCPhysicsController, AHPCPhysicsController::StaticClass, TEXT("AHPCPhysicsController"), &Z_Registration_Info_UClass_AHPCPhysicsController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHPCPhysicsController), 3571940501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsController_h_2678431369(TEXT("/Script/HPCProject"),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
