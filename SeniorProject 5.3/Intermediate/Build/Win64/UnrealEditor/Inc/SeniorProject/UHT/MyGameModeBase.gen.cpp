// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyGameModeBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "UpdateMinionTargetsSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FUpdateMinionTargetsSignature_DelegateWrapper(const FMulticastScriptDelegate& UpdateMinionTargetsSignature)
{
	UpdateMinionTargetsSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AMyGameModeBase::execIsInhibitorDestroyed)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInhibitorDestroyed(Z_Param_TeamTag,Z_Param_LineTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execSpawnMinion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMinion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execGetValidTargetTurret)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetValidTargetTurret(Z_Param_TeamTag,Z_Param_LineTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execUpdateTurretStates)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TurretLevelTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_GET_UBOOL(Z_Param_bisdestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTurretStates(Z_Param_LineTag,Z_Param_TurretLevelTag,Z_Param_TeamTag,Z_Param_bisdestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execOnTurretDestroyed)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TurretLevelTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTurretDestroyed(Z_Param_LineTag,Z_Param_TurretLevelTag,Z_Param_TeamTag);
		P_NATIVE_END;
	}
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
		UClass* Class = AMyGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValidTargetTurret", &AMyGameModeBase::execGetValidTargetTurret },
			{ "IsInhibitorDestroyed", &AMyGameModeBase::execIsInhibitorDestroyed },
			{ "OnTurretDestroyed", &AMyGameModeBase::execOnTurretDestroyed },
			{ "SpawnMinion", &AMyGameModeBase::execSpawnMinion },
			{ "UpdateTurretStates", &AMyGameModeBase::execUpdateTurretStates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics
	{
		struct MyGameModeBase_eventGetValidTargetTurret_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventGetValidTargetTurret_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventGetValidTargetTurret_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventGetValidTargetTurret_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::NewProp_TeamTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "GetValidTargetTurret", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::MyGameModeBase_eventGetValidTargetTurret_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::MyGameModeBase_eventGetValidTargetTurret_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics
	{
		struct MyGameModeBase_eventIsInhibitorDestroyed_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventIsInhibitorDestroyed_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventIsInhibitorDestroyed_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyGameModeBase_eventIsInhibitorDestroyed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyGameModeBase_eventIsInhibitorDestroyed_Parms), &Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_TeamTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "IsInhibitorDestroyed", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::MyGameModeBase_eventIsInhibitorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::MyGameModeBase_eventIsInhibitorDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics
	{
		struct MyGameModeBase_eventOnTurretDestroyed_Parms
		{
			FGameplayTag LineTag;
			FGameplayTag TurretLevelTag;
			FGameplayTag TeamTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretLevelTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurretLevelTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_LineTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventOnTurretDestroyed_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_LineTag_MetaData), Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_LineTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TurretLevelTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TurretLevelTag = { "TurretLevelTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventOnTurretDestroyed_Parms, TurretLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TurretLevelTag_MetaData), Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TurretLevelTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TeamTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventOnTurretDestroyed_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TeamTag_MetaData), Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TeamTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TurretLevelTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::NewProp_TeamTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x83\x80\xec\x9b\x8c \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xeb\xb9\x84\xed\x8a\xb8\xeb\xa7\x88\xec\x8a\xa4\xed\x81\xac\n" },
#endif
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x83\x80\xec\x9b\x8c \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xeb\xb9\x84\xed\x8a\xb8\xeb\xa7\x88\xec\x8a\xa4\xed\x81\xac" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "OnTurretDestroyed", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::MyGameModeBase_eventOnTurretDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::MyGameModeBase_eventOnTurretDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_SpawnMinion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_SpawnMinion_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xbc\xec\xa0\x95 \xec\x8b\x9c\xea\xb0\x84\xeb\xa7\x88\xeb\x8b\xa4 \xeb\xaf\xb8\xeb\x8b\x88\xec\x96\xb8 \xec\x8a\xa4\xed\x8f\xb0\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xbc\xec\xa0\x95 \xec\x8b\x9c\xea\xb0\x84\xeb\xa7\x88\xeb\x8b\xa4 \xeb\xaf\xb8\xeb\x8b\x88\xec\x96\xb8 \xec\x8a\xa4\xed\x8f\xb0\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_SpawnMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "SpawnMinion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_SpawnMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_SpawnMinion_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_SpawnMinion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_SpawnMinion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics
	{
		struct MyGameModeBase_eventUpdateTurretStates_Parms
		{
			FGameplayTag LineTag;
			FGameplayTag TurretLevelTag;
			FGameplayTag TeamTag;
			bool bisdestroyed;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurretLevelTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamTag;
		static void NewProp_bisdestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bisdestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventUpdateTurretStates_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_TurretLevelTag = { "TurretLevelTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventUpdateTurretStates_Parms, TurretLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventUpdateTurretStates_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_bisdestroyed_SetBit(void* Obj)
	{
		((MyGameModeBase_eventUpdateTurretStates_Parms*)Obj)->bisdestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_bisdestroyed = { "bisdestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyGameModeBase_eventUpdateTurretStates_Parms), &Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_bisdestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_TurretLevelTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_TeamTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::NewProp_bisdestroyed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "UpdateTurretStates", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::MyGameModeBase_eventUpdateTurretStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::MyGameModeBase_eventUpdateTurretStates_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBase);
	UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
	{
		return AMyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterClassInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMinionTargets_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UpdateMinionTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameModeBase_GetValidTargetTurret, "GetValidTargetTurret" }, // 2122544787
		{ &Z_Construct_UFunction_AMyGameModeBase_IsInhibitorDestroyed, "IsInhibitorDestroyed" }, // 1455631530
		{ &Z_Construct_UFunction_AMyGameModeBase_OnTurretDestroyed, "OnTurretDestroyed" }, // 3347979861
		{ &Z_Construct_UFunction_AMyGameModeBase_SpawnMinion, "SpawnMinion" }, // 140511807
		{ &Z_Construct_UFunction_AMyGameModeBase_UpdateTurretStates, "UpdateTurretStates" }, // 3873536948
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameSetting/MyGameModeBase.h" },
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CharacterClassInfo_MetaData[] = {
		{ "Category", "Character Class Defaults" },
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CharacterClassInfo = { "CharacterClassInfo", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, CharacterClassInfo), Z_Construct_UClass_UCharacterClassInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CharacterClassInfo_MetaData), Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CharacterClassInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_UpdateMinionTargets_MetaData[] = {
		{ "Category", "GameRule" },
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_UpdateMinionTargets = { "UpdateMinionTargets", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameModeBase, UpdateMinionTargets), Z_Construct_UDelegateFunction_SeniorProject_UpdateMinionTargetsSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_UpdateMinionTargets_MetaData), Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_UpdateMinionTargets_MetaData) }; // 2613996864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CharacterClassInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_UpdateMinionTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
		&AMyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMyGameModeBase>()
	{
		return AMyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
	AMyGameModeBase::~AMyGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBase, AMyGameModeBase::StaticClass, TEXT("AMyGameModeBase"), &Z_Registration_Info_UClass_AMyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBase), 4280578734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_3803261206(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
