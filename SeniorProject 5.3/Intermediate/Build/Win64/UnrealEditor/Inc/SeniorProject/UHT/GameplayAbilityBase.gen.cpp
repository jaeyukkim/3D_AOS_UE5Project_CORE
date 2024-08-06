// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/GameplayAbilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityBase() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UGameplayAbilityBase::StaticRegisterNativesUGameplayAbilityBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilityBase);
	UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/GameplayAbilityBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbilityBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams = {
		&UGameplayAbilityBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameplayAbilityBase()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton, Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UGameplayAbilityBase>()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	UGameplayAbilityBase::UGameplayAbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilityBase);
	UGameplayAbilityBase::~UGameplayAbilityBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilityBase, UGameplayAbilityBase::StaticClass, TEXT("UGameplayAbilityBase"), &Z_Registration_Info_UClass_UGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilityBase), 3877800890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_2331317413(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_GameplayAbilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
