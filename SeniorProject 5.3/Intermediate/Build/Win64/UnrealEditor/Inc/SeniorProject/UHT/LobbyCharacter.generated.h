// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/LobbyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyCharacter;
class AMyPlayerController;
class UTexture;
struct FGameplayTag;
#ifdef SENIORPROJECT_LobbyCharacter_generated_h
#error "LobbyCharacter.generated.h already included, missing '#pragma once' in LobbyCharacter.h"
#endif
#define SENIORPROJECT_LobbyCharacter_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_15_DELEGATE \
SENIORPROJECT_API void FSelectedCharacterChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SelectedCharacterChangedDelegate, const UTexture* CharacterImage);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_16_DELEGATE \
SENIORPROJECT_API void FPlayerChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerChangedDelegate, FGameplayTag const& TeamName, const AMyPlayerController* PC, const FString& UserName, const UTexture* CharacterImg);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlayerCharacterClass); \
	DECLARE_FUNCTION(execBroadcastCharacterSelectWidget);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyCharacter(); \
	friend struct Z_Construct_UClass_ALobbyCharacter_Statics; \
public: \
	DECLARE_CLASS(ALobbyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ALobbyCharacter)


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyCharacter(ALobbyCharacter&&); \
	NO_API ALobbyCharacter(const ALobbyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALobbyCharacter) \
	NO_API virtual ~ALobbyCharacter();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_19_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ALobbyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
