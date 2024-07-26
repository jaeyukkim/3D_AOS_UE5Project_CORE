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
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Exp)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Exp(Z_Param_Out_OldExp);
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
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_DropExp)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDropExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DropExp(Z_Param_Out_OldDropExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_AttackRating)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackRating);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackRating(Z_Param_Out_OldAttackRating);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Level)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Level(Z_Param_Out_OldLevel);
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
	DEFINE_FUNCTION(UAttributeSetBase::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
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
			{ "OnRep_AttackRating", &UAttributeSetBase::execOnRep_AttackRating },
			{ "OnRep_DropExp", &UAttributeSetBase::execOnRep_DropExp },
			{ "OnRep_Exp", &UAttributeSetBase::execOnRep_Exp },
			{ "OnRep_Health", &UAttributeSetBase::execOnRep_Health },
			{ "OnRep_Level", &UAttributeSetBase::execOnRep_Level },
			{ "OnRep_Mana", &UAttributeSetBase::execOnRep_Mana },
			{ "OnRep_MaxHealth", &UAttributeSetBase::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UAttributeSetBase::execOnRep_MaxMana },
			{ "OnRep_NextExp", &UAttributeSetBase::execOnRep_NextExp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics
	{
		struct AttributeSetBase_eventOnRep_AttackRating_Parms
		{
			FGameplayAttributeData OldAttackRating;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackRating_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackRating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::NewProp_OldAttackRating_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::NewProp_OldAttackRating = { "OldAttackRating", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_AttackRating_Parms, OldAttackRating), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::NewProp_OldAttackRating_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::NewProp_OldAttackRating_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::NewProp_OldAttackRating,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_AttackRating", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::AttributeSetBase_eventOnRep_AttackRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::AttributeSetBase_eventOnRep_AttackRating_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_DropExp", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::AttributeSetBase_eventOnRep_DropExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp_Statics::Function_MetaDataParams) };
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
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Exp", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::AttributeSetBase_eventOnRep_Exp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp_Statics::Function_MetaDataParams) };
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
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::AttributeSetBase_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams) };
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
	struct Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics
	{
		struct AttributeSetBase_eventOnRep_Level_Parms
		{
			FGameplayAttributeData OldLevel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::NewProp_OldLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSetBase_eventOnRep_Level_Parms, OldLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::NewProp_OldLevel_MetaData), Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::NewProp_OldLevel_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::NewProp_OldLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Level", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::AttributeSetBase_eventOnRep_Level_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::AttributeSetBase_eventOnRep_Level_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttributeSetBase_OnRep_Level()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSetBase_OnRep_Level_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::AttributeSetBase_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams) };
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
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::AttributeSetBase_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::AttributeSetBase_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSetBase, nullptr, "OnRep_NextExp", nullptr, nullptr, Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::AttributeSetBase_eventOnRep_NextExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp_Statics::Function_MetaDataParams) };
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRating_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackRating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Exp;
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
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_AttackRating, "OnRep_AttackRating" }, // 211921657
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_DropExp, "OnRep_DropExp" }, // 3576999015
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Exp, "OnRep_Exp" }, // 2275077592
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Health, "OnRep_Health" }, // 1780828854
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Level, "OnRep_Level" }, // 3889009168
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_Mana, "OnRep_Mana" }, // 580305536
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2822330536
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_MaxMana, "OnRep_MaxMana" }, // 2161438484
		{ &Z_Construct_UFunction_UAttributeSetBase_OnRep_NextExp, "OnRep_NextExp" }, // 63691103
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
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Level = { "Level", "OnRep_Level", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Level), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Level_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Level_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackRating_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackRating = { "AttackRating", "OnRep_AttackRating", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, AttackRating), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackRating_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackRating_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp = { "DropExp", "OnRep_DropExp", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, DropExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp = { "NextExp", "OnRep_NextExp", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, NextExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp = { "Exp", "OnRep_Exp", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSetBase, Exp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp_MetaData), Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_AttackRating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_DropExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_NextExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Exp,
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
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_Level(TEXT("Level"));
		static const FName Name_AttackRating(TEXT("AttackRating"));
		static const FName Name_DropExp(TEXT("DropExp"));
		static const FName Name_NextExp(TEXT("NextExp"));
		static const FName Name_Exp(TEXT("Exp"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_Level == ClassReps[(int32)ENetFields_Private::Level].Property->GetFName()
			&& Name_AttackRating == ClassReps[(int32)ENetFields_Private::AttackRating].Property->GetFName()
			&& Name_DropExp == ClassReps[(int32)ENetFields_Private::DropExp].Property->GetFName()
			&& Name_NextExp == ClassReps[(int32)ENetFields_Private::NextExp].Property->GetFName()
			&& Name_Exp == ClassReps[(int32)ENetFields_Private::Exp].Property->GetFName();

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
		{ Z_Construct_UClass_UAttributeSetBase, UAttributeSetBase::StaticClass, TEXT("UAttributeSetBase"), &Z_Registration_Info_UClass_UAttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeSetBase), 1913261894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_1812210143(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
