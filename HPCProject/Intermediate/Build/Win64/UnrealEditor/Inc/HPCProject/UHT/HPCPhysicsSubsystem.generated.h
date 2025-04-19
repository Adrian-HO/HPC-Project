// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HPCPhysicsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPhysicsMode : uint8;
#ifdef HPCPROJECT_HPCPhysicsSubsystem_generated_h
#error "HPCPhysicsSubsystem.generated.h already included, missing '#pragma once' in HPCPhysicsSubsystem.h"
#endif
#define HPCPROJECT_HPCPhysicsSubsystem_generated_h

#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPhysicsMode); \
	DECLARE_FUNCTION(execSetPhysicsMode);


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHPCPhysicsSubsystem(); \
	friend struct Z_Construct_UClass_UHPCPhysicsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UHPCPhysicsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HPCProject"), NO_API) \
	DECLARE_SERIALIZER(UHPCPhysicsSubsystem)


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHPCPhysicsSubsystem(UHPCPhysicsSubsystem&&); \
	UHPCPhysicsSubsystem(const UHPCPhysicsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHPCPhysicsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHPCPhysicsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHPCPhysicsSubsystem) \
	NO_API virtual ~UHPCPhysicsSubsystem();


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_23_PROLOG
#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HPCPROJECT_API UClass* StaticClass<class UHPCPhysicsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_HPCPhysicsSubsystem_h


#define FOREACH_ENUM_EPHYSICSMODE(op) \
	op(EPhysicsMode::Standard) \
	op(EPhysicsMode::SpatialPartitioning) \
	op(EPhysicsMode::ParallelProcessing) \
	op(EPhysicsMode::HighPerformanceParallel) 

enum class EPhysicsMode : uint8;
template<> struct TIsUEnumClass<EPhysicsMode> { enum { Value = true }; };
template<> HPCPROJECT_API UEnum* StaticEnum<EPhysicsMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
