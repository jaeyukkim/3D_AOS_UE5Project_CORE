// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Abilities/DamageGameplayAbilityBase.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageGameplayAbilityBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UDamageGameplayAbilityBase::StaticRegisterNativesUDamageGameplayAbilityBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageGameplayAbilityBase);
	UClass* Z_Construct_UClass_UDamageGameplayAbilityBase_NoRegister()
	{
		return UDamageGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UDamageGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTypes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTypes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DamageTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "DamageGameplayAbilityBase" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGameplayAbilityBase, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageEffectClass_MetaData), Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageEffectClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes_ValueProp = { "DamageTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(0, nullptr) }; // 4070660376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes_Key_KeyProp = { "DamageTypes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes = { "DamageTypes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGameplayAbilityBase, DamageTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes_MetaData), Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes_MetaData) }; // 2083603574 4070660376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageGameplayAbilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::ClassParams = {
		&UDamageGameplayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDamageGameplayAbilityBase()
	{
		if (!Z_Registration_Info_UClass_UDamageGameplayAbilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageGameplayAbilityBase.OuterSingleton, Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageGameplayAbilityBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UDamageGameplayAbilityBase>()
	{
		return UDamageGameplayAbilityBase::StaticClass();
	}
	UDamageGameplayAbilityBase::UDamageGameplayAbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageGameplayAbilityBase);
	UDamageGameplayAbilityBase::~UDamageGameplayAbilityBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageGameplayAbilityBase, UDamageGameplayAbilityBase::StaticClass, TEXT("UDamageGameplayAbilityBase"), &Z_Registration_Info_UClass_UDamageGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageGameplayAbilityBase), 2908152826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_2413947999(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
