// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSetting/CoreGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef SENIORPROJECT_CoreGameState_generated_h
#error "CoreGameState.generated.h already included, missing '#pragma once' in CoreGameState.h"
#endif
#define SENIORPROJECT_CoreGameState_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInhibitorDestroyed); \
	DECLARE_FUNCTION(execGetValidTargetTurret); \
	DECLARE_FUNCTION(execUpdateTurretStates); \
	DECLARE_FUNCTION(execOnRep_BlueTeamScore); \
	DECLARE_FUNCTION(execOnRep_RedTeamScore);


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoreGameState(); \
	friend struct Z_Construct_UClass_ACoreGameState_Statics; \
public: \
	DECLARE_CLASS(ACoreGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ACoreGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RedTeamScore=NETFIELD_REP_START, \
		BlueTeamScore, \
		NETFIELD_REP_END=BlueTeamScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoreGameState(ACoreGameState&&); \
	NO_API ACoreGameState(const ACoreGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoreGameState) \
	NO_API virtual ~ACoreGameState();


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_14_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ACoreGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
