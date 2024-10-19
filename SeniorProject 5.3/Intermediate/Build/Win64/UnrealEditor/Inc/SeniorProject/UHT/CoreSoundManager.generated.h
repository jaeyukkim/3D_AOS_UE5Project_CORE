// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/CoreSoundManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamePlaySoundType : uint8;
#ifdef SENIORPROJECT_CoreSoundManager_generated_h
#error "CoreSoundManager.generated.h already included, missing '#pragma once' in CoreSoundManager.h"
#endif
#define SENIORPROJECT_CoreSoundManager_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_38_DELEGATE \
SENIORPROJECT_API void FPlayingAnnouncerSound_DelegateWrapper(const FMulticastScriptDelegate& PlayingAnnouncerSound, EGamePlaySoundType SoundType);


#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayTeamSound);


#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreSoundManager(); \
	friend struct Z_Construct_UClass_UCoreSoundManager_Statics; \
public: \
	DECLARE_CLASS(UCoreSoundManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UCoreSoundManager)


#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreSoundManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSoundManager(UCoreSoundManager&&); \
	NO_API UCoreSoundManager(const UCoreSoundManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSoundManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreSoundManager) \
	NO_API virtual ~UCoreSoundManager();


#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_40_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UCoreSoundManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h


#define FOREACH_ENUM_EGAMEPLAYSOUNDTYPE(op) \
	op(EGamePlaySoundType::SpawnMinion) \
	op(EGamePlaySoundType::FirstBloodEnemy) \
	op(EGamePlaySoundType::FirstBloodAlly) \
	op(EGamePlaySoundType::EnemyDie) \
	op(EGamePlaySoundType::AllyDie) \
	op(EGamePlaySoundType::DoubleKill) \
	op(EGamePlaySoundType::TripleKill) \
	op(EGamePlaySoundType::EnemyTowerDestroyed) \
	op(EGamePlaySoundType::AllyTowerDestroyed) \
	op(EGamePlaySoundType::EnemyInhibitorDestroyed) \
	op(EGamePlaySoundType::AllyInhibitorDestroyed) \
	op(EGamePlaySoundType::AllyTowerUnderAttack) \
	op(EGamePlaySoundType::AllyInhibitorUnderAttack) \
	op(EGamePlaySoundType::AllyCoreUnderAttack) \
	op(EGamePlaySoundType::Defeat) \
	op(EGamePlaySoundType::Victory) 

enum class EGamePlaySoundType : uint8;
template<> struct TIsUEnumClass<EGamePlaySoundType> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<EGamePlaySoundType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
