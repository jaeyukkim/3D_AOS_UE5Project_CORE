// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerBase/MyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
#ifdef SENIORPROJECT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define SENIORPROJECT_MyCharacter_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayAttackMontage_Implementation(UAnimMontage* Montage, int32 MontageIndex); \
	virtual bool Attack_Validate(); \
	virtual void Attack_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastPlayAttackMontage); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execHurt); \
	DECLARE_FUNCTION(execPlayFootSound);


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacterBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter) \
	NO_API virtual ~AMyCharacter();


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_23_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
