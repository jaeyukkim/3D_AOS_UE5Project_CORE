// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/KwangPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_KwangPlayer_generated_h
#error "KwangPlayer.generated.h already included, missing '#pragma once' in KwangPlayer.h"
#endif
#define SENIORPROJECT_KwangPlayer_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_10_DELEGATE \
SENIORPROJECT_API void FSwordDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SwordDestroyDelegate);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetbActiveWep); \
	DECLARE_FUNCTION(execGetbActiveWep); \
	DECLARE_FUNCTION(execDestroySword); \
	DECLARE_FUNCTION(execSetSwordLocation); \
	DECLARE_FUNCTION(execGetSwordLocation); \
	DECLARE_FUNCTION(execHideMagicCircle); \
	DECLARE_FUNCTION(execShowMagicCircle);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKwangPlayer(); \
	friend struct Z_Construct_UClass_AKwangPlayer_Statics; \
public: \
	DECLARE_CLASS(AKwangPlayer, AMyCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AKwangPlayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bActiveWep=NETFIELD_REP_START, \
		SwordLocation, \
		NETFIELD_REP_END=SwordLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKwangPlayer(AKwangPlayer&&); \
	NO_API AKwangPlayer(const AKwangPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKwangPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKwangPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKwangPlayer) \
	NO_API virtual ~AKwangPlayer();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_16_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AKwangPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
