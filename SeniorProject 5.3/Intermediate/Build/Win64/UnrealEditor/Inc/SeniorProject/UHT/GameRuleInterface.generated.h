// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/GameRuleInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
struct FGameplayTag;
#ifdef SENIORPROJECT_GameRuleInterface_generated_h
#error "GameRuleInterface.generated.h already included, missing '#pragma once' in GameRuleInterface.h"
#endif
#define SENIORPROJECT_GameRuleInterface_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FGameplayTag GetTurretLevelTag_Implementation() const { return FGameplayTag(); }; \
	virtual void SetLineTag_Implementation(FGameplayTag NewLineTag) {}; \
	virtual FGameplayTag GetLineTag_Implementation() const { return FGameplayTag(); }; \
	virtual void SetTeamNameByTag_Implementation(FGameplayTag NewTeamName) {}; \
	virtual void SetTeamNameByPlayerState_Implementation(APlayerState* PS) {}; \
	virtual FGameplayTag GetTeamName_Implementation() const { return FGameplayTag(); }; \
 \
	DECLARE_FUNCTION(execGetTurretLevelTag); \
	DECLARE_FUNCTION(execSetLineTag); \
	DECLARE_FUNCTION(execGetLineTag); \
	DECLARE_FUNCTION(execSetTeamNameByTag); \
	DECLARE_FUNCTION(execSetTeamNameByPlayerState); \
	DECLARE_FUNCTION(execGetTeamName);


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SENIORPROJECT_API UGameRuleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SENIORPROJECT_API UGameRuleInterface(UGameRuleInterface&&); \
	SENIORPROJECT_API UGameRuleInterface(const UGameRuleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SENIORPROJECT_API, UGameRuleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameRuleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameRuleInterface) \
	SENIORPROJECT_API virtual ~UGameRuleInterface();


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameRuleInterface(); \
	friend struct Z_Construct_UClass_UGameRuleInterface_Statics; \
public: \
	DECLARE_CLASS(UGameRuleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SeniorProject"), SENIORPROJECT_API) \
	DECLARE_SERIALIZER(UGameRuleInterface)


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameRuleInterface() {} \
public: \
	typedef UGameRuleInterface UClassType; \
	typedef IGameRuleInterface ThisClass; \
	static FGameplayTag Execute_GetLineTag(const UObject* O); \
	static FGameplayTag Execute_GetTeamName(const UObject* O); \
	static FGameplayTag Execute_GetTurretLevelTag(const UObject* O); \
	static void Execute_SetLineTag(UObject* O, FGameplayTag NewLineTag); \
	static void Execute_SetTeamNameByPlayerState(UObject* O, APlayerState* PS); \
	static void Execute_SetTeamNameByTag(UObject* O, FGameplayTag NewTeamName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_10_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UGameRuleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
