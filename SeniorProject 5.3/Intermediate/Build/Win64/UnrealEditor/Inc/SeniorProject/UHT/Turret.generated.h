// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Turret/Turret.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef SENIORPROJECT_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define SENIORPROJECT_Turret_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_9_DELEGATE \
SENIORPROJECT_API void FTurretDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TurretDestroyedDelegate, FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamName);


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AMinions, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret) \
	NO_API virtual ~ATurret();


#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_13_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
