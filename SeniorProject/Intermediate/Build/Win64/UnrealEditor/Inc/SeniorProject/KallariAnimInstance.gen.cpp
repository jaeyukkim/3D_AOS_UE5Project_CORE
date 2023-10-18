// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/Player/KallariAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKallariAnimInstance() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UKallariAnimInstance_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UKallariAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKallari_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UKallariAnimInstance::execSetDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_CanMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CanMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_StopMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_StopMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_CastingOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CastingOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_CastingOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CastingOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_CanNotAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CanNotAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_CanAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CanAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_LeftAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_LeftAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_RightAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RightAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_ResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKallariAnimInstance::execAnimNotify_SaveAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_SaveAttack();
		P_NATIVE_END;
	}
	void UKallariAnimInstance::StaticRegisterNativesUKallariAnimInstance()
	{
		UClass* Class = UKallariAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_CanAttack", &UKallariAnimInstance::execAnimNotify_CanAttack },
			{ "AnimNotify_CanMove", &UKallariAnimInstance::execAnimNotify_CanMove },
			{ "AnimNotify_CanNotAttack", &UKallariAnimInstance::execAnimNotify_CanNotAttack },
			{ "AnimNotify_CastingOff", &UKallariAnimInstance::execAnimNotify_CastingOff },
			{ "AnimNotify_CastingOn", &UKallariAnimInstance::execAnimNotify_CastingOn },
			{ "AnimNotify_LeftAttack", &UKallariAnimInstance::execAnimNotify_LeftAttack },
			{ "AnimNotify_ResetCombo", &UKallariAnimInstance::execAnimNotify_ResetCombo },
			{ "AnimNotify_RightAttack", &UKallariAnimInstance::execAnimNotify_RightAttack },
			{ "AnimNotify_SaveAttack", &UKallariAnimInstance::execAnimNotify_SaveAttack },
			{ "AnimNotify_StopMove", &UKallariAnimInstance::execAnimNotify_StopMove },
			{ "SetDead", &UKallariAnimInstance::execSetDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_CanAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_CanMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_CanNotAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_CastingOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_CastingOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_LeftAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_ResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_RightAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_SaveAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "AnimNotify_StopMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKallariAnimInstance_SetDead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKallariAnimInstance_SetDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKallariAnimInstance_SetDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKallariAnimInstance, nullptr, "SetDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKallariAnimInstance_SetDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKallariAnimInstance_SetDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKallariAnimInstance_SetDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKallariAnimInstance_SetDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKallariAnimInstance);
	UClass* Z_Construct_UClass_UKallariAnimInstance_NoRegister()
	{
		return UKallariAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKallariAnimInstance_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kallari_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Kallari;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDamaged_MetaData[];
#endif
		static void NewProp_IsDamaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDamaged;
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
	UObject* (*const Z_Construct_UClass_UKallariAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKallariAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanAttack, "AnimNotify_CanAttack" }, // 3562530118
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanMove, "AnimNotify_CanMove" }, // 3975007912
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CanNotAttack, "AnimNotify_CanNotAttack" }, // 3298119885
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOff, "AnimNotify_CastingOff" }, // 3389669816
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_CastingOn, "AnimNotify_CastingOn" }, // 1277895214
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_LeftAttack, "AnimNotify_LeftAttack" }, // 1513536938
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_ResetCombo, "AnimNotify_ResetCombo" }, // 3869694629
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_RightAttack, "AnimNotify_RightAttack" }, // 3895538772
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_SaveAttack, "AnimNotify_SaveAttack" }, // 1344367200
		{ &Z_Construct_UFunction_UKallariAnimInstance_AnimNotify_StopMove, "AnimNotify_StopMove" }, // 3114104636
		{ &Z_Construct_UFunction_UKallariAnimInstance_SetDead, "SetDead" }, // 381743325
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SeniorProject/Player/KallariAnimInstance.h" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Kallari_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Kallari = { "Kallari", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, Kallari), Z_Construct_UClass_AKallari_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Kallari_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Kallari_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDamaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDamaged_SetBit(void* Obj)
	{
		((UKallariAnimInstance*)Obj)->IsDamaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDamaged = { "IsDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKallariAnimInstance), &Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDamaged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Roll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, Roll), METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, Pitch), METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsAccelerating_SetBit(void* Obj)
	{
		((UKallariAnimInstance*)Obj)->IsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsAccelerating = { "IsAccelerating", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKallariAnimInstance), &Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_FullBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_FullBody_SetBit(void* Obj)
	{
		((UKallariAnimInstance*)Obj)->FullBody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_FullBody = { "FullBody", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKallariAnimInstance), &Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_FullBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_FullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_FullBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UKallariAnimInstance*)Obj)->IsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKallariAnimInstance), &Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AttackCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AttackCombo_SetBit(void* Obj)
	{
		((UKallariAnimInstance*)Obj)->AttackCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AttackCombo = { "AttackCombo", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKallariAnimInstance), &Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AttackCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AttackCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AttackCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((UKallariAnimInstance*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKallariAnimInstance), &Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_YawDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, YawDelta), METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_YawDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_YawDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AimRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, AimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AimRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AimRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_ActorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_ActorRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_RotationLastTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_RotationLastTick = { "RotationLastTick", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, RotationLastTick), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_RotationLastTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_RotationLastTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DeltaRotator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DeltaRotator = { "DeltaRotator", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, DeltaRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DeltaRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DeltaRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DirectionOnStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SeniorProject/Player/KallariAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DirectionOnStop = { "DirectionOnStop", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKallariAnimInstance, DirectionOnStop), METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DirectionOnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DirectionOnStop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKallariAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Kallari,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDamaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_FullBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AttackCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_IsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_YawDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_AimRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_RotationLastTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DeltaRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKallariAnimInstance_Statics::NewProp_DirectionOnStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKallariAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKallariAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKallariAnimInstance_Statics::ClassParams = {
		&UKallariAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKallariAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKallariAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKallariAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKallariAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UKallariAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKallariAnimInstance.OuterSingleton, Z_Construct_UClass_UKallariAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKallariAnimInstance.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UKallariAnimInstance>()
	{
		return UKallariAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKallariAnimInstance);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_KallariAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_KallariAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKallariAnimInstance, UKallariAnimInstance::StaticClass, TEXT("UKallariAnimInstance"), &Z_Registration_Info_UClass_UKallariAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKallariAnimInstance), 288698625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_KallariAnimInstance_h_658322782(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_KallariAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_KallariAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
