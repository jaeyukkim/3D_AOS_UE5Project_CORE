// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SENIORPROJECT_Minions_generated_h
#error "Minions.generated.h already included, missing '#pragma once' in Minions.h"
#endif
#define SENIORPROJECT_Minions_generated_h

#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_SPARSE_DATA
#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMinionSwordTrace); \
	DECLARE_FUNCTION(execHurt); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execComboAttackSave);


#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMinionSwordTrace); \
	DECLARE_FUNCTION(execHurt); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execComboAttackSave);


#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinions(); \
	friend struct Z_Construct_UClass_AMinions_Statics; \
public: \
	DECLARE_CLASS(AMinions, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMinions)


#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMinions(); \
	friend struct Z_Construct_UClass_AMinions_Statics; \
public: \
	DECLARE_CLASS(AMinions, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMinions)


#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinions(AMinions&&); \
	NO_API AMinions(const AMinions&); \
public:


#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinions(AMinions&&); \
	NO_API AMinions(const AMinions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinions)


#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_20_PROLOG
#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_RPC_WRAPPERS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_INCLASS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMinions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
