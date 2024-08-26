// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Enemy/Monster/Kwang.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKwang() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwang();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwang_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AKwang::StaticRegisterNativesAKwang()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKwang);
	UClass* Z_Construct_UClass_AKwang_NoRegister()
	{
		return AKwang::StaticClass();
	}
	struct Z_Construct_UClass_AKwang_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKwang_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMinions,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKwang_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwang_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/Monster/Kwang.h" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Kwang.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKwang_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKwang>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKwang_Statics::ClassParams = {
		&AKwang::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwang_Statics::Class_MetaDataParams), Z_Construct_UClass_AKwang_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AKwang()
	{
		if (!Z_Registration_Info_UClass_AKwang.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKwang.OuterSingleton, Z_Construct_UClass_AKwang_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKwang.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AKwang>()
	{
		return AKwang::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKwang);
	AKwang::~AKwang() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Kwang_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Kwang_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKwang, AKwang::StaticClass, TEXT("AKwang"), &Z_Registration_Info_UClass_AKwang, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKwang), 2992398925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Kwang_h_2833430680(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Kwang_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Kwang_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
