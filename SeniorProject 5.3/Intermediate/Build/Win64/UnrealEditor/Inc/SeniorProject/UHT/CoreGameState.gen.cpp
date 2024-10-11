// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACoreGameState();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACoreGameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(ACoreGameState::execIsInhibitorDestroyed)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInhibitorDestroyed(Z_Param_TeamTag,Z_Param_LineTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execGetValidTargetTurret)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetValidTargetTurret(Z_Param_TeamTag,Z_Param_LineTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execUpdateTurretStates)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TurretLevelTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_GET_UBOOL(Z_Param_bIsDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTurretStates(Z_Param_LineTag,Z_Param_TurretLevelTag,Z_Param_TeamTag,Z_Param_bIsDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execOnRep_BlueTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlueTeamScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execOnRep_RedTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RedTeamScore();
		P_NATIVE_END;
	}
	void ACoreGameState::StaticRegisterNativesACoreGameState()
	{
		UClass* Class = ACoreGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValidTargetTurret", &ACoreGameState::execGetValidTargetTurret },
			{ "IsInhibitorDestroyed", &ACoreGameState::execIsInhibitorDestroyed },
			{ "OnRep_BlueTeamScore", &ACoreGameState::execOnRep_BlueTeamScore },
			{ "OnRep_RedTeamScore", &ACoreGameState::execOnRep_RedTeamScore },
			{ "UpdateTurretStates", &ACoreGameState::execUpdateTurretStates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics
	{
		struct CoreGameState_eventGetValidTargetTurret_Parms
		{
			FGameplayTag TeamTag;
			FGameplayTag LineTag;
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventGetValidTargetTurret_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventGetValidTargetTurret_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventGetValidTargetTurret_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::NewProp_TeamTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "GetValidTargetTurret", nullptr, nullptr, Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::CoreGameState_eventGetValidTargetTurret_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::CoreGameState_eventGetValidTargetTurret_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics
	{
		struct CoreGameState_eventIsInhibitorDestroyed_Parms
		{
			FGameplayTag TeamTag;
			FGameplayTag LineTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventIsInhibitorDestroyed_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventIsInhibitorDestroyed_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreGameState_eventIsInhibitorDestroyed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CoreGameState_eventIsInhibitorDestroyed_Parms), &Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_TeamTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "IsInhibitorDestroyed", nullptr, nullptr, Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::CoreGameState_eventIsInhibitorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::CoreGameState_eventIsInhibitorDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "OnRep_BlueTeamScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "OnRep_RedTeamScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics
	{
		struct CoreGameState_eventUpdateTurretStates_Parms
		{
			FGameplayTag LineTag;
			FGameplayTag TurretLevelTag;
			FGameplayTag TeamTag;
			bool bIsDestroy;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurretLevelTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
		static void NewProp_bIsDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventUpdateTurretStates_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_TurretLevelTag = { "TurretLevelTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventUpdateTurretStates_Parms, TurretLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventUpdateTurretStates_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_bIsDestroy_SetBit(void* Obj)
	{
		((CoreGameState_eventUpdateTurretStates_Parms*)Obj)->bIsDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_bIsDestroy = { "bIsDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CoreGameState_eventUpdateTurretStates_Parms), &Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_bIsDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_TurretLevelTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_TeamTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::NewProp_bIsDestroy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "UpdateTurretStates", nullptr, nullptr, Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::CoreGameState_eventUpdateTurretStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::CoreGameState_eventUpdateTurretStates_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACoreGameState_UpdateTurretStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_UpdateTurretStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoreGameState);
	UClass* Z_Construct_UClass_ACoreGameState_NoRegister()
	{
		return ACoreGameState::StaticClass();
	}
	struct Z_Construct_UClass_ACoreGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RedTeamScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueTeamScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoreGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoreGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret, "GetValidTargetTurret" }, // 852579338
		{ &Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed, "IsInhibitorDestroyed" }, // 2611574157
		{ &Z_Construct_UFunction_ACoreGameState_OnRep_BlueTeamScore, "OnRep_BlueTeamScore" }, // 2144770293
		{ &Z_Construct_UFunction_ACoreGameState_OnRep_RedTeamScore, "OnRep_RedTeamScore" }, // 3478234912
		{ &Z_Construct_UFunction_ACoreGameState_UpdateTurretStates, "UpdateTurretStates" }, // 3468069402
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameSetting/CoreGameState.h" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamScore = { "RedTeamScore", "OnRep_RedTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, RedTeamScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamScore_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamScore = { "BlueTeamScore", "OnRep_BlueTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, BlueTeamScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamScore_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamScore_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoreGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoreGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreGameState_Statics::ClassParams = {
		&ACoreGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoreGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreGameState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACoreGameState()
	{
		if (!Z_Registration_Info_UClass_ACoreGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreGameState.OuterSingleton, Z_Construct_UClass_ACoreGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoreGameState.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ACoreGameState>()
	{
		return ACoreGameState::StaticClass();
	}

	void ACoreGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RedTeamScore(TEXT("RedTeamScore"));
		static const FName Name_BlueTeamScore(TEXT("BlueTeamScore"));

		const bool bIsValid = true
			&& Name_RedTeamScore == ClassReps[(int32)ENetFields_Private::RedTeamScore].Property->GetFName()
			&& Name_BlueTeamScore == ClassReps[(int32)ENetFields_Private::BlueTeamScore].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACoreGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreGameState);
	ACoreGameState::~ACoreGameState() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoreGameState, ACoreGameState::StaticClass, TEXT("ACoreGameState"), &Z_Registration_Info_UClass_ACoreGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreGameState), 2229344559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_1174609926(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
