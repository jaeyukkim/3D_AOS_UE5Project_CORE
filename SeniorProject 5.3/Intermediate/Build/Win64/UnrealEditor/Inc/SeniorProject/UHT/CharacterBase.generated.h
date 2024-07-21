// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterBase/DefaultBase/CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define SENIORPROJECT_CharacterBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execComboAttackSave);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	NO_API virtual ~ACharacterBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_15_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
