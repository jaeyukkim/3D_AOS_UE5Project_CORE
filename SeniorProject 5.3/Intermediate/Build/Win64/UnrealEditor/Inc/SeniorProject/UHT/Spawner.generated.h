// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/Gameplay/Spawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define SENIORPROJECT_Spawner_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_11_DELEGATE \
SENIORPROJECT_API void FOnMinionSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMinionSpawnSignature);


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_12_DELEGATE \
SENIORPROJECT_API void FOnSuperMinionSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSuperMinionSpawnSignature);


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_13_DELEGATE \
SENIORPROJECT_API void FOnNeutralityMonsterSignature_DelegateWrapper(const FMulticastScriptDelegate& OnNeutralityMonsterSignature);


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner) \
	NO_API virtual ~ASpawner();


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_17_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ASpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
