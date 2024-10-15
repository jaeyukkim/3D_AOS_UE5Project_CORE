// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Player/LobbyCharacter.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ALobbyCharacter();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ALobbyCharacter_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidget_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventSelectedCharacterChangedDelegate_Parms
		{
			const UTexture* CharacterImage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::NewProp_CharacterImage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::NewProp_CharacterImage = { "CharacterImage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventSelectedCharacterChangedDelegate_Parms, CharacterImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::NewProp_CharacterImage_MetaData), Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::NewProp_CharacterImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::NewProp_CharacterImage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "SelectedCharacterChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventSelectedCharacterChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventSelectedCharacterChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSelectedCharacterChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SelectedCharacterChangedDelegate, const UTexture* CharacterImage)
{
	struct _Script_SeniorProject_eventSelectedCharacterChangedDelegate_Parms
	{
		const UTexture* CharacterImage;
	};
	_Script_SeniorProject_eventSelectedCharacterChangedDelegate_Parms Parms;
	Parms.CharacterImage=CharacterImage;
	SelectedCharacterChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventPlayerChangedDelegate_Parms
		{
			FPlayerInfo Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventPlayerChangedDelegate_Parms, Info), Z_Construct_UScriptStruct_FPlayerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 3744229311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "PlayerChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventPlayerChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventPlayerChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerChangedDelegate, FPlayerInfo const& Info)
{
	struct _Script_SeniorProject_eventPlayerChangedDelegate_Parms
	{
		FPlayerInfo Info;
	};
	_Script_SeniorProject_eventPlayerChangedDelegate_Parms Parms;
	Parms.Info=Info;
	PlayerChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "PlayerReadyCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerReadyCompleted_DelegateWrapper(const FMulticastScriptDelegate& PlayerReadyCompleted)
{
	PlayerReadyCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ALobbyCharacter::execGetPlayerTeamName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetPlayerTeamName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyCharacter::execGetSelectedPlayerClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<TSubclassOf<AMyCharacter> ,FGameplayTag>*)Z_Param__Result=P_THIS->GetSelectedPlayerClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyCharacter::execReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ready_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyCharacter::execSetPlayerCharacterClass)
	{
		P_GET_OBJECT(UClass,Z_Param_SelectedCharacter);
		P_GET_OBJECT(UTexture,Z_Param_CharacterImg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerCharacterClass_Implementation(Z_Param_SelectedCharacter,Z_Param_CharacterImg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyCharacter::execBroadcastCharacterSelectWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastCharacterSelectWidget_Implementation();
		P_NATIVE_END;
	}
	struct LobbyCharacter_eventSetPlayerCharacterClass_Parms
	{
		TSubclassOf<AMyCharacter>  SelectedCharacter;
		UTexture* CharacterImg;
	};
	static FName NAME_ALobbyCharacter_BroadcastCharacterSelectWidget = FName(TEXT("BroadcastCharacterSelectWidget"));
	void ALobbyCharacter::BroadcastCharacterSelectWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyCharacter_BroadcastCharacterSelectWidget),NULL);
	}
	static FName NAME_ALobbyCharacter_Ready = FName(TEXT("Ready"));
	void ALobbyCharacter::Ready()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyCharacter_Ready),NULL);
	}
	static FName NAME_ALobbyCharacter_SetPlayerCharacterClass = FName(TEXT("SetPlayerCharacterClass"));
	void ALobbyCharacter::SetPlayerCharacterClass(TSubclassOf<AMyCharacter>  SelectedCharacter, UTexture* CharacterImg)
	{
		LobbyCharacter_eventSetPlayerCharacterClass_Parms Parms;
		Parms.SelectedCharacter=SelectedCharacter;
		Parms.CharacterImg=CharacterImg;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyCharacter_SetPlayerCharacterClass),&Parms);
	}
	void ALobbyCharacter::StaticRegisterNativesALobbyCharacter()
	{
		UClass* Class = ALobbyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastCharacterSelectWidget", &ALobbyCharacter::execBroadcastCharacterSelectWidget },
			{ "GetPlayerTeamName", &ALobbyCharacter::execGetPlayerTeamName },
			{ "GetSelectedPlayerClass", &ALobbyCharacter::execGetSelectedPlayerClass },
			{ "Ready", &ALobbyCharacter::execReady },
			{ "SetPlayerCharacterClass", &ALobbyCharacter::execSetPlayerCharacterClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyCharacter, nullptr, "BroadcastCharacterSelectWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics
	{
		struct LobbyCharacter_eventGetPlayerTeamName_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyCharacter_eventGetPlayerTeamName_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyCharacter, nullptr, "GetPlayerTeamName", nullptr, nullptr, Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::LobbyCharacter_eventGetPlayerTeamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::LobbyCharacter_eventGetPlayerTeamName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics
	{
		struct LobbyCharacter_eventGetSelectedPlayerClass_Parms
		{
			TMap<TSubclassOf<AMyCharacter> ,FGameplayTag> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyCharacter_eventGetSelectedPlayerClass_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyCharacter, nullptr, "GetSelectedPlayerClass", nullptr, nullptr, Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::LobbyCharacter_eventGetSelectedPlayerClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::LobbyCharacter_eventGetSelectedPlayerClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyCharacter_Ready_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyCharacter_Ready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyCharacter_Ready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyCharacter, nullptr, "Ready", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_Ready_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyCharacter_Ready_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALobbyCharacter_Ready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyCharacter_Ready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedCharacter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterImg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyCharacter_eventSetPlayerCharacterClass_Parms, SelectedCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::NewProp_CharacterImg = { "CharacterImg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyCharacter_eventSetPlayerCharacterClass_Parms, CharacterImg), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::NewProp_SelectedCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::NewProp_CharacterImg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyCharacter, nullptr, "SetPlayerCharacterClass", nullptr, nullptr, Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::PropPointers), sizeof(LobbyCharacter_eventSetPlayerCharacterClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(LobbyCharacter_eventSetPlayerCharacterClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyCharacter);
	UClass* Z_Construct_UClass_ALobbyCharacter_NoRegister()
	{
		return ALobbyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CharacterChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerCharacterChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayerEntranced_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewPlayerEntranced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReadyCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerReadyCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllPlayerReadyCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AllPlayerReadyCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSelectWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterSelectWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInformation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyCharacter_BroadcastCharacterSelectWidget, "BroadcastCharacterSelectWidget" }, // 3256723108
		{ &Z_Construct_UFunction_ALobbyCharacter_GetPlayerTeamName, "GetPlayerTeamName" }, // 3893587083
		{ &Z_Construct_UFunction_ALobbyCharacter_GetSelectedPlayerClass, "GetSelectedPlayerClass" }, // 4278647229
		{ &Z_Construct_UFunction_ALobbyCharacter_Ready, "Ready" }, // 2177823958
		{ &Z_Construct_UFunction_ALobbyCharacter_SetPlayerCharacterClass, "SetPlayerCharacterClass" }, // 252628973
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player/LobbyCharacter.h" },
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterChangedDelegate = { "CharacterChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, CharacterChangedDelegate), Z_Construct_UDelegateFunction_SeniorProject_SelectedCharacterChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterChangedDelegate_MetaData), Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterChangedDelegate_MetaData) }; // 598811476
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerCharacterChanged_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerCharacterChanged = { "PlayerCharacterChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, PlayerCharacterChanged), Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerCharacterChanged_MetaData), Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerCharacterChanged_MetaData) }; // 2310616205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_NewPlayerEntranced_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_NewPlayerEntranced = { "NewPlayerEntranced", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, NewPlayerEntranced), Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_NewPlayerEntranced_MetaData), Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_NewPlayerEntranced_MetaData) }; // 2310616205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerReadyCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerReadyCompleted = { "PlayerReadyCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, PlayerReadyCompleted), Z_Construct_UDelegateFunction_SeniorProject_PlayerChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerReadyCompleted_MetaData), Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerReadyCompleted_MetaData) }; // 2310616205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_AllPlayerReadyCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_AllPlayerReadyCompleted = { "AllPlayerReadyCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, AllPlayerReadyCompleted), Z_Construct_UDelegateFunction_SeniorProject_PlayerReadyCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_AllPlayerReadyCompleted_MetaData), Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_AllPlayerReadyCompleted_MetaData) }; // 1596630618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterSelectWidget_MetaData[] = {
		{ "Category", "LobbyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterSelectWidget = { "CharacterSelectWidget", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, CharacterSelectWidget), Z_Construct_UClass_UOverlayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterSelectWidget_MetaData), Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterSelectWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerInformation_MetaData[] = {
		{ "Category", "LobbyCharacter" },
		{ "ModuleRelativePath", "Character/Player/LobbyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerInformation = { "PlayerInformation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyCharacter, PlayerInformation), Z_Construct_UScriptStruct_FPlayerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerInformation_MetaData), Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerInformation_MetaData) }; // 3744229311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerCharacterChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_NewPlayerEntranced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerReadyCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_AllPlayerReadyCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_CharacterSelectWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyCharacter_Statics::NewProp_PlayerInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyCharacter_Statics::ClassParams = {
		&ALobbyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALobbyCharacter()
	{
		if (!Z_Registration_Info_UClass_ALobbyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyCharacter.OuterSingleton, Z_Construct_UClass_ALobbyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALobbyCharacter.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ALobbyCharacter>()
	{
		return ALobbyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyCharacter);
	ALobbyCharacter::~ALobbyCharacter() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyCharacter, ALobbyCharacter::StaticClass, TEXT("ALobbyCharacter"), &Z_Registration_Info_UClass_ALobbyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyCharacter), 3698335433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_192236625(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_LobbyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
