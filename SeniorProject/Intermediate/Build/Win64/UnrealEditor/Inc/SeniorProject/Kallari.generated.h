// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SENIORPROJECT_Kallari_generated_h
#error "Kallari.generated.h already included, missing '#pragma once' in Kallari.h"
#endif
#define SENIORPROJECT_Kallari_generated_h

#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_SPARSE_DATA
#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTwoHandTrace); \
	DECLARE_FUNCTION(execHurt); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execComboAttackSave);


#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTwoHandTrace); \
	DECLARE_FUNCTION(execHurt); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execComboAttackSave);


#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKallari(); \
	friend struct Z_Construct_UClass_AKallari_Statics; \
public: \
	DECLARE_CLASS(AKallari, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AKallari)


#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAKallari(); \
	friend struct Z_Construct_UClass_AKallari_Statics; \
public: \
	DECLARE_CLASS(AKallari, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AKallari)


#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKallari(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKallari) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKallari); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKallari); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKallari(AKallari&&); \
	NO_API AKallari(const AKallari&); \
public:


#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKallari(AKallari&&); \
	NO_API AKallari(const AKallari&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKallari); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKallari); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKallari)


#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_14_PROLOG
#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_RPC_WRAPPERS \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_INCLASS \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AKallari>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_Source_SeniorProject_Player_Kallari_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
