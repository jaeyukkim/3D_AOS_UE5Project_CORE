// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/AIMinions/Minions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinions() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterStatComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_EMinionState();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinionAIController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AMinions::execMinionSwordTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MinionSwordTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinions::execHurt)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hurt(Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinions::execResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinions::execComboAttackSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComboAttackSave();
		P_NATIVE_END;
	}
	void AMinions::StaticRegisterNativesAMinions()
	{
		UClass* Class = AMinions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComboAttackSave", &AMinions::execComboAttackSave },
			{ "Hurt", &AMinions::execHurt },
			{ "MinionSwordTrace", &AMinions::execMinionSwordTrace },
			{ "ResetCombo", &AMinions::execResetCombo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinions_ComboAttackSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_ComboAttackSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_ComboAttackSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "ComboAttackSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinions_ComboAttackSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_ComboAttackSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinions_ComboAttackSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_ComboAttackSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinions_Hurt_Statics
	{
		struct Minions_eventHurt_Parms
		{
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinions_Hurt_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Minions_eventHurt_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinions_Hurt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinions_Hurt_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_Hurt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_Hurt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "Hurt", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMinions_Hurt_Statics::Minions_eventHurt_Parms), Z_Construct_UFunction_AMinions_Hurt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Hurt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinions_Hurt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Hurt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinions_Hurt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_Hurt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinions_MinionSwordTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_MinionSwordTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_MinionSwordTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "MinionSwordTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinions_MinionSwordTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_MinionSwordTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinions_MinionSwordTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_MinionSwordTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinions_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "ResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinions_ResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_ResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinions_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinions);
	UClass* Z_Construct_UClass_AMinions_NoRegister()
	{
		return AMinions::StaticClass();
	}
	struct Z_Construct_UClass_AMinions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinionStat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MinionStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HpBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HpBarWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomMinionType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomMinionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanTakeDamage_MetaData[];
#endif
		static void NewProp_CanTakeDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanTakeDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damaged_MetaData[];
#endif
		static void NewProp_Damaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Damaged;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MinionAnimation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinionAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionAnimation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackMontageSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackMontageSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeleeAttackMontageSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RaneSuperAttackMontageSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaneSuperAttackMontageSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RaneSuperAttackMontageSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChrunchAttackMontageSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChrunchAttackMontageSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChrunchAttackMontageSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MinionMesh_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaeponBottomPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaeponBottomPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaeponTopPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaeponTopPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinions_ComboAttackSave, "ComboAttackSave" }, // 3307293881
		{ &Z_Construct_UFunction_AMinions_Hurt, "Hurt" }, // 1533400877
		{ &Z_Construct_UFunction_AMinions_MinionSwordTrace, "MinionSwordTrace" }, // 2118353131
		{ &Z_Construct_UFunction_AMinions_ResetCombo, "ResetCombo" }, // 1767503994
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SeniorProject/AIMinions/Minions.h" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_MinionStat_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "//virtual void PossessedBy(AController* NewController) override;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
		{ "ToolTip", "virtual void PossessedBy(AController* NewController) override;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_MinionStat = { "MinionStat", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, MinionStat), Z_Construct_UClass_UMyCharacterStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_MinionStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_MinionStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_HpBarWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_HpBarWidget = { "HpBarWidget", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, HpBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_HpBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_HpBarWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_RandomMinionType_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_RandomMinionType = { "RandomMinionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, RandomMinionType), METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_RandomMinionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_RandomMinionType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_CanTakeDamage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	void Z_Construct_UClass_AMinions_Statics::NewProp_CanTakeDamage_SetBit(void* Obj)
	{
		((AMinions*)Obj)->CanTakeDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_CanTakeDamage = { "CanTakeDamage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMinions), &Z_Construct_UClass_AMinions_Statics::NewProp_CanTakeDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_CanTakeDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_CanTakeDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_Damaged_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	void Z_Construct_UClass_AMinions_Statics::NewProp_Damaged_SetBit(void* Obj)
	{
		((AMinions*)Obj)->Damaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_Damaged = { "Damaged", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMinions), &Z_Construct_UClass_AMinions_Statics::NewProp_Damaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_Damaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_Damaged_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_MinionAnimation_Inner = { "MinionAnimation", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_MinionAnimation_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_MinionAnimation = { "MinionAnimation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, MinionAnimation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_MinionAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_MinionAnimation_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_MeleeAttackMontageSet_Inner = { "MeleeAttackMontageSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_MeleeAttackMontageSet_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//?\xcc\xb4\xcf\xbe??? ?\xd6\xb4\xcf\xb8??\xcc\xbc\xc7\xb5??? ????\n" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
		{ "ToolTip", "?\xcc\xb4\xcf\xbe??? ?\xd6\xb4\xcf\xb8??\xcc\xbc\xc7\xb5??? ????" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_MeleeAttackMontageSet = { "MeleeAttackMontageSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, MeleeAttackMontageSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_MeleeAttackMontageSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_MeleeAttackMontageSet_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_RaneSuperAttackMontageSet_Inner = { "RaneSuperAttackMontageSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_RaneSuperAttackMontageSet_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_RaneSuperAttackMontageSet = { "RaneSuperAttackMontageSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, RaneSuperAttackMontageSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_RaneSuperAttackMontageSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_RaneSuperAttackMontageSet_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_ChrunchAttackMontageSet_Inner = { "ChrunchAttackMontageSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_ChrunchAttackMontageSet_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_ChrunchAttackMontageSet = { "ChrunchAttackMontageSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, ChrunchAttackMontageSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_ChrunchAttackMontageSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_ChrunchAttackMontageSet_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AttackMontage_Inner = { "AttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, AttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AttackMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_MinionMesh_Inner = { "MinionMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_MinionMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_MinionMesh = { "MinionMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, MinionMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_MinionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_MinionMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AttackCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AttackCount = { "AttackCount", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, AttackCount), METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_AttackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AttackCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, CurrentState), Z_Construct_UEnum_SeniorProject_EMinionState, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_CurrentState_MetaData)) }; // 3007366519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, AIController), Z_Construct_UClass_AMinionAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	void Z_Construct_UClass_AMinions_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((AMinions*)Obj)->IsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMinions), &Z_Construct_UClass_AMinions_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_WaeponBottomPoint_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_WaeponBottomPoint = { "WaeponBottomPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, WaeponBottomPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_WaeponBottomPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_WaeponBottomPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_WaeponTopPoint_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_WaeponTopPoint = { "WaeponTopPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, WaeponTopPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_WaeponTopPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_WaeponTopPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/AIMinions/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinions, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_MinionStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_HpBarWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_RandomMinionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_CanTakeDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_Damaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_MinionAnimation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_MinionAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_MeleeAttackMontageSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_MeleeAttackMontageSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_RaneSuperAttackMontageSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_RaneSuperAttackMontageSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_ChrunchAttackMontageSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_ChrunchAttackMontageSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_MinionMesh_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_MinionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AttackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_IsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_WaeponBottomPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_WaeponTopPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinions_Statics::ClassParams = {
		&AMinions::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinions()
	{
		if (!Z_Registration_Info_UClass_AMinions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinions.OuterSingleton, Z_Construct_UClass_AMinions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinions.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMinions>()
	{
		return AMinions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinions);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinions, AMinions::StaticClass, TEXT("AMinions"), &Z_Registration_Info_UClass_AMinions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinions), 1490017780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_1986530134(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_Minions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
