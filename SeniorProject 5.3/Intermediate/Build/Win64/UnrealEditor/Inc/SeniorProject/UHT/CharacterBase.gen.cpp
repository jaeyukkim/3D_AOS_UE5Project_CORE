// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/DefaultBase/CharacterBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
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
	SENIORPROJECT_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterBase::execMulticastHandleDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastHandleDeath_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACharacterBase_DieAction = FName(TEXT("DieAction"));
	void ACharacterBase::DieAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_DieAction),NULL);
	}
	static FName NAME_ACharacterBase_MulticastHandleDeath = FName(TEXT("MulticastHandleDeath"));
	void ACharacterBase::MulticastHandleDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_MulticastHandleDeath),NULL);
	}
	void ACharacterBase::StaticRegisterNativesACharacterBase()
	{
		UClass* Class = ACharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastHandleDeath", &ACharacterBase::execMulticastHandleDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterBase_DieAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_DieAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_DieAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "DieAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_DieAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterBase_DieAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACharacterBase_DieAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterBase_DieAction_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamName;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitReacting_MetaData[];
#endif
		static void NewProp_bHitReacting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitReacting;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbility_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbility_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitReactMontage;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontage;
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
		{ &Z_Construct_UFunction_ACharacterBase_DieAction, "DieAction" }, // 1236211070
		{ &Z_Construct_UFunction_ACharacterBase_MulticastHandleDeath, "MulticastHandleDeath" }, // 3854617414
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultBase/CharacterBase.h" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* end CombatInterface*/" },
#endif
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end CombatInterface" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName = { "WeaponTipSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, WeaponTipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, LeftHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, RightHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName = { "TailSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, TailSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_TeamName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, TeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_TeamName_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_TeamName_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes = { "DefaultVitalAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultVitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes = { "DefaultAdditionalVitalAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultAdditionalVitalAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes = { "DefaultSecondaryAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultSecondaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes_MetaData[] = {
		{ "Category", "DefaultAttributes" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes = { "DefaultGamePlayAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, DefaultGamePlayAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((ACharacterBase*)Obj)->bDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterBase), &Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_SetBit(void* Obj)
	{
		((ACharacterBase*)Obj)->bHitReacting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting = { "bHitReacting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterBase), &Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_Inner = { "GameplayAbility", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility = { "GameplayAbility", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, GameplayAbility), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Combat Interface*/" },
#endif
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
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
		{ "ModuleRelativePath", "DefaultBase/CharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBase, AttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_MetaData), Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_WeaponTipSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_LeftHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_RightHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_TailSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_TeamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultVitalAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultAdditionalVitalAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultSecondaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_DefaultGamePlayAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_bDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_bHitReacting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameplayAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_HitReactMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttackMontage,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, IEnemyInterface), false },  // 1288381000
			{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, ICombatInterface), false },  // 1353671507
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterBase);
	ACharacterBase::~ACharacterBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_CharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_CharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterBase, ACharacterBase::StaticClass, TEXT("ACharacterBase"), &Z_Registration_Info_UClass_ACharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterBase), 2184049290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_CharacterBase_h_3896309591(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_CharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_CharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
