// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Data/CharacterClassInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_CharacterClassInfo_generated_h
#error "CharacterClassInfo.generated.h already included, missing '#pragma once' in CharacterClassInfo.h"
#endif
#define SENIORPROJECT_CharacterClassInfo_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics; \
	SENIORPROJECT_API static class UScriptStruct* StaticStruct();


template<> SENIORPROJECT_API UScriptStruct* StaticStruct<struct FCharacterClassDefaultInfo>();

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterClassInfo(); \
	friend struct Z_Construct_UClass_UCharacterClassInfo_Statics; \
public: \
	DECLARE_CLASS(UCharacterClassInfo, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UCharacterClassInfo)


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterClassInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterClassInfo(UCharacterClassInfo&&); \
	NO_API UCharacterClassInfo(const UCharacterClassInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterClassInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterClassInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterClassInfo) \
	NO_API virtual ~UCharacterClassInfo();


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_53_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UCharacterClassInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h


#define FOREACH_ENUM_ECHARACTERCLASS(op) \
	op(ECharacterClass::Default) \
	op(ECharacterClass::Kwang) \
	op(ECharacterClass::Minion_Melee) \
	op(ECharacterClass::Minion_Ranged) \
	op(ECharacterClass::FirstTurret) \
	op(ECharacterClass::SecondTurret) \
	op(ECharacterClass::LastTurret) \
	op(ECharacterClass::Inhibitor) \
	op(ECharacterClass::Nexus) \
	op(ECharacterClass::Default2) \
	op(ECharacterClass::Default3) 

enum class ECharacterClass : uint8;
template<> struct TIsUEnumClass<ECharacterClass> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<ECharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
