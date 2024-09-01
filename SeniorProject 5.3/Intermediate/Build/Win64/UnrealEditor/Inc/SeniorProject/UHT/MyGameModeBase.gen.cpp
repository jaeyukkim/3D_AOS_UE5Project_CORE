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
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(AMyGameModeBase::execOnTowerDestroyed)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LineTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TowerLevelTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_TeamTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTowerDestroyed(Z_Param_LineTag,Z_Param_TowerLevelTag,Z_Param_TeamTag);
		P_NATIVE_END;
	}
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
		UClass* Class = AMyGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTowerDestroyed", &AMyGameModeBase::execOnTowerDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics
	{
		struct MyGameModeBase_eventOnTowerDestroyed_Parms
		{
			FGameplayTag LineTag;
			FGameplayTag TowerLevelTag;
			FGameplayTag TeamTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerLevelTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TowerLevelTag;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_LineTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventOnTowerDestroyed_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_LineTag_MetaData), Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_LineTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TowerLevelTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TowerLevelTag = { "TowerLevelTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventOnTowerDestroyed_Parms, TowerLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TowerLevelTag_MetaData), Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TowerLevelTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TeamTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TeamTag = { "TeamTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameModeBase_eventOnTowerDestroyed_Parms, TeamTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TeamTag_MetaData), Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TeamTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TowerLevelTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::NewProp_TeamTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "OnTowerDestroyed", nullptr, nullptr, Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::MyGameModeBase_eventOnTowerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::MyGameModeBase_eventOnTowerDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_AMyGameModeBase_OnTowerDestroyed, "OnTowerDestroyed" }, // 2089963084
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_CharacterClassInfo,
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
		{ Z_Construct_UClass_AMyGameModeBase, AMyGameModeBase::StaticClass, TEXT("AMyGameModeBase"), &Z_Registration_Info_UClass_AMyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBase), 1470397354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_2463679142(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
