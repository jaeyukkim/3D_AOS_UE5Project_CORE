// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterBase/DefaultBase/AnimInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_AnimInstanceBase_generated_h
#error "AnimInstanceBase.generated.h already included, missing '#pragma once' in AnimInstanceBase.h"
#endif
#define SENIORPROJECT_AnimInstanceBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDead); \
	DECLARE_FUNCTION(execAnimNotify_LeftAttack); \
	DECLARE_FUNCTION(execAnimNotify_RightAttack); \
	DECLARE_FUNCTION(execAnimNotify_ResetCombo); \
	DECLARE_FUNCTION(execAnimNotify_SaveAttack);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimInstanceBase(); \
	friend struct Z_Construct_UClass_UAnimInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UAnimInstanceBase, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstanceBase)


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstanceBase(UAnimInstanceBase&&); \
	NO_API UAnimInstanceBase(const UAnimInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstanceBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimInstanceBase) \
	NO_API virtual ~UAnimInstanceBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_13_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UAnimInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
