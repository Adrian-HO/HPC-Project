// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef HPCPROJECT_PhysicsSpawner_generated_h
#error "PhysicsSpawner.generated.h already included, missing '#pragma once' in PhysicsSpawner.h"
#endif
#define HPCPROJECT_PhysicsSpawner_generated_h

#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPhysicsObjectClass); \
	DECLARE_FUNCTION(execClearSpawnedObjects); \
	DECLARE_FUNCTION(execSpawnPhysicsObjects);


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsSpawner(); \
	friend struct Z_Construct_UClass_UPhysicsSpawner_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSpawner, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HPCProject"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSpawner)


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsSpawner(UPhysicsSpawner&&); \
	UPhysicsSpawner(const UPhysicsSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsSpawner) \
	NO_API virtual ~UPhysicsSpawner();


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_10_PROLOG
#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HPCPROJECT_API UClass* StaticClass<class UPhysicsSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_PhysicsSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
