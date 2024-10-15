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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACoreGameState();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACoreGameState_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_APlayerStateBase_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerInfo;
class UScriptStruct* FPlayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInfo, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("PlayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerInfo.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FPlayerInfo>()
{
	return FPlayerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTeamName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTeamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterImg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterImg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PC_MetaData[] = {
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PC_MetaData), Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PS_MetaData[] = {
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PS = { "PS", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, PS), Z_Construct_UClass_APlayerStateBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PS_MetaData), Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerName_MetaData), Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerTeamName_MetaData[] = {
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerTeamName = { "PlayerTeamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, PlayerTeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerTeamName_MetaData), Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerTeamName_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_CharacterImg_MetaData[] = {
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_CharacterImg = { "CharacterImg", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, CharacterImg), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_CharacterImg_MetaData), Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_CharacterImg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_SelectedCharacter_MetaData[] = {
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, SelectedCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_SelectedCharacter_MetaData), Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_SelectedCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerTeamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_CharacterImg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_SelectedCharacter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"PlayerInfo",
		Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers),
		sizeof(FPlayerInfo),
		alignof(FPlayerInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerInfo.InnerSingleton;
	}
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
	DEFINE_FUNCTION(ACoreGameState::execGetSelectedPlayerClass)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<TSubclassOf<AMyCharacter> ,FGameplayTag>*)Z_Param__Result=P_THIS->GetSelectedPlayerClass(Z_Param_TeamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execPlayerReady)
	{
		P_GET_OBJECT(APlayerState,Z_Param_ReadyUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerReady_Implementation(Z_Param_ReadyUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execMulticastPlayerReady)
	{
		P_GET_OBJECT(APlayerState,Z_Param_InPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastPlayerReady_Implementation(Z_Param_InPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execPlayerCharacterChanged)
	{
		P_GET_OBJECT(APlayerState,Z_Param_InPS);
		P_GET_OBJECT(UClass,Z_Param_SelectedCharacter);
		P_GET_OBJECT(UTexture,Z_Param_CharacterImg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerCharacterChanged_Implementation(Z_Param_InPS,Z_Param_SelectedCharacter,Z_Param_CharacterImg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoreGameState::execMulticastNewPlayerEntranced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastNewPlayerEntranced_Implementation();
		P_NATIVE_END;
	}
	struct CoreGameState_eventMulticastPlayerReady_Parms
	{
		APlayerState* InPS;
	};
	struct CoreGameState_eventPlayerCharacterChanged_Parms
	{
		APlayerState* InPS;
		TSubclassOf<AMyCharacter>  SelectedCharacter;
		UTexture* CharacterImg;
	};
	struct CoreGameState_eventPlayerReady_Parms
	{
		APlayerState* ReadyUser;
	};
	static FName NAME_ACoreGameState_MulticastNewPlayerEntranced = FName(TEXT("MulticastNewPlayerEntranced"));
	void ACoreGameState::MulticastNewPlayerEntranced()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACoreGameState_MulticastNewPlayerEntranced),NULL);
	}
	static FName NAME_ACoreGameState_MulticastPlayerReady = FName(TEXT("MulticastPlayerReady"));
	void ACoreGameState::MulticastPlayerReady(APlayerState* InPS)
	{
		CoreGameState_eventMulticastPlayerReady_Parms Parms;
		Parms.InPS=InPS;
		ProcessEvent(FindFunctionChecked(NAME_ACoreGameState_MulticastPlayerReady),&Parms);
	}
	static FName NAME_ACoreGameState_PlayerCharacterChanged = FName(TEXT("PlayerCharacterChanged"));
	void ACoreGameState::PlayerCharacterChanged(APlayerState* InPS, TSubclassOf<AMyCharacter>  SelectedCharacter, UTexture* CharacterImg)
	{
		CoreGameState_eventPlayerCharacterChanged_Parms Parms;
		Parms.InPS=InPS;
		Parms.SelectedCharacter=SelectedCharacter;
		Parms.CharacterImg=CharacterImg;
		ProcessEvent(FindFunctionChecked(NAME_ACoreGameState_PlayerCharacterChanged),&Parms);
	}
	static FName NAME_ACoreGameState_PlayerReady = FName(TEXT("PlayerReady"));
	void ACoreGameState::PlayerReady(APlayerState* ReadyUser)
	{
		CoreGameState_eventPlayerReady_Parms Parms;
		Parms.ReadyUser=ReadyUser;
		ProcessEvent(FindFunctionChecked(NAME_ACoreGameState_PlayerReady),&Parms);
	}
	void ACoreGameState::StaticRegisterNativesACoreGameState()
	{
		UClass* Class = ACoreGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedPlayerClass", &ACoreGameState::execGetSelectedPlayerClass },
			{ "GetValidTargetTurret", &ACoreGameState::execGetValidTargetTurret },
			{ "IsInhibitorDestroyed", &ACoreGameState::execIsInhibitorDestroyed },
			{ "MulticastNewPlayerEntranced", &ACoreGameState::execMulticastNewPlayerEntranced },
			{ "MulticastPlayerReady", &ACoreGameState::execMulticastPlayerReady },
			{ "PlayerCharacterChanged", &ACoreGameState::execPlayerCharacterChanged },
			{ "PlayerReady", &ACoreGameState::execPlayerReady },
			{ "UpdateTurretStates", &ACoreGameState::execUpdateTurretStates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics
	{
		struct CoreGameState_eventGetSelectedPlayerClass_Parms
		{
			FGameplayTag TeamName;
			TMap<TSubclassOf<AMyCharacter> ,FGameplayTag> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventGetSelectedPlayerClass_Parms, TeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventGetSelectedPlayerClass_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_TeamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "GetSelectedPlayerClass", nullptr, nullptr, Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::CoreGameState_eventGetSelectedPlayerClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::CoreGameState_eventGetSelectedPlayerClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "MulticastNewPlayerEntranced", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::NewProp_InPS = { "InPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventMulticastPlayerReady_Parms, InPS), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::NewProp_InPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "MulticastPlayerReady", nullptr, nullptr, Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::PropPointers), sizeof(CoreGameState_eventMulticastPlayerReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(CoreGameState_eventMulticastPlayerReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPS;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedCharacter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterImg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::NewProp_InPS = { "InPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventPlayerCharacterChanged_Parms, InPS), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventPlayerCharacterChanged_Parms, SelectedCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::NewProp_CharacterImg = { "CharacterImg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventPlayerCharacterChanged_Parms, CharacterImg), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::NewProp_InPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::NewProp_SelectedCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::NewProp_CharacterImg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "PlayerCharacterChanged", nullptr, nullptr, Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::PropPointers), sizeof(CoreGameState_eventPlayerCharacterChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(CoreGameState_eventPlayerCharacterChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::NewProp_ReadyUser = { "ReadyUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreGameState_eventPlayerReady_Parms, ReadyUser), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::NewProp_ReadyUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoreGameState, nullptr, "PlayerReady", nullptr, nullptr, Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::PropPointers), sizeof(CoreGameState_eventPlayerReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(CoreGameState_eventPlayerReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACoreGameState_PlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoreGameState_PlayerReady_Statics::FuncParams);
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RedTeam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RedTeam;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueTeam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueTeam;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerInfos;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReadyUsers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadyUsers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadyUsers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamTurretStates_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_BlueTeamTurretStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamTurretStates_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_RedTeamTurretStates;
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
		{ &Z_Construct_UFunction_ACoreGameState_GetSelectedPlayerClass, "GetSelectedPlayerClass" }, // 3987509765
		{ &Z_Construct_UFunction_ACoreGameState_GetValidTargetTurret, "GetValidTargetTurret" }, // 852579338
		{ &Z_Construct_UFunction_ACoreGameState_IsInhibitorDestroyed, "IsInhibitorDestroyed" }, // 2611574157
		{ &Z_Construct_UFunction_ACoreGameState_MulticastNewPlayerEntranced, "MulticastNewPlayerEntranced" }, // 1907533640
		{ &Z_Construct_UFunction_ACoreGameState_MulticastPlayerReady, "MulticastPlayerReady" }, // 1095789506
		{ &Z_Construct_UFunction_ACoreGameState_PlayerCharacterChanged, "PlayerCharacterChanged" }, // 3088204048
		{ &Z_Construct_UFunction_ACoreGameState_PlayerReady, "PlayerReady" }, // 1260458010
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
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeam_Inner = { "RedTeam", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerStateBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeam_MetaData[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeam = { "RedTeam", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, RedTeam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeam_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeam_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeam_Inner = { "BlueTeam", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerStateBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeam_MetaData[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeam = { "BlueTeam", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, BlueTeam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeam_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeam_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_PlayerInfos_Inner = { "PlayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerInfo, METADATA_PARAMS(0, nullptr) }; // 3744229311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_PlayerInfos_MetaData[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_PlayerInfos = { "PlayerInfos", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, PlayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_PlayerInfos_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_PlayerInfos_MetaData) }; // 3744229311
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_ReadyUsers_Inner = { "ReadyUsers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_ReadyUsers_MetaData[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_ReadyUsers = { "ReadyUsers", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, ReadyUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_ReadyUsers_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_ReadyUsers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamTurretStates_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * \xed\x83\x80\xec\x9b\x8c \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xeb\xb9\x84\xed\x8a\xb8\xeb\xa7\x88\xec\x8a\xa4\xed\x81\xac\n\x09 * \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\xeb\x8a\x94 \xeb\xaa\xa8\xeb\x91\x90 \xed\x8c\x8c\xea\xb4\xb4\xeb\x90\x98\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 \xec\x83\x81\xed\x83\x9c\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xed\x83\x80\xec\x9b\x8c \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xeb\xb9\x84\xed\x8a\xb8\xeb\xa7\x88\xec\x8a\xa4\xed\x81\xac\n* \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\xeb\x8a\x94 \xeb\xaa\xa8\xeb\x91\x90 \xed\x8c\x8c\xea\xb4\xb4\xeb\x90\x98\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 \xec\x83\x81\xed\x83\x9c" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamTurretStates = { "BlueTeamTurretStates", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, BlueTeamTurretStates), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamTurretStates_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamTurretStates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamTurretStates_MetaData[] = {
		{ "ModuleRelativePath", "GameSetting/CoreGameState.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamTurretStates = { "RedTeamTurretStates", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreGameState, RedTeamTurretStates), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamTurretStates_MetaData), Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamTurretStates_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoreGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_PlayerInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_PlayerInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_ReadyUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_ReadyUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_BlueTeamTurretStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreGameState_Statics::NewProp_RedTeamTurretStates,
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
		static const FName Name_RedTeam(TEXT("RedTeam"));
		static const FName Name_BlueTeam(TEXT("BlueTeam"));
		static const FName Name_PlayerInfos(TEXT("PlayerInfos"));
		static const FName Name_ReadyUsers(TEXT("ReadyUsers"));
		static const FName Name_BlueTeamTurretStates(TEXT("BlueTeamTurretStates"));
		static const FName Name_RedTeamTurretStates(TEXT("RedTeamTurretStates"));

		const bool bIsValid = true
			&& Name_RedTeam == ClassReps[(int32)ENetFields_Private::RedTeam].Property->GetFName()
			&& Name_BlueTeam == ClassReps[(int32)ENetFields_Private::BlueTeam].Property->GetFName()
			&& Name_PlayerInfos == ClassReps[(int32)ENetFields_Private::PlayerInfos].Property->GetFName()
			&& Name_ReadyUsers == ClassReps[(int32)ENetFields_Private::ReadyUsers].Property->GetFName()
			&& Name_BlueTeamTurretStates == ClassReps[(int32)ENetFields_Private::BlueTeamTurretStates].Property->GetFName()
			&& Name_RedTeamTurretStates == ClassReps[(int32)ENetFields_Private::RedTeamTurretStates].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACoreGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreGameState);
	ACoreGameState::~ACoreGameState() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ScriptStructInfo[] = {
		{ FPlayerInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewStructOps, TEXT("PlayerInfo"), &Z_Registration_Info_UScriptStruct_PlayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerInfo), 3744229311U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoreGameState, ACoreGameState::StaticClass, TEXT("ACoreGameState"), &Z_Registration_Info_UClass_ACoreGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreGameState), 572223024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_3383312377(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
