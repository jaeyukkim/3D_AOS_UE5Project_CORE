// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Debuff/DebuffParticleComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebuffParticleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDebuffParticleComponent();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDebuffParticleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UDebuffParticleComponent::StaticRegisterNativesUDebuffParticleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebuffParticleComponent);
	UClass* Z_Construct_UClass_UDebuffParticleComponent_NoRegister()
	{
		return UDebuffParticleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDebuffParticleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebuffTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebuffParticleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebuffParticleComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebuffParticleComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "AbilitySystem/Debuff/DebuffParticleComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/Debuff/DebuffParticleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebuffParticleComponent_Statics::NewProp_DebuffTag_MetaData[] = {
		{ "Category", "DebuffParticleComponent" },
		{ "ModuleRelativePath", "AbilitySystem/Debuff/DebuffParticleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebuffParticleComponent_Statics::NewProp_DebuffTag = { "DebuffTag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDebuffParticleComponent, DebuffTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebuffParticleComponent_Statics::NewProp_DebuffTag_MetaData), Z_Construct_UClass_UDebuffParticleComponent_Statics::NewProp_DebuffTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebuffParticleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebuffParticleComponent_Statics::NewProp_DebuffTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebuffParticleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebuffParticleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebuffParticleComponent_Statics::ClassParams = {
		&UDebuffParticleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebuffParticleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebuffParticleComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebuffParticleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebuffParticleComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebuffParticleComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDebuffParticleComponent()
	{
		if (!Z_Registration_Info_UClass_UDebuffParticleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebuffParticleComponent.OuterSingleton, Z_Construct_UClass_UDebuffParticleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDebuffParticleComponent.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UDebuffParticleComponent>()
	{
		return UDebuffParticleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebuffParticleComponent);
	UDebuffParticleComponent::~UDebuffParticleComponent() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Debuff_DebuffParticleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Debuff_DebuffParticleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDebuffParticleComponent, UDebuffParticleComponent::StaticClass, TEXT("UDebuffParticleComponent"), &Z_Registration_Info_UClass_UDebuffParticleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebuffParticleComponent), 737630302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Debuff_DebuffParticleComponent_h_1408344396(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Debuff_DebuffParticleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Debuff_DebuffParticleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
