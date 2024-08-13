// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSetBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeSetBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeSetBase_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FEffectProperties>()
{
	return FEffectProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"EffectProperties",
		Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
		sizeof(FEffectProperties),
		alignof(FEffectProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_DropExp)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDropExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DropExp(Z_Param_Out_OldDropExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_DropGold)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDropGold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DropGold(Z_Param_Out_OldDropGold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Exp)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Exp(Z_Param_Out_OldExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_MagicPenetration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMagicPenetration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MagicPenetration(Z_Param_Out_OldMagicPenetration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Lethality)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLethality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Lethality(Z_Param_Out_OldLethality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_LifeSteal)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLifeSteal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LifeSteal(Z_Param_Out_OldLifeSteal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_ManaRegeneration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegeneration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManaRegeneration(Z_Param_Out_OldManaRegeneration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_HealthRegeneration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegeneration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HealthRegeneration(Z_Param_Out_OldHealthRegeneration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_AttackSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackSpeed(Z_Param_Out_OldAttackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_AbilityHaste)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAbilityHaste);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AbilityHaste(Z_Param_Out_OldAbilityHaste);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_CriticalChance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalChance(Z_Param_Out_OldCriticalChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_MovementSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMovementSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MovementSpeed(Z_Param_Out_OldMovementSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_MagicResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMagicResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MagicResistance(Z_Param_Out_OldMagicResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_AbilityPower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAbilityPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AbilityPower(Z_Param_Out_OldAbilityPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_AttackDamage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackDamage(Z_Param_Out_OldAttackDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_NextExp)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldNextExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NextExp(Z_Param_Out_OldNextExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UAttributeSetBase::StaticRegisterNativesUAttributeSetBase()
	{
		UClass* Class = UAttributeSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_AbilityHaste", &UAttributeSetBase::execOnRep_AbilityHaste },
			{ "OnRep_AbilityPower", &UAttributeSetBase::execOnRep_AbilityPower },
			{ "OnRep_Armor", &UAttributeSetBase::execOnRep_Armor },
			{ "OnRep_AttackDamage", &UAttributeSetBase::execOnRep_AttackDamage },
			{ "OnRep_AttackSpeed", &UAttributeSetBase::execOnRep_AttackSpeed },
			{ "OnRep_CriticalChance", &UAttributeSetBase::execOnRep_CriticalChance },
			{ "OnRep_DropExp", &UAttributeSetBase::execOnRep_DropExp },
			{ "OnRep_DropGold", &UAttributeSetBase::execOnRep_DropGold },
			{ "OnRep_Exp", &UAttributeSetBase::execOnRep_Exp },
			{ "OnRep_Health", &UAttributeSetBase::execOnRep_Health },
			{ "OnRep_HealthRegeneration", &UAttributeSetBase::execOnRep_HealthRegeneration },
			{ "OnRep_Lethality", &UAttributeSetBase::execOnRep_Lethality },
			{ "OnRep_LifeSteal", &UAttributeSetBase::execOnRep_LifeSteal },
			{ "OnRep_MagicPenetration", &UAttributeSetBase::execOnRep_MagicPenetration },
			{ "OnRep_MagicResistance", &UAttributeSetBase::execOnRep_MagicResistance },
			{ "OnRep_Mana", &UAttributeSetBase::execOnRep_Mana },
			{ "OnRep_ManaRegeneration", &UAttributeSetBase::execOnRep_ManaRegeneration },
			{ "OnRep_MaxHealth", &UAttributeSetBase::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UAttributeSetBase::execOnRep_MaxMana },
			{ "OnRep_MovementSpeed", &UAttributeSetBase::execOnRep_MovementSpeed },
			{ "OnRep_NextExp", &UAttributeSetBase::execOnRep_NextExp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics
	{
		struct AttributeSetBase_eventOnRep_AbilityHaste_Parms
		{
			FGameplayAttributeData OldAbilityHaste;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAbilityHaste_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAbilityHaste;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::NewProp_OldAbilityHaste_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::NewProp_OldAbilityHaste = { "OldAbilityHaste", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_AbilityHaste_Parms, OldAbilityHaste), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::NewProp_OldAbilityHaste_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::NewProp_OldAbilityHaste_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::NewProp_OldAbilityHaste,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_AbilityHaste", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::AttributeSetBase_eventOnRep_AbilityHaste_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::AttributeSetBase_eventOnRep_AbilityHaste_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics
	{
		struct AttributeSetBase_eventOnRep_AbilityPower_Parms
		{
			FGameplayAttributeData OldAbilityPower;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAbilityPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAbilityPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::NewProp_OldAbilityPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::NewProp_OldAbilityPower = { "OldAbilityPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_AbilityPower_Parms, OldAbilityPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::NewProp_OldAbilityPower_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::NewProp_OldAbilityPower_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::NewProp_OldAbilityPower,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_AbilityPower", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::AttributeSetBase_eventOnRep_AbilityPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::AttributeSetBase_eventOnRep_AbilityPower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics
	{
		struct AttributeSetBase_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Armor", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::AttributeSetBase_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::AttributeSetBase_eventOnRep_Armor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics
	{
		struct AttributeSetBase_eventOnRep_AttackDamage_Parms
		{
			FGameplayAttributeData OldAttackDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage = { "OldAttackDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_AttackDamage_Parms, OldAttackDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* SecondaryAttributes */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SecondaryAttributes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_AttackDamage", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::AttributeSetBase_eventOnRep_AttackDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::AttributeSetBase_eventOnRep_AttackDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics
	{
		struct AttributeSetBase_eventOnRep_AttackSpeed_Parms
		{
			FGameplayAttributeData OldAttackSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed = { "OldAttackSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_AttackSpeed_Parms, OldAttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_AttackSpeed", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::AttributeSetBase_eventOnRep_AttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::AttributeSetBase_eventOnRep_AttackSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics
	{
		struct AttributeSetBase_eventOnRep_CriticalChance_Parms
		{
			FGameplayAttributeData OldCriticalChance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance = { "OldCriticalChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_CriticalChance_Parms, OldCriticalChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_CriticalChance", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::AttributeSetBase_eventOnRep_CriticalChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::AttributeSetBase_eventOnRep_CriticalChance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics
	{
		struct AttributeSetBase_eventOnRep_DropExp_Parms
		{
			FGameplayAttributeData OldDropExp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldDropExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldDropExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::NewProp_OldDropExp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::NewProp_OldDropExp = { "OldDropExp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_DropExp_Parms, OldDropExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::NewProp_OldDropExp_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::NewProp_OldDropExp_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::NewProp_OldDropExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_DropExp", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::AttributeSetBase_eventOnRep_DropExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::AttributeSetBase_eventOnRep_DropExp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics
	{
		struct AttributeSetBase_eventOnRep_DropGold_Parms
		{
			FGameplayAttributeData OldDropGold;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldDropGold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldDropGold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::NewProp_OldDropGold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::NewProp_OldDropGold = { "OldDropGold", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_DropGold_Parms, OldDropGold), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::NewProp_OldDropGold_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::NewProp_OldDropGold_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::NewProp_OldDropGold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_DropGold", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::AttributeSetBase_eventOnRep_DropGold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::AttributeSetBase_eventOnRep_DropGold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics
	{
		struct AttributeSetBase_eventOnRep_Exp_Parms
		{
			FGameplayAttributeData OldExp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::NewProp_OldExp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::NewProp_OldExp = { "OldExp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_Exp_Parms, OldExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::NewProp_OldExp_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::NewProp_OldExp_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::NewProp_OldExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GamePlay Attribute */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GamePlay Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Exp", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::AttributeSetBase_eventOnRep_Exp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::AttributeSetBase_eventOnRep_Exp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics
	{
		struct AttributeSetBase_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Vital Attribute */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vital Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::AttributeSetBase_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::AttributeSetBase_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics
	{
		struct AttributeSetBase_eventOnRep_HealthRegeneration_Parms
		{
			FGameplayAttributeData OldHealthRegeneration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration = { "OldHealthRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_HealthRegeneration_Parms, OldHealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_HealthRegeneration", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::AttributeSetBase_eventOnRep_HealthRegeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::AttributeSetBase_eventOnRep_HealthRegeneration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics
	{
		struct AttributeSetBase_eventOnRep_Lethality_Parms
		{
			FGameplayAttributeData OldLethality;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldLethality_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLethality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::NewProp_OldLethality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::NewProp_OldLethality = { "OldLethality", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_Lethality_Parms, OldLethality), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::NewProp_OldLethality_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::NewProp_OldLethality_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::NewProp_OldLethality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Lethality", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::AttributeSetBase_eventOnRep_Lethality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::AttributeSetBase_eventOnRep_Lethality_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics
	{
		struct AttributeSetBase_eventOnRep_LifeSteal_Parms
		{
			FGameplayAttributeData OldLifeSteal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldLifeSteal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLifeSteal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::NewProp_OldLifeSteal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::NewProp_OldLifeSteal = { "OldLifeSteal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_LifeSteal_Parms, OldLifeSteal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::NewProp_OldLifeSteal_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::NewProp_OldLifeSteal_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::NewProp_OldLifeSteal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_LifeSteal", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::AttributeSetBase_eventOnRep_LifeSteal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::AttributeSetBase_eventOnRep_LifeSteal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics
	{
		struct AttributeSetBase_eventOnRep_MagicPenetration_Parms
		{
			FGameplayAttributeData OldMagicPenetration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMagicPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMagicPenetration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::NewProp_OldMagicPenetration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::NewProp_OldMagicPenetration = { "OldMagicPenetration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_MagicPenetration_Parms, OldMagicPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::NewProp_OldMagicPenetration_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::NewProp_OldMagicPenetration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::NewProp_OldMagicPenetration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_MagicPenetration", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::AttributeSetBase_eventOnRep_MagicPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::AttributeSetBase_eventOnRep_MagicPenetration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics
	{
		struct AttributeSetBase_eventOnRep_MagicResistance_Parms
		{
			FGameplayAttributeData OldMagicResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMagicResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMagicResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::NewProp_OldMagicResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::NewProp_OldMagicResistance = { "OldMagicResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_MagicResistance_Parms, OldMagicResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::NewProp_OldMagicResistance_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::NewProp_OldMagicResistance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::NewProp_OldMagicResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_MagicResistance", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::AttributeSetBase_eventOnRep_MagicResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::AttributeSetBase_eventOnRep_MagicResistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics
	{
		struct AttributeSetBase_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::AttributeSetBase_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::AttributeSetBase_eventOnRep_Mana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics
	{
		struct AttributeSetBase_eventOnRep_ManaRegeneration_Parms
		{
			FGameplayAttributeData OldManaRegeneration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration = { "OldManaRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_ManaRegeneration_Parms, OldManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_ManaRegeneration", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::AttributeSetBase_eventOnRep_ManaRegeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::AttributeSetBase_eventOnRep_ManaRegeneration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics
	{
		struct AttributeSetBase_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional Vital Attribute */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Vital Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::AttributeSetBase_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::AttributeSetBase_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics
	{
		struct AttributeSetBase_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::AttributeSetBase_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::AttributeSetBase_eventOnRep_MaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics
	{
		struct AttributeSetBase_eventOnRep_MovementSpeed_Parms
		{
			FGameplayAttributeData OldMovementSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::NewProp_OldMovementSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::NewProp_OldMovementSpeed = { "OldMovementSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_MovementSpeed_Parms, OldMovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::NewProp_OldMovementSpeed_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::NewProp_OldMovementSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::NewProp_OldMovementSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_MovementSpeed", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::AttributeSetBase_eventOnRep_MovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::AttributeSetBase_eventOnRep_MovementSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics
	{
		struct AttributeSetBase_eventOnRep_NextExp_Parms
		{
			FGameplayAttributeData OldNextExp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldNextExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldNextExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::NewProp_OldNextExp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::NewProp_OldNextExp = { "OldNextExp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_NextExp_Parms, OldNextExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::NewProp_OldNextExp_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::NewProp_OldNextExp_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::NewProp_OldNextExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_NextExp", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::AttributeSetBase_eventOnRep_NextExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::AttributeSetBase_eventOnRep_NextExp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeSetBase);
	UClass* Z_Construct_UClass_UAttributeSetBase_NoRegister()
	{
		return UAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagicResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHaste_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHaste;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lethality_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lethality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagicPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeSteal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LifeSteal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropGold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropGold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityHaste, "OnRep_AbilityHaste" }, // 2898187746
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_AbilityPower, "OnRep_AbilityPower" }, // 3418854098
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Armor, "OnRep_Armor" }, // 1156526640
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackDamage, "OnRep_AttackDamage" }, // 1326128149
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackSpeed, "OnRep_AttackSpeed" }, // 3742973070
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_CriticalChance, "OnRep_CriticalChance" }, // 3868887701
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp, "OnRep_DropExp" }, // 3714644735
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_DropGold, "OnRep_DropGold" }, // 592500029
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp, "OnRep_Exp" }, // 1166032155
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Health, "OnRep_Health" }, // 869796999
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_HealthRegeneration, "OnRep_HealthRegeneration" }, // 255143309
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Lethality, "OnRep_Lethality" }, // 3535425105
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_LifeSteal, "OnRep_LifeSteal" }, // 3508060982
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicPenetration, "OnRep_MagicPenetration" }, // 2709920817
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_MagicResistance, "OnRep_MagicResistance" }, // 3466293193
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana, "OnRep_Mana" }, // 1435699642
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_ManaRegeneration, "OnRep_ManaRegeneration" }, // 1157449113
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 414255809
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana, "OnRep_MaxMana" }, // 1830751188
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_MovementSpeed, "OnRep_MovementSpeed" }, // 1257776416
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp, "OnRep_NextExp" }, // 1563922122
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AttributeSetBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Vital Attribute */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vital Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp_MetaData[] = {
		{ "Category", "Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp = { "Exp", "OnRep_Exp", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Exp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* SecondaryAttributes */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SecondaryAttributes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackDamage = { "AttackDamage", "OnRep_AttackDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, AttackDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackDamage_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityPower_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityPower = { "AbilityPower", "OnRep_AbilityPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, AbilityPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityPower_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityPower_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Armor_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Armor_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicResistance_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicResistance = { "MagicResistance", "OnRep_MagicResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, MagicResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicResistance_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicResistance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackSpeed = { "AttackSpeed", "OnRep_AttackSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, AttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackSpeed_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityHaste_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityHaste = { "AbilityHaste", "OnRep_AbilityHaste", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, AbilityHaste), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityHaste_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityHaste_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_CriticalChance_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_CriticalChance = { "CriticalChance", "OnRep_CriticalChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, CriticalChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_CriticalChance_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_CriticalChance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "SecondaryAttributes" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MovementSpeed = { "MovementSpeed", "OnRep_MovementSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, MovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MovementSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional Vital Attribute */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Vital Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp = { "NextExp", "OnRep_NextExp", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, NextExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_HealthRegeneration_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_HealthRegeneration = { "HealthRegeneration", "OnRep_HealthRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, HealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_HealthRegeneration_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_HealthRegeneration_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_ManaRegeneration_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_ManaRegeneration = { "ManaRegeneration", "OnRep_ManaRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, ManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_ManaRegeneration_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_ManaRegeneration_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Lethality_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Lethality = { "Lethality", "OnRep_Lethality", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Lethality), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Lethality_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Lethality_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicPenetration_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicPenetration = { "MagicPenetration", "OnRep_MagicPenetration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, MagicPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicPenetration_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicPenetration_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_LifeSteal_MetaData[] = {
		{ "Category", "Additional Vital Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_LifeSteal = { "LifeSteal", "OnRep_LifeSteal", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, LifeSteal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_LifeSteal_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_LifeSteal_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp_MetaData[] = {
		{ "Category", "GamePlay Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* GamePlay Attribute */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GamePlay Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp = { "DropExp", "OnRep_DropExp", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, DropExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropGold_MetaData[] = {
		{ "Category", "GamePlay Attribute" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropGold = { "DropGold", "OnRep_DropGold", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, DropGold), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropGold_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropGold_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_IncomingDamage_MetaData[] = {
		{ "Category", "Meta Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Meta Attributes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Meta Attributes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_IncomingDamage = { "IncomingDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, IncomingDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_IncomingDamage_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_IncomingDamage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AbilityHaste,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_CriticalChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_HealthRegeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_ManaRegeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Lethality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MagicPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_LifeSteal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropGold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_IncomingDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSetBase_Statics::ClassParams = {
		&UAttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeSetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttributeSetBase()
	{
		if (!Z_Registration_Info_UClass_UAttributeSetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeSetBase.OuterSingleton, Z_Construct_UClass_UAttributeSetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeSetBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAttributeSetBase>()
	{
		return UAttributeSetBase::StaticClass();
	}

	void UAttributeSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_Exp(TEXT("Exp"));
		static const FName Name_AttackDamage(TEXT("AttackDamage"));
		static const FName Name_AbilityPower(TEXT("AbilityPower"));
		static const FName Name_Armor(TEXT("Armor"));
		static const FName Name_MagicResistance(TEXT("MagicResistance"));
		static const FName Name_AttackSpeed(TEXT("AttackSpeed"));
		static const FName Name_AbilityHaste(TEXT("AbilityHaste"));
		static const FName Name_CriticalChance(TEXT("CriticalChance"));
		static const FName Name_MovementSpeed(TEXT("MovementSpeed"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_NextExp(TEXT("NextExp"));
		static const FName Name_HealthRegeneration(TEXT("HealthRegeneration"));
		static const FName Name_ManaRegeneration(TEXT("ManaRegeneration"));
		static const FName Name_Lethality(TEXT("Lethality"));
		static const FName Name_MagicPenetration(TEXT("MagicPenetration"));
		static const FName Name_LifeSteal(TEXT("LifeSteal"));
		static const FName Name_DropExp(TEXT("DropExp"));
		static const FName Name_DropGold(TEXT("DropGold"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_Exp == ClassReps[(int32)ENetFields_Private::Exp].Property->GetFName()
			&& Name_AttackDamage == ClassReps[(int32)ENetFields_Private::AttackDamage].Property->GetFName()
			&& Name_AbilityPower == ClassReps[(int32)ENetFields_Private::AbilityPower].Property->GetFName()
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
			&& Name_MagicResistance == ClassReps[(int32)ENetFields_Private::MagicResistance].Property->GetFName()
			&& Name_AttackSpeed == ClassReps[(int32)ENetFields_Private::AttackSpeed].Property->GetFName()
			&& Name_AbilityHaste == ClassReps[(int32)ENetFields_Private::AbilityHaste].Property->GetFName()
			&& Name_CriticalChance == ClassReps[(int32)ENetFields_Private::CriticalChance].Property->GetFName()
			&& Name_MovementSpeed == ClassReps[(int32)ENetFields_Private::MovementSpeed].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_NextExp == ClassReps[(int32)ENetFields_Private::NextExp].Property->GetFName()
			&& Name_HealthRegeneration == ClassReps[(int32)ENetFields_Private::HealthRegeneration].Property->GetFName()
			&& Name_ManaRegeneration == ClassReps[(int32)ENetFields_Private::ManaRegeneration].Property->GetFName()
			&& Name_Lethality == ClassReps[(int32)ENetFields_Private::Lethality].Property->GetFName()
			&& Name_MagicPenetration == ClassReps[(int32)ENetFields_Private::MagicPenetration].Property->GetFName()
			&& Name_LifeSteal == ClassReps[(int32)ENetFields_Private::LifeSteal].Property->GetFName()
			&& Name_DropExp == ClassReps[(int32)ENetFields_Private::DropExp].Property->GetFName()
			&& Name_DropGold == ClassReps[(int32)ENetFields_Private::DropGold].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAttributeSetBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSetBase);
	UAttributeSetBase::~UAttributeSetBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"), &Z_Registration_Info_UScriptStruct_EffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 999623850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeSetBase, UAttributeSetBase::StaticClass, TEXT("UAttributeSetBase"), &Z_Registration_Info_UClass_UAttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeSetBase), 4126641107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_4036793660(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
