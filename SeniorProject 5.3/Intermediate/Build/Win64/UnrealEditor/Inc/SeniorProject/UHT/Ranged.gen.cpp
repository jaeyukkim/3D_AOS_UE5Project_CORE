// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Enemy/Monster/Ranged.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRanged() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ARanged();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ARanged_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void ARanged::StaticRegisterNativesARanged()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARanged);
	UClass* Z_Construct_UClass_ARanged_NoRegister()
	{
		return ARanged::StaticClass();
	}
	struct Z_Construct_UClass_ARanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMinions,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARanged_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARanged_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/Monster/Ranged.h" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Ranged.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARanged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARanged_Statics::ClassParams = {
		&ARanged::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARanged_Statics::Class_MetaDataParams), Z_Construct_UClass_ARanged_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARanged()
	{
		if (!Z_Registration_Info_UClass_ARanged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARanged.OuterSingleton, Z_Construct_UClass_ARanged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARanged.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ARanged>()
	{
		return ARanged::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARanged);
	ARanged::~ARanged() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Ranged_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Ranged_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARanged, ARanged::StaticClass, TEXT("ARanged"), &Z_Registration_Info_UClass_ARanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARanged), 4069738234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Ranged_h_1386532364(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Ranged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Ranged_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
