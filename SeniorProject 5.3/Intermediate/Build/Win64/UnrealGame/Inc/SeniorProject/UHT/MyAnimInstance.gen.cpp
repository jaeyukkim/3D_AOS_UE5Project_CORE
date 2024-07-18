// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Player/PlayerBase/MyAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimInstance() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAnimInstanceBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyAnimInstance();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Ability_R_Cooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Ability_R_Cooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Attack_R)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attack_R();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_MoveToSword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_MoveToSword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Ability_RMB_Cooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Ability_RMB_Cooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Attack_RMB_NoWep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attack_RMB_NoWep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Attack_RMB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attack_RMB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Attack_Q)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attack_Q();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Ability_Q_Cooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Ability_Q_Cooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_UnHideKwangSword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_UnHideKwangSword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_HideKwangSword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_HideKwangSword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_UnHideSword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_UnHideSword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_HideSword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_HideSword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_FootStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_FootStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_CanMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CanMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_StopMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_StopMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_CastingOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CastingOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_CastingOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CastingOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_CanNotAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CanNotAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_CanAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CanAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_RunStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RunStop();
		P_NATIVE_END;
	}
	void UMyAnimInstance::StaticRegisterNativesUMyAnimInstance()
	{
		UClass* Class = UMyAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_Ability_Q_Cooldown", &UMyAnimInstance::execAnimNotify_Ability_Q_Cooldown },
			{ "AnimNotify_Ability_R_Cooldown", &UMyAnimInstance::execAnimNotify_Ability_R_Cooldown },
			{ "AnimNotify_Ability_RMB_Cooldown", &UMyAnimInstance::execAnimNotify_Ability_RMB_Cooldown },
			{ "AnimNotify_Attack_Q", &UMyAnimInstance::execAnimNotify_Attack_Q },
			{ "AnimNotify_Attack_R", &UMyAnimInstance::execAnimNotify_Attack_R },
			{ "AnimNotify_Attack_RMB", &UMyAnimInstance::execAnimNotify_Attack_RMB },
			{ "AnimNotify_Attack_RMB_NoWep", &UMyAnimInstance::execAnimNotify_Attack_RMB_NoWep },
			{ "AnimNotify_CanAttack", &UMyAnimInstance::execAnimNotify_CanAttack },
			{ "AnimNotify_CanMove", &UMyAnimInstance::execAnimNotify_CanMove },
			{ "AnimNotify_CanNotAttack", &UMyAnimInstance::execAnimNotify_CanNotAttack },
			{ "AnimNotify_CastingOff", &UMyAnimInstance::execAnimNotify_CastingOff },
			{ "AnimNotify_CastingOn", &UMyAnimInstance::execAnimNotify_CastingOn },
			{ "AnimNotify_FootStep", &UMyAnimInstance::execAnimNotify_FootStep },
			{ "AnimNotify_HideKwangSword", &UMyAnimInstance::execAnimNotify_HideKwangSword },
			{ "AnimNotify_HideSword", &UMyAnimInstance::execAnimNotify_HideSword },
			{ "AnimNotify_MoveToSword", &UMyAnimInstance::execAnimNotify_MoveToSword },
			{ "AnimNotify_RunStop", &UMyAnimInstance::execAnimNotify_RunStop },
			{ "AnimNotify_StopMove", &UMyAnimInstance::execAnimNotify_StopMove },
			{ "AnimNotify_UnHideKwangSword", &UMyAnimInstance::execAnimNotify_UnHideKwangSword },
			{ "AnimNotify_UnHideSword", &UMyAnimInstance::execAnimNotify_UnHideSword },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Ability_Q_Cooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Ability_R_Cooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Ability_RMB_Cooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Attack_Q", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Attack_R", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Attack_RMB", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Attack_RMB_NoWep", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_CanAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_CanMove", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_CanNotAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_CastingOff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_CastingOn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_FootStep", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_HideKwangSword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_HideSword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_MoveToSword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_RunStop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_StopMove", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_UnHideKwangSword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_UnHideSword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimInstance);
	UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister()
	{
		return UMyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNoWep_MetaData[];
#endif
		static void NewProp_bIsNoWep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNoWep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionOnStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionOnStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCasting_MetaData[];
#endif
		static void NewProp_bIsCasting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCasting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_Q_Cooldown, "AnimNotify_Ability_Q_Cooldown" }, // 1477594183
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_R_Cooldown, "AnimNotify_Ability_R_Cooldown" }, // 4074787301
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Ability_RMB_Cooldown, "AnimNotify_Ability_RMB_Cooldown" }, // 4010303332
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Q, "AnimNotify_Attack_Q" }, // 133518142
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_R, "AnimNotify_Attack_R" }, // 2759797991
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB, "AnimNotify_Attack_RMB" }, // 3607857761
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_RMB_NoWep, "AnimNotify_Attack_RMB_NoWep" }, // 1444590729
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanAttack, "AnimNotify_CanAttack" }, // 3961391079
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanMove, "AnimNotify_CanMove" }, // 2333781416
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CanNotAttack, "AnimNotify_CanNotAttack" }, // 3688574186
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOff, "AnimNotify_CastingOff" }, // 1945653238
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_CastingOn, "AnimNotify_CastingOn" }, // 3979893648
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_FootStep, "AnimNotify_FootStep" }, // 1220703952
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideKwangSword, "AnimNotify_HideKwangSword" }, // 3764122452
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HideSword, "AnimNotify_HideSword" }, // 1742026611
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_MoveToSword, "AnimNotify_MoveToSword" }, // 640564295
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_RunStop, "AnimNotify_RunStop" }, // 2770471107
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_StopMove, "AnimNotify_StopMove" }, // 2948213161
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideKwangSword, "AnimNotify_UnHideKwangSword" }, // 2705864988
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_UnHideSword, "AnimNotify_UnHideSword" }, // 4148046319
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsNoWep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsNoWep_SetBit(void* Obj)
	{
		((UMyAnimInstance*)Obj)->bIsNoWep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsNoWep = { "bIsNoWep", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsNoWep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsNoWep_MetaData), Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsNoWep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_DirectionOnStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_DirectionOnStop = { "DirectionOnStop", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, DirectionOnStop), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_DirectionOnStop_MetaData), Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_DirectionOnStop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCasting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCasting_SetBit(void* Obj)
	{
		((UMyAnimInstance*)Obj)->bIsCasting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCasting = { "bIsCasting", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCasting_MetaData), Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCasting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/PlayerBase/MyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, PlayerCharacter), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacter_MetaData), Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsNoWep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_DirectionOnStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCasting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams = {
		&UMyAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton, Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMyAnimInstance>()
	{
		return UMyAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimInstance);
	UMyAnimInstance::~UMyAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_PlayerBase_MyAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_PlayerBase_MyAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimInstance, UMyAnimInstance::StaticClass, TEXT("UMyAnimInstance"), &Z_Registration_Info_UClass_UMyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimInstance), 3678582017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_PlayerBase_MyAnimInstance_h_2390310246(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_PlayerBase_MyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_PlayerBase_MyAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
