// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Interface/GameRuleInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRuleInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameRuleInterface();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameRuleInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(IGameRuleInterface::execGetTurretLevelTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetTurretLevelTag_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameRuleInterface::execSetLineTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewTeamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLineTag_Implementation(Z_Param_NewTeamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameRuleInterface::execGetLineTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetLineTag_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameRuleInterface::execSetMinionTeamName)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewTeamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinionTeamName_Implementation(Z_Param_NewTeamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameRuleInterface::execSetPlayerTeamName)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerTeamName_Implementation(Z_Param_PS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameRuleInterface::execGetTeamName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetTeamName_Implementation();
		P_NATIVE_END;
	}
	struct GameRuleInterface_eventGetLineTag_Parms
	{
		FGameplayTag ReturnValue;
	};
	struct GameRuleInterface_eventGetTeamName_Parms
	{
		FGameplayTag ReturnValue;
	};
	struct GameRuleInterface_eventGetTurretLevelTag_Parms
	{
		FGameplayTag ReturnValue;
	};
	struct GameRuleInterface_eventSetLineTag_Parms
	{
		FGameplayTag NewTeamName;
	};
	struct GameRuleInterface_eventSetMinionTeamName_Parms
	{
		FGameplayTag NewTeamName;
	};
	struct GameRuleInterface_eventSetPlayerTeamName_Parms
	{
		APlayerState* PS;
	};
	FGameplayTag IGameRuleInterface::GetLineTag() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLineTag instead.");
		GameRuleInterface_eventGetLineTag_Parms Parms;
		return Parms.ReturnValue;
	}
	FGameplayTag IGameRuleInterface::GetTeamName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTeamName instead.");
		GameRuleInterface_eventGetTeamName_Parms Parms;
		return Parms.ReturnValue;
	}
	FGameplayTag IGameRuleInterface::GetTurretLevelTag() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTurretLevelTag instead.");
		GameRuleInterface_eventGetTurretLevelTag_Parms Parms;
		return Parms.ReturnValue;
	}
	void IGameRuleInterface::SetLineTag(FGameplayTag NewTeamName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLineTag instead.");
	}
	void IGameRuleInterface::SetMinionTeamName(FGameplayTag NewTeamName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMinionTeamName instead.");
	}
	void IGameRuleInterface::SetPlayerTeamName(APlayerState* PS)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerTeamName instead.");
	}
	void UGameRuleInterface::StaticRegisterNativesUGameRuleInterface()
	{
		UClass* Class = UGameRuleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLineTag", &IGameRuleInterface::execGetLineTag },
			{ "GetTeamName", &IGameRuleInterface::execGetTeamName },
			{ "GetTurretLevelTag", &IGameRuleInterface::execGetTurretLevelTag },
			{ "SetLineTag", &IGameRuleInterface::execSetLineTag },
			{ "SetMinionTeamName", &IGameRuleInterface::execSetMinionTeamName },
			{ "SetPlayerTeamName", &IGameRuleInterface::execSetPlayerTeamName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRuleInterface_eventGetLineTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/GameRuleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRuleInterface, nullptr, "GetLineTag", nullptr, nullptr, Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::PropPointers), sizeof(GameRuleInterface_eventGetLineTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(GameRuleInterface_eventGetLineTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameRuleInterface_GetLineTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRuleInterface_GetLineTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRuleInterface_eventGetTeamName_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/GameRuleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRuleInterface, nullptr, "GetTeamName", nullptr, nullptr, Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::PropPointers), sizeof(GameRuleInterface_eventGetTeamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::PropPointers) < 2048);
	static_assert(sizeof(GameRuleInterface_eventGetTeamName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameRuleInterface_GetTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRuleInterface_GetTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRuleInterface_eventGetTurretLevelTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/GameRuleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRuleInterface, nullptr, "GetTurretLevelTag", nullptr, nullptr, Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::PropPointers), sizeof(GameRuleInterface_eventGetTurretLevelTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(GameRuleInterface_eventGetTurretLevelTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTeamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::NewProp_NewTeamName = { "NewTeamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRuleInterface_eventSetLineTag_Parms, NewTeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::NewProp_NewTeamName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/GameRuleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRuleInterface, nullptr, "SetLineTag", nullptr, nullptr, Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::PropPointers), sizeof(GameRuleInterface_eventSetLineTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(GameRuleInterface_eventSetLineTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameRuleInterface_SetLineTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRuleInterface_SetLineTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTeamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::NewProp_NewTeamName = { "NewTeamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRuleInterface_eventSetMinionTeamName_Parms, NewTeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::NewProp_NewTeamName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/GameRuleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRuleInterface, nullptr, "SetMinionTeamName", nullptr, nullptr, Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::PropPointers), sizeof(GameRuleInterface_eventSetMinionTeamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::PropPointers) < 2048);
	static_assert(sizeof(GameRuleInterface_eventSetMinionTeamName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::NewProp_PS = { "PS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameRuleInterface_eventSetPlayerTeamName_Parms, PS), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::NewProp_PS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/GameRuleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRuleInterface, nullptr, "SetPlayerTeamName", nullptr, nullptr, Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::PropPointers), sizeof(GameRuleInterface_eventSetPlayerTeamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::PropPointers) < 2048);
	static_assert(sizeof(GameRuleInterface_eventSetPlayerTeamName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameRuleInterface);
	UClass* Z_Construct_UClass_UGameRuleInterface_NoRegister()
	{
		return UGameRuleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameRuleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameRuleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameRuleInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameRuleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameRuleInterface_GetLineTag, "GetLineTag" }, // 3097025543
		{ &Z_Construct_UFunction_UGameRuleInterface_GetTeamName, "GetTeamName" }, // 4145850864
		{ &Z_Construct_UFunction_UGameRuleInterface_GetTurretLevelTag, "GetTurretLevelTag" }, // 82094390
		{ &Z_Construct_UFunction_UGameRuleInterface_SetLineTag, "SetLineTag" }, // 40222025
		{ &Z_Construct_UFunction_UGameRuleInterface_SetMinionTeamName, "SetMinionTeamName" }, // 1741115868
		{ &Z_Construct_UFunction_UGameRuleInterface_SetPlayerTeamName, "SetPlayerTeamName" }, // 1359284528
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameRuleInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRuleInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/GameRuleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameRuleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameRuleInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameRuleInterface_Statics::ClassParams = {
		&UGameRuleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameRuleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameRuleInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameRuleInterface()
	{
		if (!Z_Registration_Info_UClass_UGameRuleInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameRuleInterface.OuterSingleton, Z_Construct_UClass_UGameRuleInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameRuleInterface.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UGameRuleInterface>()
	{
		return UGameRuleInterface::StaticClass();
	}
	UGameRuleInterface::UGameRuleInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameRuleInterface);
	UGameRuleInterface::~UGameRuleInterface() {}
	static FName NAME_UGameRuleInterface_GetLineTag = FName(TEXT("GetLineTag"));
	FGameplayTag IGameRuleInterface::Execute_GetLineTag(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameRuleInterface::StaticClass()));
		GameRuleInterface_eventGetLineTag_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameRuleInterface_GetLineTag);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IGameRuleInterface*)(O->GetNativeInterfaceAddress(UGameRuleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetLineTag_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameRuleInterface_GetTeamName = FName(TEXT("GetTeamName"));
	FGameplayTag IGameRuleInterface::Execute_GetTeamName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameRuleInterface::StaticClass()));
		GameRuleInterface_eventGetTeamName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameRuleInterface_GetTeamName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IGameRuleInterface*)(O->GetNativeInterfaceAddress(UGameRuleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTeamName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameRuleInterface_GetTurretLevelTag = FName(TEXT("GetTurretLevelTag"));
	FGameplayTag IGameRuleInterface::Execute_GetTurretLevelTag(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameRuleInterface::StaticClass()));
		GameRuleInterface_eventGetTurretLevelTag_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameRuleInterface_GetTurretLevelTag);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IGameRuleInterface*)(O->GetNativeInterfaceAddress(UGameRuleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTurretLevelTag_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameRuleInterface_SetLineTag = FName(TEXT("SetLineTag"));
	void IGameRuleInterface::Execute_SetLineTag(UObject* O, FGameplayTag NewTeamName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameRuleInterface::StaticClass()));
		GameRuleInterface_eventSetLineTag_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameRuleInterface_SetLineTag);
		if (Func)
		{
			Parms.NewTeamName=NewTeamName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameRuleInterface*)(O->GetNativeInterfaceAddress(UGameRuleInterface::StaticClass())))
		{
			I->SetLineTag_Implementation(NewTeamName);
		}
	}
	static FName NAME_UGameRuleInterface_SetMinionTeamName = FName(TEXT("SetMinionTeamName"));
	void IGameRuleInterface::Execute_SetMinionTeamName(UObject* O, FGameplayTag NewTeamName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameRuleInterface::StaticClass()));
		GameRuleInterface_eventSetMinionTeamName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameRuleInterface_SetMinionTeamName);
		if (Func)
		{
			Parms.NewTeamName=NewTeamName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameRuleInterface*)(O->GetNativeInterfaceAddress(UGameRuleInterface::StaticClass())))
		{
			I->SetMinionTeamName_Implementation(NewTeamName);
		}
	}
	static FName NAME_UGameRuleInterface_SetPlayerTeamName = FName(TEXT("SetPlayerTeamName"));
	void IGameRuleInterface::Execute_SetPlayerTeamName(UObject* O, APlayerState* PS)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameRuleInterface::StaticClass()));
		GameRuleInterface_eventSetPlayerTeamName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameRuleInterface_SetPlayerTeamName);
		if (Func)
		{
			Parms.PS=PS;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameRuleInterface*)(O->GetNativeInterfaceAddress(UGameRuleInterface::StaticClass())))
		{
			I->SetPlayerTeamName_Implementation(PS);
		}
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameRuleInterface, UGameRuleInterface::StaticClass, TEXT("UGameRuleInterface"), &Z_Registration_Info_UClass_UGameRuleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameRuleInterface), 3371675016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_4237699499(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_GameRuleInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
