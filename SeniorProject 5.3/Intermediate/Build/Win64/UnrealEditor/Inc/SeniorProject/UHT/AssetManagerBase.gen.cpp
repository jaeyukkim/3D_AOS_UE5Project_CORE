// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AssetManagerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAssetManagerBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAssetManagerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UAssetManagerBase::StaticRegisterNativesUAssetManagerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetManagerBase);
	UClass* Z_Construct_UClass_UAssetManagerBase_NoRegister()
	{
		return UAssetManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UAssetManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetManagerBase.h" },
		{ "ModuleRelativePath", "AssetManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetManagerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetManagerBase_Statics::ClassParams = {
		&UAssetManagerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetManagerBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetManagerBase()
	{
		if (!Z_Registration_Info_UClass_UAssetManagerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetManagerBase.OuterSingleton, Z_Construct_UClass_UAssetManagerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetManagerBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAssetManagerBase>()
	{
		return UAssetManagerBase::StaticClass();
	}
	UAssetManagerBase::UAssetManagerBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManagerBase);
	UAssetManagerBase::~UAssetManagerBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AssetManagerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AssetManagerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetManagerBase, UAssetManagerBase::StaticClass, TEXT("UAssetManagerBase"), &Z_Registration_Info_UClass_UAssetManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetManagerBase), 277305976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AssetManagerBase_h_908512049(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AssetManagerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AssetManagerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
