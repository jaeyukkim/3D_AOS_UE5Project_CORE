// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTypesBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectBaseContext();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageEffectParams;
class UScriptStruct* FDamageEffectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageEffectParams, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("DamageEffectParams"));
	}
	return Z_Registration_Info_UScriptStruct_DamageEffectParams.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FDamageEffectParams>()
{
	return FDamageEffectParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDamageEffectParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedCoefficientDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AppliedCoefficientDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_APCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ADCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ADCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAbilityPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceAbilityPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceAttackDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageEffectParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent = { "SourceAbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, SourceAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent = { "TargetAbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, TargetAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BaseDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AppliedCoefficientDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AppliedCoefficientDamage = { "AppliedCoefficientDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, AppliedCoefficientDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AppliedCoefficientDamage_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AppliedCoefficientDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_APCoefficient_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_APCoefficient = { "APCoefficient", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, APCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_APCoefficient_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_APCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_ADCoefficient_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_ADCoefficient = { "ADCoefficient", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, ADCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_ADCoefficient_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_ADCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilityPower_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilityPower = { "SourceAbilityPower", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, SourceAbilityPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilityPower_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilityPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAttackDamage_MetaData[] = {
		{ "Category", "DamageEffectParams" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAttackDamage = { "SourceAttackDamage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEffectParams, SourceAttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAttackDamage_MetaData), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAttackDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_TargetAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AppliedCoefficientDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_APCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_ADCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_AbilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAbilityPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewProp_SourceAttackDamage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageEffectParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"DamageEffectParams",
		Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers),
		sizeof(FDamageEffectParams),
		alignof(FDamageEffectParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageEffectParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEffectParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DamageEffectParams.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayEffectBaseContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FGameplayEffectBaseContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext;
class UScriptStruct* FGameplayEffectBaseContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectBaseContext, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("GameplayEffectBaseContext"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FGameplayEffectBaseContext>()
{
	return FGameplayEffectBaseContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[];
#endif
		static void NewProp_bIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMagicalDamage_MetaData[];
#endif
		static void NewProp_bIsMagicalDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMagicalDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPhysicalDamage_MetaData[];
#endif
		static void NewProp_bIsPhysicalDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPhysicalDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectBaseContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
	{
		((FGameplayEffectBaseContext*)Obj)->bIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectBaseContext), &Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_MetaData), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_SetBit(void* Obj)
	{
		((FGameplayEffectBaseContext*)Obj)->bIsMagicalDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage = { "bIsMagicalDamage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectBaseContext), &Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_MetaData), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsPhysicalDamage_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsPhysicalDamage_SetBit(void* Obj)
	{
		((FGameplayEffectBaseContext*)Obj)->bIsPhysicalDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsPhysicalDamage = { "bIsPhysicalDamage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectBaseContext), &Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsPhysicalDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsPhysicalDamage_MetaData), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsPhysicalDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayEffectBaseContext, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_BaseDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsPhysicalDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_BaseDamage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"GameplayEffectBaseContext",
		Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers),
		sizeof(FGameplayEffectBaseContext),
		alignof(FGameplayEffectBaseContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectBaseContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics::ScriptStructInfo[] = {
		{ FDamageEffectParams::StaticStruct, Z_Construct_UScriptStruct_FDamageEffectParams_Statics::NewStructOps, TEXT("DamageEffectParams"), &Z_Registration_Info_UScriptStruct_DamageEffectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageEffectParams), 4036095010U) },
		{ FGameplayEffectBaseContext::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewStructOps, TEXT("GameplayEffectBaseContext"), &Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectBaseContext), 3057721664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_2865461056(TEXT("/Script/SeniorProject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
