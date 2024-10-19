// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/GameSetting/MainMenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMainMenuGameMode();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AMainMenuGameMode::StaticRegisterNativesAMainMenuGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuGameMode);
	UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister()
	{
		return AMainMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameSetting/MainMenuGameMode.h" },
		{ "ModuleRelativePath", "GameSetting/MainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams = {
		&AMainMenuGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMainMenuGameMode()
	{
		if (!Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton, Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMainMenuGameMode>()
	{
		return AMainMenuGameMode::StaticClass();
	}
	AMainMenuGameMode::AMainMenuGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameMode);
	AMainMenuGameMode::~AMainMenuGameMode() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MainMenuGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MainMenuGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuGameMode, AMainMenuGameMode::StaticClass, TEXT("AMainMenuGameMode"), &Z_Registration_Info_UClass_AMainMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuGameMode), 152761582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MainMenuGameMode_h_2468650390(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MainMenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_MainMenuGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
