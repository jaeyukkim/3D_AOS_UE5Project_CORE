// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Player/Character/KwangPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKwangPlayer() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangPlayer();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangPlayer_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AKwangPlayer::StaticRegisterNativesAKwangPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKwangPlayer);
	UClass* Z_Construct_UClass_AKwangPlayer_NoRegister()
	{
		return AKwangPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AKwangPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKwangPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player/Character/KwangPlayer.h" },
		{ "ModuleRelativePath", "Character/Player/Character/KwangPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKwangPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKwangPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKwangPlayer_Statics::ClassParams = {
		&AKwangPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AKwangPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AKwangPlayer()
	{
		if (!Z_Registration_Info_UClass_AKwangPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKwangPlayer.OuterSingleton, Z_Construct_UClass_AKwangPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKwangPlayer.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AKwangPlayer>()
	{
		return AKwangPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKwangPlayer);
	AKwangPlayer::~AKwangPlayer() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_KwangPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_KwangPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKwangPlayer, AKwangPlayer::StaticClass, TEXT("AKwangPlayer"), &Z_Registration_Info_UClass_AKwangPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKwangPlayer), 4112121791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_KwangPlayer_h_232702587(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_KwangPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_KwangPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
