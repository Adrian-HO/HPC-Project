// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HPCProject/BouncePad.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBouncePad() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HPCPROJECT_API UClass* Z_Construct_UClass_ABouncePad();
HPCPROJECT_API UClass* Z_Construct_UClass_ABouncePad_NoRegister();
UPackage* Z_Construct_UPackage__Script_HPCProject();
// End Cross Module References

// Begin Class ABouncePad Function OnOverlapBegin
struct Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics
{
	struct BouncePad_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when something overlaps the trigger box\n" },
#endif
		{ "ModuleRelativePath", "BouncePad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when something overlaps the trigger box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BouncePad_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BouncePad_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BouncePad_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BouncePad_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BouncePad_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BouncePad_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BouncePad_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABouncePad, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::BouncePad_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::BouncePad_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABouncePad_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABouncePad_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABouncePad::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABouncePad Function OnOverlapBegin

// Begin Class ABouncePad
void ABouncePad::StaticRegisterNativesABouncePad()
{
	UClass* Class = ABouncePad::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ABouncePad::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABouncePad);
UClass* Z_Construct_UClass_ABouncePad_NoRegister()
{
	return ABouncePad::StaticClass();
}
struct Z_Construct_UClass_ABouncePad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BouncePad.h" },
		{ "ModuleRelativePath", "BouncePad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PadMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The mesh component for the bounce pad\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BouncePad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh component for the bounce pad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Box collision component to detect overlaps\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BouncePad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box collision component to detect overlaps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceMultiplier_MetaData[] = {
		{ "Category", "Bounce Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bounce strength multiplier\n" },
#endif
		{ "ModuleRelativePath", "BouncePad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounce strength multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceDirection_MetaData[] = {
		{ "Category", "Bounce Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction to apply bounce force (normalized internally)\n" },
#endif
		{ "ModuleRelativePath", "BouncePad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction to apply bounce force (normalized internally)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceMaterial_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to show on the bounce pad\n" },
#endif
		{ "ModuleRelativePath", "BouncePad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to show on the bounce pad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeDirection_MetaData[] = {
		{ "Category", "Bounce Settings" },
		{ "ModuleRelativePath", "BouncePad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomAngleVariance_MetaData[] = {
		{ "Category", "Bounce Settings" },
		{ "EditCondition", "bRandomizeDirection" },
		{ "ModuleRelativePath", "BouncePad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceCooldown_MetaData[] = {
		{ "Category", "Bounce Settings" },
		{ "ModuleRelativePath", "BouncePad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastBounceTimeMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map to track when objects last bounced\n" },
#endif
		{ "ModuleRelativePath", "BouncePad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map to track when objects last bounced" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PadMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BounceDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BounceMaterial;
	static void NewProp_bRandomizeDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomAngleVariance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastBounceTimeMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastBounceTimeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LastBounceTimeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABouncePad_OnOverlapBegin, "OnOverlapBegin" }, // 3911140839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABouncePad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_PadMesh = { "PadMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, PadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PadMesh_MetaData), NewProp_PadMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceMultiplier = { "BounceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, BounceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceMultiplier_MetaData), NewProp_BounceMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceDirection = { "BounceDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, BounceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceDirection_MetaData), NewProp_BounceDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceMaterial = { "BounceMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, BounceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceMaterial_MetaData), NewProp_BounceMaterial_MetaData) };
void Z_Construct_UClass_ABouncePad_Statics::NewProp_bRandomizeDirection_SetBit(void* Obj)
{
	((ABouncePad*)Obj)->bRandomizeDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_bRandomizeDirection = { "bRandomizeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABouncePad), &Z_Construct_UClass_ABouncePad_Statics::NewProp_bRandomizeDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeDirection_MetaData), NewProp_bRandomizeDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_RandomAngleVariance = { "RandomAngleVariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, RandomAngleVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomAngleVariance_MetaData), NewProp_RandomAngleVariance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceCooldown = { "BounceCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, BounceCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceCooldown_MetaData), NewProp_BounceCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_LastBounceTimeMap_ValueProp = { "LastBounceTimeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_LastBounceTimeMap_Key_KeyProp = { "LastBounceTimeMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABouncePad_Statics::NewProp_LastBounceTimeMap = { "LastBounceTimeMap", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncePad, LastBounceTimeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastBounceTimeMap_MetaData), NewProp_LastBounceTimeMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABouncePad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_PadMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_bRandomizeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_RandomAngleVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_BounceCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_LastBounceTimeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_LastBounceTimeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncePad_Statics::NewProp_LastBounceTimeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncePad_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABouncePad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HPCProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncePad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABouncePad_Statics::ClassParams = {
	&ABouncePad::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABouncePad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABouncePad_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncePad_Statics::Class_MetaDataParams), Z_Construct_UClass_ABouncePad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABouncePad()
{
	if (!Z_Registration_Info_UClass_ABouncePad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABouncePad.OuterSingleton, Z_Construct_UClass_ABouncePad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABouncePad.OuterSingleton;
}
template<> HPCPROJECT_API UClass* StaticClass<ABouncePad>()
{
	return ABouncePad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABouncePad);
ABouncePad::~ABouncePad() {}
// End Class ABouncePad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABouncePad, ABouncePad::StaticClass, TEXT("ABouncePad"), &Z_Registration_Info_UClass_ABouncePad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABouncePad), 416356931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_4025413887(TEXT("/Script/HPCProject"),
	Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
