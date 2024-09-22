// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/MyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define SENIORPROJECT_MyCharacter_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacterBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMyCharacter*>(this); }


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter) \
	NO_API virtual ~AMyCharacter();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_25_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
