// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Enemy/Monster/Melee.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMelee() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMelee();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMelee_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AMelee::StaticRegisterNativesAMelee()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMelee);
	UClass* Z_Construct_UClass_AMelee_NoRegister()
	{
		return AMelee::StaticClass();
	}
	struct Z_Construct_UClass_AMelee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMelee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMinions,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMelee_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMelee_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/Monster/Melee.h" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Melee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMelee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMelee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMelee_Statics::ClassParams = {
		&AMelee::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMelee_Statics::Class_MetaDataParams), Z_Construct_UClass_AMelee_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMelee()
	{
		if (!Z_Registration_Info_UClass_AMelee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMelee.OuterSingleton, Z_Construct_UClass_AMelee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMelee.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMelee>()
	{
		return AMelee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMelee);
	AMelee::~AMelee() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Melee_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Melee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMelee, AMelee::StaticClass, TEXT("AMelee"), &Z_Registration_Info_UClass_AMelee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMelee), 1158804023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Melee_h_1075232349(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Melee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Melee_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
