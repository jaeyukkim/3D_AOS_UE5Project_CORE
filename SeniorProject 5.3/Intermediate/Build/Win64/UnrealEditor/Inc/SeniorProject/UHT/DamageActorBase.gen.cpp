// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Actor/Default/DamageActorBase.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageActorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADamageActorBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADamageActorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void ADamageActorBase::StaticRegisterNativesADamageActorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADamageActorBase);
	UClass* Z_Construct_UClass_ADamageActorBase_NoRegister()
	{
		return ADamageActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ADamageActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectSpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectSpecHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/Default/DamageActorBase.h" },
		{ "ModuleRelativePath", "Actor/Default/DamageActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageEffectSpecHandle_MetaData[] = {
		{ "Category", "DamageActorBase" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Actor/Default/DamageActorBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageEffectSpecHandle = { "DamageEffectSpecHandle", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADamageActorBase, DamageEffectSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageEffectSpecHandle_MetaData), Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageEffectSpecHandle_MetaData) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageEffectSpecHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADamageActorBase_Statics::ClassParams = {
		&ADamageActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADamageActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADamageActorBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADamageActorBase()
	{
		if (!Z_Registration_Info_UClass_ADamageActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADamageActorBase.OuterSingleton, Z_Construct_UClass_ADamageActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADamageActorBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ADamageActorBase>()
	{
		return ADamageActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageActorBase);
	ADamageActorBase::~ADamageActorBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_DamageActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_DamageActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADamageActorBase, ADamageActorBase::StaticClass, TEXT("ADamageActorBase"), &Z_Registration_Info_UClass_ADamageActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADamageActorBase), 2601049318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_DamageActorBase_h_4249613128(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_DamageActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_DamageActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
