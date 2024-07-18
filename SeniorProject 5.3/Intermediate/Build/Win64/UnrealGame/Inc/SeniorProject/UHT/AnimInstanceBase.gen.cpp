// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/CharacterBase/DefaultBase/AnimInstanceBase.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAnimInstanceBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAnimInstanceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UAnimInstanceBase::execSetDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceBase::execAnimNotify_LeftAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_LeftAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceBase::execAnimNotify_RightAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RightAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceBase::execAnimNotify_ResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceBase::execAnimNotify_SaveAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_SaveAttack();
		P_NATIVE_END;
	}
	void UAnimInstanceBase::StaticRegisterNativesUAnimInstanceBase()
	{
		UClass* Class = UAnimInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_LeftAttack", &UAnimInstanceBase::execAnimNotify_LeftAttack },
			{ "AnimNotify_ResetCombo", &UAnimInstanceBase::execAnimNotify_ResetCombo },
			{ "AnimNotify_RightAttack", &UAnimInstanceBase::execAnimNotify_RightAttack },
			{ "AnimNotify_SaveAttack", &UAnimInstanceBase::execAnimNotify_SaveAttack },
			{ "SetDead", &UAnimInstanceBase::execSetDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceBase, nullptr, "AnimNotify_LeftAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceBase, nullptr, "AnimNotify_ResetCombo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceBase, nullptr, "AnimNotify_RightAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceBase, nullptr, "AnimNotify_SaveAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceBase_SetDead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceBase_SetDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceBase_SetDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceBase, nullptr, "SetDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceBase_SetDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstanceBase_SetDead_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimInstanceBase_SetDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceBase_SetDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimInstanceBase);
	UClass* Z_Construct_UClass_UAnimInstanceBase_NoRegister()
	{
		return UAnimInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDamaged_MetaData[];
#endif
		static void NewProp_IsDamaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDamaged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAccelerating_MetaData[];
#endif
		static void NewProp_IsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullBody_MetaData[];
#endif
		static void NewProp_FullBody_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FullBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCombo_MetaData[];
#endif
		static void NewProp_AttackCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttackCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLastTick_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLastTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_LeftAttack, "AnimNotify_LeftAttack" }, // 3461494606
		{ &Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_ResetCombo, "AnimNotify_ResetCombo" }, // 1890268773
		{ &Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_RightAttack, "AnimNotify_RightAttack" }, // 2991602563
		{ &Z_Construct_UFunction_UAnimInstanceBase_AnimNotify_SaveAttack, "AnimNotify_SaveAttack" }, // 1849677321
		{ &Z_Construct_UFunction_UAnimInstanceBase_SetDead, "SetDead" }, // 5017803
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, Character), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDamaged_SetBit(void* Obj)
	{
		((UAnimInstanceBase*)Obj)->IsDamaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDamaged = { "IsDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDamaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDamaged_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDamaged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_EnemyDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_EnemyDirection = { "EnemyDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, EnemyDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_EnemyDirection_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_EnemyDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Roll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, Roll), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Roll_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Roll_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Pitch_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Pitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Yaw_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Yaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsAccelerating_SetBit(void* Obj)
	{
		((UAnimInstanceBase*)Obj)->IsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsAccelerating = { "IsAccelerating", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsAccelerating_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsAccelerating_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_FullBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_FullBody_SetBit(void* Obj)
	{
		((UAnimInstanceBase*)Obj)->FullBody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_FullBody = { "FullBody", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_FullBody_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_FullBody_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_FullBody_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UAnimInstanceBase*)Obj)->IsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsInAir_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AttackCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AttackCombo_SetBit(void* Obj)
	{
		((UAnimInstanceBase*)Obj)->AttackCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AttackCombo = { "AttackCombo", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AttackCombo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AttackCombo_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AttackCombo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((UAnimInstanceBase*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDead_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_YawDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, YawDelta), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_YawDelta_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_YawDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AimRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, AimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AimRotation_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AimRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_ActorRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_RotationLastTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_RotationLastTick = { "RotationLastTick", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, RotationLastTick), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_RotationLastTick_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_RotationLastTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_DeltaRotator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_DeltaRotator = { "DeltaRotator", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, DeltaRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_DeltaRotator_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_DeltaRotator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/AnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Direction_MetaData), Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDamaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_EnemyDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_FullBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AttackCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_IsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_YawDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AimRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_RotationLastTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_DeltaRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstanceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstanceBase_Statics::ClassParams = {
		&UAnimInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimInstanceBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimInstanceBase()
	{
		if (!Z_Registration_Info_UClass_UAnimInstanceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimInstanceBase.OuterSingleton, Z_Construct_UClass_UAnimInstanceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimInstanceBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAnimInstanceBase>()
	{
		return UAnimInstanceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstanceBase);
	UAnimInstanceBase::~UAnimInstanceBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimInstanceBase, UAnimInstanceBase::StaticClass, TEXT("UAnimInstanceBase"), &Z_Registration_Info_UClass_UAnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimInstanceBase), 351374128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_3456874202(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_AnimInstanceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
