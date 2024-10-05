// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerBase/MyPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
#ifdef SENIORPROJECT_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define SENIORPROJECT_MyPlayerController_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShowGoldAmount_Implementation(int32 GoldAmount, AActor* TargetCharacter); \
	virtual void ShowDamageNumber_Implementation(float DamageAmount, ACharacter* TargetCharacter, bool bCriticalHit, bool bMagicalDamage); \
 \
	DECLARE_FUNCTION(execShowGoldAmount); \
	DECLARE_FUNCTION(execShowDamageNumber);


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController) \
	NO_API virtual ~AMyPlayerController();


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_21_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
