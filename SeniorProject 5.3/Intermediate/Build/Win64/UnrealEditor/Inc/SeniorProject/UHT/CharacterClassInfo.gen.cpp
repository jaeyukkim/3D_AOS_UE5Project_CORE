// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterClassInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCharacterClassInfo();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_ECharacterClass();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterClassDefaultInfo();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterClass;
	static UEnum* ECharacterClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_ECharacterClass, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("ECharacterClass"));
		}
		return Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<ECharacterClass>()
	{
		return ECharacterClass_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::Enumerators[] = {
		{ "ECharacterClass::Default", (int64)ECharacterClass::Default },
		{ "ECharacterClass::Kwang", (int64)ECharacterClass::Kwang },
		{ "ECharacterClass::Minion_Melee", (int64)ECharacterClass::Minion_Melee },
		{ "ECharacterClass::Minion_Ranged", (int64)ECharacterClass::Minion_Ranged },
		{ "ECharacterClass::Turret", (int64)ECharacterClass::Turret },
		{ "ECharacterClass::Inhibitor", (int64)ECharacterClass::Inhibitor },
		{ "ECharacterClass::Nexus", (int64)ECharacterClass::Nexus },
		{ "ECharacterClass::Default2", (int64)ECharacterClass::Default2 },
		{ "ECharacterClass::Default3", (int64)ECharacterClass::Default3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ECharacterClass::Default" },
		{ "Default2.Name", "ECharacterClass::Default2" },
		{ "Default3.Name", "ECharacterClass::Default3" },
		{ "Inhibitor.Name", "ECharacterClass::Inhibitor" },
		{ "Kwang.Name", "ECharacterClass::Kwang" },
		{ "Minion_Melee.Name", "ECharacterClass::Minion_Melee" },
		{ "Minion_Ranged.Name", "ECharacterClass::Minion_Ranged" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
		{ "Nexus.Name", "ECharacterClass::Nexus" },
		{ "Turret.Name", "ECharacterClass::Turret" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"ECharacterClass",
		"ECharacterClass",
		Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SeniorProject_ECharacterClass()
	{
		if (!Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton, Z_Construct_UEnum_SeniorProject_ECharacterClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo;
class UScriptStruct* FCharacterClassDefaultInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("CharacterClassDefaultInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FCharacterClassDefaultInfo>()
{
	return FCharacterClassDefaultInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VitalAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VitalAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SecondaryAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalVitalAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalVitalAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamePlayAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GamePlayAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterClassDefaultInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_VitalAttributes_MetaData[] = {
		{ "Category", "Class Defaults" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_VitalAttributes = { "VitalAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClassDefaultInfo, VitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_VitalAttributes_MetaData), Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_VitalAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes = { "SecondaryAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClassDefaultInfo, SecondaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes_MetaData), Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_AdditionalVitalAttributes_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_AdditionalVitalAttributes = { "AdditionalVitalAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClassDefaultInfo, AdditionalVitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_AdditionalVitalAttributes_MetaData), Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_AdditionalVitalAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_GamePlayAttributes_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_GamePlayAttributes = { "GamePlayAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClassDefaultInfo, GamePlayAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_GamePlayAttributes_MetaData), Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_GamePlayAttributes_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClassDefaultInfo, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_MetaData), Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_VitalAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_AdditionalVitalAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_GamePlayAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"CharacterClassDefaultInfo",
		Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::PropPointers),
		sizeof(FCharacterClassDefaultInfo),
		alignof(FCharacterClassDefaultInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterClassDefaultInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.InnerSingleton, Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.InnerSingleton;
	}
	void UCharacterClassInfo::StaticRegisterNativesUCharacterClassInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterClassInfo);
	UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister()
	{
		return UCharacterClassInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterClassInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterClassInformation_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClassInformation_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClassInformation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassInformation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterClassInformation;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterClassInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Data/CharacterClassInfo.h" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_ValueProp = { "CharacterClassInformation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCharacterClassDefaultInfo, METADATA_PARAMS(0, nullptr) }; // 807896367
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp = { "CharacterClassInformation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SeniorProject_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 2251408729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_MetaData[] = {
		{ "Category", "Character Class Defaults" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation = { "CharacterClassInformation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClassInfo, CharacterClassInformation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_MetaData), Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_MetaData) }; // 2251408729 807896367
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClassInfo, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_MetaData), Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterClassInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterClassInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterClassInfo_Statics::ClassParams = {
		&UCharacterClassInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterClassInfo()
	{
		if (!Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton, Z_Construct_UClass_UCharacterClassInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UCharacterClassInfo>()
	{
		return UCharacterClassInfo::StaticClass();
	}
	UCharacterClassInfo::UCharacterClassInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterClassInfo);
	UCharacterClassInfo::~UCharacterClassInfo() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::EnumInfo[] = {
		{ ECharacterClass_StaticEnum, TEXT("ECharacterClass"), &Z_Registration_Info_UEnum_ECharacterClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2251408729U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::ScriptStructInfo[] = {
		{ FCharacterClassDefaultInfo::StaticStruct, Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewStructOps, TEXT("CharacterClassDefaultInfo"), &Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterClassDefaultInfo), 807896367U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterClassInfo, UCharacterClassInfo::StaticClass, TEXT("UCharacterClassInfo"), &Z_Registration_Info_UClass_UCharacterClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterClassInfo), 3987702287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_2108549977(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_CharacterClassInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
