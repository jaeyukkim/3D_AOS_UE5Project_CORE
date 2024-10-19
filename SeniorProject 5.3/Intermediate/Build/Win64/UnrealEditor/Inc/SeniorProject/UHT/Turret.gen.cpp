// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ATurret();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ATurret_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventTurretDestroyedDelegate_Parms
		{
			FGameplayTag LineTag;
			FGameplayTag TurretLevelTag;
			FGameplayTag TeamName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurretLevelTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventTurretDestroyedDelegate_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::NewProp_TurretLevelTag = { "TurretLevelTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventTurretDestroyedDelegate_Parms, TurretLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventTurretDestroyedDelegate_Parms, TeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::NewProp_TurretLevelTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::NewProp_TeamName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "TurretDestroyedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventTurretDestroyedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventTurretDestroyedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTurretDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TurretDestroyedDelegate, FGameplayTag& LineTag, FGameplayTag& TurretLevelTag, FGameplayTag& TeamName)
{
	struct _Script_SeniorProject_eventTurretDestroyedDelegate_Parms
	{
		FGameplayTag LineTag;
		FGameplayTag TurretLevelTag;
		FGameplayTag TeamName;
	};
	_Script_SeniorProject_eventTurretDestroyedDelegate_Parms Parms;
	Parms.LineTag=LineTag;
	Parms.TurretLevelTag=TurretLevelTag;
	Parms.TeamName=TeamName;
	TurretDestroyedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
	LineTag=Parms.LineTag;
	TurretLevelTag=Parms.TurretLevelTag;
	TeamName=Parms.TeamName;
}
	DEFINE_FUNCTION(ATurret::execMulticastPlayTowerDestroyedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastPlayTowerDestroyedSound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurret::execServerUpdateTurretState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUpdateTurretState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurret::execServerRegisterWithGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRegisterWithGameMode_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATurret_MulticastPlayTowerDestroyedSound = FName(TEXT("MulticastPlayTowerDestroyedSound"));
	void ATurret::MulticastPlayTowerDestroyedSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATurret_MulticastPlayTowerDestroyedSound),NULL);
	}
	static FName NAME_ATurret_ServerRegisterWithGameMode = FName(TEXT("ServerRegisterWithGameMode"));
	void ATurret::ServerRegisterWithGameMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATurret_ServerRegisterWithGameMode),NULL);
	}
	static FName NAME_ATurret_ServerUpdateTurretState = FName(TEXT("ServerUpdateTurretState"));
	void ATurret::ServerUpdateTurretState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATurret_ServerUpdateTurretState),NULL);
	}
	void ATurret::StaticRegisterNativesATurret()
	{
		UClass* Class = ATurret::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastPlayTowerDestroyedSound", &ATurret::execMulticastPlayTowerDestroyedSound },
			{ "ServerRegisterWithGameMode", &ATurret::execServerRegisterWithGameMode },
			{ "ServerUpdateTurretState", &ATurret::execServerUpdateTurretState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "MulticastPlayTowerDestroyedSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84 \xeb\xaa\xa8\xeb\x93\x9c\xec\x97\x90 \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x84 \xeb\x93\xb1\xeb\xa1\x9d\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xeb\xaa\xa8\xeb\x93\x9c\xec\x97\x90 \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x84 \xeb\x93\xb1\xeb\xa1\x9d\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "ServerRegisterWithGameMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurret_ServerUpdateTurretState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurret_ServerUpdateTurretState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_ServerUpdateTurretState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "ServerUpdateTurretState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_ServerUpdateTurretState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_ServerUpdateTurretState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATurret_ServerUpdateTurretState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_ServerUpdateTurretState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurret);
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTurretDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurretDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretLevelTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurretLevelTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMinions,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATurret_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurret_MulticastPlayTowerDestroyedSound, "MulticastPlayTowerDestroyedSound" }, // 1049415238
		{ &Z_Construct_UFunction_ATurret_ServerRegisterWithGameMode, "ServerRegisterWithGameMode" }, // 784166853
		{ &Z_Construct_UFunction_ATurret_ServerUpdateTurretState, "ServerUpdateTurretState" }, // 3751664559
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Turret/Turret.h" },
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_OnTurretDestroyed_MetaData[] = {
		{ "Category", "Turret" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* end GameRule Interface */" },
#endif
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end GameRule Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_OnTurretDestroyed = { "OnTurretDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, OnTurretDestroyed), Z_Construct_UDelegateFunction_SeniorProject_TurretDestroyedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_OnTurretDestroyed_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_OnTurretDestroyed_MetaData) }; // 4188468254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag_MetaData[] = {
		{ "Category", "GameRule" },
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag = { "TurretLevelTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, TurretLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_OnTurretDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
		&ATurret::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATurret()
	{
		if (!Z_Registration_Info_UClass_ATurret.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurret.OuterSingleton, Z_Construct_UClass_ATurret_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATurret.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ATurret>()
	{
		return ATurret::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
	ATurret::~ATurret() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 2802615516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_2550376220(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
