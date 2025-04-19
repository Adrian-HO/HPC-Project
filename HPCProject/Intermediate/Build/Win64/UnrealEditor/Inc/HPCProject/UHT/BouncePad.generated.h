// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BouncePad.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HPCPROJECT_BouncePad_generated_h
#error "BouncePad.generated.h already included, missing '#pragma once' in BouncePad.h"
#endif
#define HPCPROJECT_BouncePad_generated_h

#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABouncePad(); \
	friend struct Z_Construct_UClass_ABouncePad_Statics; \
public: \
	DECLARE_CLASS(ABouncePad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HPCProject"), NO_API) \
	DECLARE_SERIALIZER(ABouncePad)


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABouncePad(ABouncePad&&); \
	ABouncePad(const ABouncePad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABouncePad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABouncePad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABouncePad) \
	NO_API virtual ~ABouncePad();


#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_9_PROLOG
#define FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HPCPROJECT_API UClass* StaticClass<class ABouncePad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akfh9_Desktop_Main_gamedev_HPCProject_Source_HPCProject_BouncePad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
