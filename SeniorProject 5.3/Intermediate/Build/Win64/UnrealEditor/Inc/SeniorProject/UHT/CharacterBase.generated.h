// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define SENIORPROJECT_CharacterBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetMaxWalkSpeed_Implementation(float NewSpeed); \
	virtual void MulticastHandleDeath_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastSetMaxWalkSpeed); \
	DECLARE_FUNCTION(execMulticastHandleDeath);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamName=NETFIELD_REP_START, \
		LineTag, \
		bDead, \
		bIsStunned, \
		NETFIELD_REP_END=bIsStunned	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	NO_API virtual ~ACharacterBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_23_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
