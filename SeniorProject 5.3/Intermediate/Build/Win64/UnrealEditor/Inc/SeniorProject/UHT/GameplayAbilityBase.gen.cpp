// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/GameplayAbilityBase.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityBase() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_EDamageType();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
	static UEnum* EDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_EDamageType, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("EDamageType"));
		}
		return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<EDamageType>()
	{
		return EDamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_EDamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_EDamageType_Statics::Enumerators[] = {
		{ "EDamageType::PhysicalDamage", (int64)EDamageType::PhysicalDamage },
		{ "EDamageType::MagicalDamage", (int64)EDamageType::MagicalDamage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_EDamageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "MagicalDamage.Comment", "/**\n * \n */" },
		{ "MagicalDamage.Name", "EDamageType::MagicalDamage" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbilityBase.h" },
		{ "PhysicalDamage.Comment", "/**\n * \n */" },
		{ "PhysicalDamage.Name", "EDamageType::PhysicalDamage" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_EDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"EDamageType",
		"EDamageType",
		Z_Construct_UEnum_SeniorProject_EDamageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EDamageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeniorProject_EDamageType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SeniorProject_EDamageType()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_SeniorProject_EDamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
	}
	void UGameplayAbilityBase::StaticRegisterNativesUGameplayAbilityBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilityBase);
	UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupInputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupInputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/GameplayAbilityBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag = { "StartupInputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilityBase, StartupInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag_MetaData), Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilityBase, Damage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_Damage_MetaData) }; // 4070660376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "GameplayAbilityBase" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilityBase, DamageType), Z_Construct_UEnum_SeniorProject_EDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_DamageType_MetaData), Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_DamageType_MetaData) }; // 2283746501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_DamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams = {
		&UGameplayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameplayAbilityBase()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton, Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UGameplayAbilityBase>()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	UGameplayAbilityBase::UGameplayAbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilityBase);
	UGameplayAbilityBase::~UGameplayAbilityBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::EnumInfo[] = {
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2283746501U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilityBase, UGameplayAbilityBase::StaticClass, TEXT("UGameplayAbilityBase"), &Z_Registration_Info_UClass_UGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilityBase), 929169717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_494790850(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
