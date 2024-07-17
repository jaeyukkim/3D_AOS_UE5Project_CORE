// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AIMinions/MinionAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionAnimInstance() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMinionAnimInstance_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMinionAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UMinionAnimInstance::execSetDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinionAnimInstance::execAnimNotify_LeftAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_LeftAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinionAnimInstance::execAnimNotify_RightAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RightAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinionAnimInstance::execAnimNotify_RunStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RunStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinionAnimInstance::execAnimNotify_ResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinionAnimInstance::execAnimNotify_SaveAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_SaveAttack();
		P_NATIVE_END;
	}
	void UMinionAnimInstance::StaticRegisterNativesUMinionAnimInstance()
	{
		UClass* Class = UMinionAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_LeftAttack", &UMinionAnimInstance::execAnimNotify_LeftAttack },
			{ "AnimNotify_ResetCombo", &UMinionAnimInstance::execAnimNotify_ResetCombo },
			{ "AnimNotify_RightAttack", &UMinionAnimInstance::execAnimNotify_RightAttack },
			{ "AnimNotify_RunStop", &UMinionAnimInstance::execAnimNotify_RunStop },
			{ "AnimNotify_SaveAttack", &UMinionAnimInstance::execAnimNotify_SaveAttack },
			{ "SetDead", &UMinionAnimInstance::execSetDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionAnimInstance, nullptr, "AnimNotify_LeftAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionAnimInstance, nullptr, "AnimNotify_ResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionAnimInstance, nullptr, "AnimNotify_RightAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionAnimInstance, nullptr, "AnimNotify_RunStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionAnimInstance, nullptr, "AnimNotify_SaveAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinionAnimInstance_SetDead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionAnimInstance_SetDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionAnimInstance_SetDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionAnimInstance, nullptr, "SetDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionAnimInstance_SetDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionAnimInstance_SetDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionAnimInstance_SetDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinionAnimInstance_SetDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinionAnimInstance);
	UClass* Z_Construct_UClass_UMinionAnimInstance_NoRegister()
	{
		return UMinionAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMinionAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Minion;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionOnStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionOnStop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinionAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMinionAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_LeftAttack, "AnimNotify_LeftAttack" }, // 1789906081
		{ &Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_ResetCombo, "AnimNotify_ResetCombo" }, // 3913153862
		{ &Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RightAttack, "AnimNotify_RightAttack" }, // 3759431356
		{ &Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_RunStop, "AnimNotify_RunStop" }, // 4055123645
		{ &Z_Construct_UFunction_UMinionAnimInstance_AnimNotify_SaveAttack, "AnimNotify_SaveAttack" }, // 4035213285
		{ &Z_Construct_UFunction_UMinionAnimInstance_SetDead, "SetDead" }, // 2874841735
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AIMinions/MinionAnimInstance.h" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Minion_MetaData[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Minion = { "Minion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, Minion), Z_Construct_UClass_AMinions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Minion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Minion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDamaged_SetBit(void* Obj)
	{
		((UMinionAnimInstance*)Obj)->IsDamaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDamaged = { "IsDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMinionAnimInstance), &Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDamaged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_EnemyDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_EnemyDirection = { "EnemyDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, EnemyDirection), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_EnemyDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_EnemyDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Roll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, Roll), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, Pitch), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsAccelerating_SetBit(void* Obj)
	{
		((UMinionAnimInstance*)Obj)->IsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsAccelerating = { "IsAccelerating", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMinionAnimInstance), &Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_FullBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_FullBody_SetBit(void* Obj)
	{
		((UMinionAnimInstance*)Obj)->FullBody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_FullBody = { "FullBody", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMinionAnimInstance), &Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_FullBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_FullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_FullBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UMinionAnimInstance*)Obj)->IsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMinionAnimInstance), &Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AttackCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AttackCombo_SetBit(void* Obj)
	{
		((UMinionAnimInstance*)Obj)->AttackCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AttackCombo = { "AttackCombo", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMinionAnimInstance), &Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AttackCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AttackCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AttackCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((UMinionAnimInstance*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMinionAnimInstance), &Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_YawDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, YawDelta), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_YawDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_YawDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AimRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, AimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AimRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AimRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_ActorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_ActorRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_RotationLastTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_RotationLastTick = { "RotationLastTick", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, RotationLastTick), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_RotationLastTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_RotationLastTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DeltaRotator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DeltaRotator = { "DeltaRotator", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, DeltaRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DeltaRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DeltaRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DirectionOnStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "AIMinions/MinionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DirectionOnStop = { "DirectionOnStop", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAnimInstance, DirectionOnStop), METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DirectionOnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DirectionOnStop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinionAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Minion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDamaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_EnemyDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_FullBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AttackCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_IsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_YawDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_AimRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_RotationLastTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DeltaRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAnimInstance_Statics::NewProp_DirectionOnStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinionAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinionAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinionAnimInstance_Statics::ClassParams = {
		&UMinionAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMinionAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMinionAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinionAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMinionAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinionAnimInstance.OuterSingleton, Z_Construct_UClass_UMinionAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinionAnimInstance.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMinionAnimInstance>()
	{
		return UMinionAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinionAnimInstance);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinionAnimInstance, UMinionAnimInstance::StaticClass, TEXT("UMinionAnimInstance"), &Z_Registration_Info_UClass_UMinionAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinionAnimInstance), 4094568803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_699528721(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
