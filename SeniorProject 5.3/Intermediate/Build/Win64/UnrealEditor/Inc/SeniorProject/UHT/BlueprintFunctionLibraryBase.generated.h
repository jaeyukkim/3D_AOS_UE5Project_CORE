// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UAttributeMenuWidgetController;
class UCharacterClassInfo;
class UObject;
class UOverlayWidgetController;
class USpellMenuWidgetController;
enum class ECharacterClass : uint8;
struct FDamageEffectParams;
struct FGameplayEffectContextHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTag;
#ifdef SENIORPROJECT_BlueprintFunctionLibraryBase_generated_h
#error "BlueprintFunctionLibraryBase.generated.h already included, missing '#pragma once' in BlueprintFunctionLibraryBase.h"
#endif
#define SENIORPROJECT_BlueprintFunctionLibraryBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDamageEffect); \
	DECLARE_FUNCTION(execGetOwnerActorFromSpecHandle); \
	DECLARE_FUNCTION(execIsFriends); \
	DECLARE_FUNCTION(execGetLivePlayersWithinRadius); \
	DECLARE_FUNCTION(execGetDebuffFrequency); \
	DECLARE_FUNCTION(execGetDebuffDuration); \
	DECLARE_FUNCTION(execGetDebuffCoefficient); \
	DECLARE_FUNCTION(execGetDebuffType); \
	DECLARE_FUNCTION(execIsCriticalHit); \
	DECLARE_FUNCTION(execIsMagicalDamage); \
	DECLARE_FUNCTION(execSetDebuffFrequency); \
	DECLARE_FUNCTION(execSetDebuffDuration); \
	DECLARE_FUNCTION(execSetDebuffCoefficient); \
	DECLARE_FUNCTION(execSetDebuffType); \
	DECLARE_FUNCTION(execSetIsMagicalDamage); \
	DECLARE_FUNCTION(execSetIsCriticalHit); \
	DECLARE_FUNCTION(execGiveStartupAbilities); \
	DECLARE_FUNCTION(execInitializeDefaultAttributes); \
	DECLARE_FUNCTION(execGetCharacterClassInfo); \
	DECLARE_FUNCTION(execGetSpellMenuWidgetController); \
	DECLARE_FUNCTION(execGetUAttributeMenuWidgetController); \
	DECLARE_FUNCTION(execGetOverlayWidgetController);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintFunctionLibraryBase(); \
	friend struct Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFunctionLibraryBase, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintFunctionLibraryBase)


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintFunctionLibraryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintFunctionLibraryBase(UBlueprintFunctionLibraryBase&&); \
	NO_API UBlueprintFunctionLibraryBase(const UBlueprintFunctionLibraryBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintFunctionLibraryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFunctionLibraryBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFunctionLibraryBase) \
	NO_API virtual ~UBlueprintFunctionLibraryBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_18_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UBlueprintFunctionLibraryBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
