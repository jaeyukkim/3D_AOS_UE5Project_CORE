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
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventTowerDestroyedDelegate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventTowerDestroyedDelegate_Parms, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::NewProp_TurretLevelTag = { "TurretLevelTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventTowerDestroyedDelegate_Parms, TurretLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventTowerDestroyedDelegate_Parms, TeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::NewProp_TurretLevelTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::NewProp_TeamName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "TowerDestroyedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventTowerDestroyedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventTowerDestroyedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTowerDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TowerDestroyedDelegate, FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamName)
{
	struct _Script_SeniorProject_eventTowerDestroyedDelegate_Parms
	{
		FGameplayTag LineTag;
		FGameplayTag TurretLevelTag;
		FGameplayTag TeamName;
	};
	_Script_SeniorProject_eventTowerDestroyedDelegate_Parms Parms;
	Parms.LineTag=LineTag;
	Parms.TurretLevelTag=TurretLevelTag;
	Parms.TeamName=TeamName;
	TowerDestroyedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void ATurret::StaticRegisterNativesATurret()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurret);
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTowerDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTowerDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_OnTowerDestroyed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_OnTowerDestroyed = { "OnTowerDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, OnTowerDestroyed), Z_Construct_UDelegateFunction_SeniorProject_TowerDestroyedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_OnTowerDestroyed_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_OnTowerDestroyed_MetaData) }; // 551736427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_LineTag_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_LineTag_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_LineTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag_MetaData[] = {
		{ "Category", "Tower" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x98\x88: \xed\x83\x91, \xeb\xaf\xb8\xeb\x93\x9c, \xeb\xb0\x94\xed\x85\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/Turret/Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\x88: \xed\x83\x91, \xeb\xaf\xb8\xeb\x93\x9c, \xeb\xb0\x94\xed\x85\x80" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag = { "TurretLevelTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, TurretLevelTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag_MetaData), Z_Construct_UClass_ATurret_Statics::NewProp_TurretLevelTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_OnTowerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_LineTag,
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
		nullptr,
		Z_Construct_UClass_ATurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	ATurret::ATurret() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
	ATurret::~ATurret() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 343747170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_1936085060(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Turret_Turret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
