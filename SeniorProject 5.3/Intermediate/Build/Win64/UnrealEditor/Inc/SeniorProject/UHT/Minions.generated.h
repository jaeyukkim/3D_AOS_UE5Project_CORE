// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Enemy/Monster/Minions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_Minions_generated_h
#error "Minions.generated.h already included, missing '#pragma once' in Minions.h"
#endif
#define SENIORPROJECT_Minions_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Mesh); \
	DECLARE_FUNCTION(execSetIsMeshChanged);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinions(); \
	friend struct Z_Construct_UClass_AMinions_Statics; \
public: \
	DECLARE_CLASS(AMinions, ACharacterBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMinions) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsMeshChanged=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsMeshChanged	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinions(AMinions&&); \
	NO_API AMinions(const AMinions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinions); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMinions) \
	NO_API virtual ~AMinions();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_17_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMinions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
