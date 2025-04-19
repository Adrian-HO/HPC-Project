// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialPartitioner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HPCPROJECT_SpatialPartitioner_generated_h
#error "SpatialPartitioner.generated.h already included, missing '#pragma once' in SpatialPartitioner.h"
#endif
#define HPCPROJECT_SpatialPartitioner_generated_h

#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsRegion_Statics; \
	HPCPROJECT_API static class UScriptStruct* StaticStruct();


template<> HPCPROJECT_API UScriptStruct* StaticStruct<struct FPhysicsRegion>();

#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpatialPartitioner(); \
	friend struct Z_Construct_UClass_ASpatialPartitioner_Statics; \
public: \
	DECLARE_CLASS(ASpatialPartitioner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HPCProject"), NO_API) \
	DECLARE_SERIALIZER(ASpatialPartitioner)


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpatialPartitioner(ASpatialPartitioner&&); \
	ASpatialPartitioner(const ASpatialPartitioner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialPartitioner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialPartitioner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpatialPartitioner) \
	NO_API virtual ~ASpatialPartitioner();


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_40_PROLOG
#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HPCPROJECT_API UClass* StaticClass<class ASpatialPartitioner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_SpatialPartitioner_h


#define FOREACH_ENUM_ECOLLISIONALGORITHM(op) \
	op(ECollisionAlgorithm::BruteForce) \
	op(ECollisionAlgorithm::SweepAndPrune) \
	op(ECollisionAlgorithm::ParallelSweepAndPrune) \
	op(ECollisionAlgorithm::GPUBroadphase) 

enum class ECollisionAlgorithm : uint8;
template<> struct TIsUEnumClass<ECollisionAlgorithm> { enum { Value = true }; };
template<> HPCPROJECT_API UEnum* StaticEnum<ECollisionAlgorithm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
