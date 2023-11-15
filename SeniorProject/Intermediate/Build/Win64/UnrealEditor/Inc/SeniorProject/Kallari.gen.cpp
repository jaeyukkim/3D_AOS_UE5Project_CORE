// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/Player/Kallari.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKallari() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKallari_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKallari();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterStatComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangAiController_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_ECharacterState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AKallari::execTwoHandTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TwoHandTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKallari::execHurt)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hurt(Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKallari::execResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKallari::execComboAttackSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComboAttackSave();
		P_NATIVE_END;
	}
	void AKallari::StaticRegisterNativesAKallari()
	{
		UClass* Class = AKallari::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComboAttackSave", &AKallari::execComboAttackSave },
			{ "Hurt", &AKallari::execHurt },
			{ "ResetCombo", &AKallari::execResetCombo },
			{ "TwoHandTrace", &AKallari::execTwoHandTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKallari_ComboAttackSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKallari_ComboAttackSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKallari_ComboAttackSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKallari, nullptr, "ComboAttackSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKallari_ComboAttackSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKallari_ComboAttackSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKallari_ComboAttackSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKallari_ComboAttackSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKallari_Hurt_Statics
	{
		struct Kallari_eventHurt_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKallari_Hurt_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Kallari_eventHurt_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKallari_Hurt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKallari_Hurt_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKallari_Hurt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKallari_Hurt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKallari, nullptr, "Hurt", nullptr, nullptr, sizeof(Z_Construct_UFunction_AKallari_Hurt_Statics::Kallari_eventHurt_Parms), Z_Construct_UFunction_AKallari_Hurt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKallari_Hurt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKallari_Hurt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKallari_Hurt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKallari_Hurt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKallari_Hurt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKallari_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKallari_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKallari_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKallari, nullptr, "ResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKallari_ResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKallari_ResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKallari_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKallari_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKallari_TwoHandTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKallari_TwoHandTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKallari_TwoHandTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKallari, nullptr, "TwoHandTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKallari_TwoHandTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKallari_TwoHandTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKallari_TwoHandTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKallari_TwoHandTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKallari);
	UClass* Z_Construct_UClass_AKallari_NoRegister()
	{
		return AKallari::StaticClass();
	}
	struct Z_Construct_UClass_AKallari_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HpBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HpBarWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAnimation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartGameAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaeponBottomPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaeponBottomPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaeponTopPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaeponTopPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeadTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamagedTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKallari_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKallari_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKallari_ComboAttackSave, "ComboAttackSave" }, // 3219744522
		{ &Z_Construct_UFunction_AKallari_Hurt, "Hurt" }, // 351442386
		{ &Z_Construct_UFunction_AKallari_ResetCombo, "ResetCombo" }, // 2920217254
		{ &Z_Construct_UFunction_AKallari_TwoHandTrace, "TwoHandTrace" }, // 1472008044
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SeniorProject/Player/Kallari.h" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_CharacterStat_MetaData[] = {
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_CharacterStat = { "CharacterStat", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, CharacterStat), Z_Construct_UClass_UMyCharacterStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_CharacterStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_CharacterStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_HpBarWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_HpBarWidget = { "HpBarWidget", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, HpBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_HpBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_HpBarWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_CharacterAnimation_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_CharacterAnimation = { "CharacterAnimation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, CharacterAnimation), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_CharacterAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_CharacterAnimation_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_AttackMontage_Inner = { "AttackMontage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, AttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_StartGameAnim_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_StartGameAnim = { "StartGameAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, StartGameAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_StartGameAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_StartGameAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_CharacterMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_CharacterMesh = { "CharacterMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, CharacterMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_CharacterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_CharacterMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, PlayerController), Z_Construct_UClass_AMyPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, AIController), Z_Construct_UClass_AKwangAiController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_AIController_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, CurrentState), Z_Construct_UEnum_SeniorProject_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_CurrentState_MetaData)) }; // 719557229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_WaeponBottomPoint_MetaData[] = {
		{ "Comment", "//???\xdd\xbd? \xc4\xae?? ???? ????\n" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
		{ "ToolTip", "???\xdd\xbd? \xc4\xae?? ???? ????" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_WaeponBottomPoint = { "WaeponBottomPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, WaeponBottomPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_WaeponBottomPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_WaeponBottomPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_WaeponTopPoint_MetaData[] = {
		{ "Comment", "//???? \xc4\xae?? ??????\xc4\xa1\n" },
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
		{ "ToolTip", "???? \xc4\xae?? ??????\xc4\xa1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_WaeponTopPoint = { "WaeponTopPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, WaeponTopPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_WaeponTopPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_WaeponTopPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_DeadTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_DeadTimerHandle = { "DeadTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, DeadTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_DeadTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_DeadTimerHandle_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_DamagedTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_DamagedTimerHandle = { "DamagedTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, DamagedTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_DamagedTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_DamagedTimerHandle_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallari_Statics::NewProp_LoadingTimer_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/Kallari.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKallari_Statics::NewProp_LoadingTimer = { "LoadingTimer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKallari, LoadingTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::NewProp_LoadingTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::NewProp_LoadingTimer_MetaData)) }; // 589591453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKallari_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_CharacterStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_HpBarWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_CharacterAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_AttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_StartGameAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_CharacterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_WaeponBottomPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_WaeponTopPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_DeadTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_DamagedTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKallari_Statics::NewProp_LoadingTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKallari_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKallari>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKallari_Statics::ClassParams = {
		&AKallari::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKallari_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKallari_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKallari_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKallari()
	{
		if (!Z_Registration_Info_UClass_AKallari.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKallari.OuterSingleton, Z_Construct_UClass_AKallari_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKallari.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AKallari>()
	{
		return AKallari::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKallari);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKallari, AKallari::StaticClass, TEXT("AKallari"), &Z_Registration_Info_UClass_AKallari, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKallari), 1513659712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_4181704984(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_Kallari_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
