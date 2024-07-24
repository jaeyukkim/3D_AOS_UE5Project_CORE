// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemComponentBase() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilitySystemComponentBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilitySystemComponentBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UAbilitySystemComponentBase::StaticRegisterNativesUAbilitySystemComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemComponentBase);
	UClass* Z_Construct_UClass_UAbilitySystemComponentBase_NoRegister()
	{
		return UAbilitySystemComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySystemComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySystemComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemComponentBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/AbilitySystemComponentBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySystemComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySystemComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemComponentBase_Statics::ClassParams = {
		&UAbilitySystemComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySystemComponentBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAbilitySystemComponentBase()
	{
		if (!Z_Registration_Info_UClass_UAbilitySystemComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySystemComponentBase.OuterSingleton, Z_Construct_UClass_UAbilitySystemComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilitySystemComponentBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAbilitySystemComponentBase>()
	{
		return UAbilitySystemComponentBase::StaticClass();
	}
	UAbilitySystemComponentBase::UAbilitySystemComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemComponentBase);
	UAbilitySystemComponentBase::~UAbilitySystemComponentBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySystemComponentBase, UAbilitySystemComponentBase::StaticClass, TEXT("UAbilitySystemComponentBase"), &Z_Registration_Info_UClass_UAbilitySystemComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemComponentBase), 1049529944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_1047650793(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
