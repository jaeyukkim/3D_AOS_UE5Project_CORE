// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSetting/MyGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerStateBase;
class ATurret;
struct FGameplayTag;
#ifdef SENIORPROJECT_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define SENIORPROJECT_MyGameModeBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_17_DELEGATE \
SENIORPROJECT_API void FUpdateMinionTargetsSignature_DelegateWrapper(const FMulticastScriptDelegate& UpdateMinionTargetsSignature);


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_18_DELEGATE \
SENIORPROJECT_API void FUpdateSelectedCharacterDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSelectedCharacterDelegate, APlayerStateBase* PS);


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnMinion); \
	DECLARE_FUNCTION(execGetValidTargetTurret); \
	DECLARE_FUNCTION(execOnTurretDestroyed); \
	DECLARE_FUNCTION(execOnTurretSpawned);


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameModeBase) \
	NO_API virtual ~AMyGameModeBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_22_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
