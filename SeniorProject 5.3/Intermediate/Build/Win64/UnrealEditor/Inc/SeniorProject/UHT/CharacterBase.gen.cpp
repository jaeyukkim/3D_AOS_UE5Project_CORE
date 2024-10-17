// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/CharacterBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDebuffParticleComponent_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameRuleInterface_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_ECharacterClass();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterBase::execMulticastSetMaxWalkSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetMaxWalkSpeed_Implementation(Z_Param_NewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterBase::execMulticastHandleDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastHandleDeath_Implementation();
		P_NATIVE_END;
	}
	struct CharacterBase_eventMulticastSetMaxWalkSpeed_Parms
	{
		float NewSpeed;
	};
	static FName NAME_ACharacterBase_MulticastHandleDeath = FName(TEXT("MulticastHandleDeath"));
	void ACharacterBase::MulticastHandleDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_MulticastHandleDeath),NULL);
	}
	static FName NAME_ACharacterBase_MulticastSetMaxWalkSpeed = FName(TEXT("MulticastSetMaxWalkSpeed"));
	void ACharacterBase::MulticastSetMaxWalkSpeed(float NewSpeed)
	{
		CharacterBase_eventMulticastSetMaxWalkSpeed_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_MulticastSetMaxWalkSpeed),&Parms);
	}
	void ACharacterBase::StaticRegisterNativesACharacterBase()
	{
		UClass* Class = ACharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastHandleDeath", &ACharacterBase::execMulticastHandleDeath },
			{ "MulticastSetMaxWalkSpeed", &ACharacterBase::execMulticastSetMaxWalkSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* end CombatInterface*/" },
#endif
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end CombatInterface" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "MulticastHandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterBase_eventMulticastSetMaxWalkSpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "MulticastSetMaxWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::PropPointers), sizeof(CharacterBase_eventMulticastSetMaxWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(CharacterBase_eventMulticastSetMaxWalkSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterBase);
	UClass* Z_Construct_UClass_ACharacterBase_NoRegister()
	{
		return ACharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTipSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponTipSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TailSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TailSocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StunDebuffComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StunDebuffComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSlowDebuffComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementSlowDebuffComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorDecreaseDebuffComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArmorDecreaseDebuffComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicResistanceDecreaseDebuffComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MagicResistanceDecreaseDebuffComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVitalAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultVitalAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAdditionalVitalAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAdditionalVitalAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSecondaryAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultSecondaryAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGamePlayAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultGamePlayAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DebuffClassMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebuffClassMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffClassMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DebuffClassMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitReacting_MetaData[];
#endif
		static void NewProp_bHitReacting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitReacting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStunned_MetaData[];
#endif
		static void NewProp_bIsStunned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStunned;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbility_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbility_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayAbility;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupPassiveAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupPassiveAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupPassiveAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitReactMontage;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DieAnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DieAnimationAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath, "MulticastHandleDeath" }, // 1213367709
		{ &Z_Construct_UFunction_ACharacterBase_MulticastSetMaxWalkSpeed, "MulticastSetMaxWalkSpeed" }, // 3942331787
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CharacterBase.h" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* end GameRuleInterface */" },
#endif
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end GameRuleInterface" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName = { "WeaponTipSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, WeaponTipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, LeftHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, RightHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName = { "TailSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, TailSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Character Class Defaults" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, CharacterClass), Z_Construct_UEnum_SeniorProject_ECharacterClass, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterClass_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterClass_MetaData) }; // 4018297425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, OnHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnHealthChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, OnMaxHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_StunDebuffComponent_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_StunDebuffComponent = { "StunDebuffComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, StunDebuffComponent), Z_Construct_UClass_UDebuffParticleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_StunDebuffComponent_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_StunDebuffComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_MovementSlowDebuffComponent_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_MovementSlowDebuffComponent = { "MovementSlowDebuffComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, MovementSlowDebuffComponent), Z_Construct_UClass_UDebuffParticleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_MovementSlowDebuffComponent_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_MovementSlowDebuffComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_ArmorDecreaseDebuffComponent_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_ArmorDecreaseDebuffComponent = { "ArmorDecreaseDebuffComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, ArmorDecreaseDebuffComponent), Z_Construct_UClass_UDebuffParticleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_ArmorDecreaseDebuffComponent_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_ArmorDecreaseDebuffComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_MagicResistanceDecreaseDebuffComponent_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_MagicResistanceDecreaseDebuffComponent = { "MagicResistanceDecreaseDebuffComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, MagicResistanceDecreaseDebuffComponent), Z_Construct_UClass_UDebuffParticleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_MagicResistanceDecreaseDebuffComponent_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_MagicResistanceDecreaseDebuffComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((ACharacterBase*)Obj)->bDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterBase), &Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes = { "DefaultVitalAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultVitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes = { "DefaultAdditionalVitalAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultAdditionalVitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes = { "DefaultSecondaryAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultSecondaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes = { "DefaultGamePlayAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultGamePlayAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap_ValueProp = { "DebuffClassMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap_Key_KeyProp = { "DebuffClassMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap_MetaData[] = {
		{ "Category", "Debuff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09UPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\n\x09TSubclassOf<UGameplayEffect> StunEffect;\n\n\x09UPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\n\x09TSubclassOf<UGameplayEffect> AttackSpeedSlowEffect;\n\n\x09UPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\n\x09TSubclassOf<UGameplayEffect> MovementSlowEffect;\n\x09\n\x09UPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\n\x09TSubclassOf<UGameplayEffect> ArmorDecreaseEffect;\n\n\x09UPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\n\x09TSubclassOf<UGameplayEffect> MagicResistanceDecreaseEffect;\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\nTSubclassOf<UGameplayEffect> StunEffect;\n\nUPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\nTSubclassOf<UGameplayEffect> AttackSpeedSlowEffect;\n\nUPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\nTSubclassOf<UGameplayEffect> MovementSlowEffect;\n\nUPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\nTSubclassOf<UGameplayEffect> ArmorDecreaseEffect;\n\nUPROPERTY(EditDefaultsOnly, Category=\"Debuff\")\nTSubclassOf<UGameplayEffect> MagicResistanceDecreaseEffect;" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap = { "DebuffClassMap", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DebuffClassMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_SetBit(void* Obj)
	{
		((ACharacterBase*)Obj)->bHitReacting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting = { "bHitReacting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterBase), &Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_bIsStunned_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterBase_Statics::NewProp_bIsStunned_SetBit(void* Obj)
	{
		((ACharacterBase*)Obj)->bIsStunned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_bIsStunned = { "bIsStunned", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterBase), &Z_Construct_UClass_ACharacterBase_Statics::NewProp_bIsStunned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_bIsStunned_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_bIsStunned_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_Inner = { "GameplayAbility", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility = { "GameplayAbility", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, GameplayAbility), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_StartupPassiveAbilities_Inner = { "StartupPassiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_StartupPassiveAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_StartupPassiveAbilities = { "StartupPassiveAbilities", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, StartupPassiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_StartupPassiveAbilities_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_StartupPassiveAbilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Combat Interface*/" },
#endif
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_HitReactMontage_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_HitReactMontage_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_Inner = { "AttackMontage", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, AttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DieAnimationAsset_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DieAnimationAsset = { "DieAnimationAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DieAnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DieAnimationAsset_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DieAnimationAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_StunDebuffComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_MovementSlowDebuffComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_ArmorDecreaseDebuffComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_MagicResistanceDecreaseDebuffComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DebuffClassMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_bIsStunned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_StartupPassiveAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_StartupPassiveAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_HitReactMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DieAnimationAsset,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, IEnemyInterface), false },  // 3564215506
			{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, ICombatInterface), false },  // 3909449494
			{ Z_Construct_UClass_UGameRuleInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, IGameRuleInterface), false },  // 1544812182
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterBase_Statics::ClassParams = {
		&ACharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACharacterBase()
	{
		if (!Z_Registration_Info_UClass_ACharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterBase.OuterSingleton, Z_Construct_UClass_ACharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ACharacterBase>()
	{
		return ACharacterBase::StaticClass();
	}

	void ACharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bDead(TEXT("bDead"));
		static const FName Name_bIsStunned(TEXT("bIsStunned"));

		const bool bIsValid = true
			&& Name_bDead == ClassReps[(int32)ENetFields_Private::bDead].Property->GetFName()
			&& Name_bIsStunned == ClassReps[(int32)ENetFields_Private::bIsStunned].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterBase);
	ACharacterBase::~ACharacterBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterBase, ACharacterBase::StaticClass, TEXT("ACharacterBase"), &Z_Registration_Info_UClass_ACharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterBase), 1774802866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_1396717217(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
