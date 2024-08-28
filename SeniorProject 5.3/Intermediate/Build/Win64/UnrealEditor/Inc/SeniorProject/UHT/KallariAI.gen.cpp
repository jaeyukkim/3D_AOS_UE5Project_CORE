// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Enemy/Monster/KallariAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKallariAI() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKallariAI();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKallariAI_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AKallariAI::StaticRegisterNativesAKallariAI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKallariAI);
	UClass* Z_Construct_UClass_AKallariAI_NoRegister()
	{
		return AKallariAI::StaticClass();
	}
	struct Z_Construct_UClass_AKallariAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKallariAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMinions,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKallariAI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKallariAI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/Monster/KallariAI.h" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/KallariAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKallariAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKallariAI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKallariAI_Statics::ClassParams = {
		&AKallariAI::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKallariAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AKallariAI_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AKallariAI()
	{
		if (!Z_Registration_Info_UClass_AKallariAI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKallariAI.OuterSingleton, Z_Construct_UClass_AKallariAI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKallariAI.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AKallariAI>()
	{
		return AKallariAI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKallariAI);
	AKallariAI::~AKallariAI() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_KallariAI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_KallariAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKallariAI, AKallariAI::StaticClass, TEXT("AKallariAI"), &Z_Registration_Info_UClass_AKallariAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKallariAI), 379179619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_KallariAI_h_1821774710(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_KallariAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_KallariAI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
