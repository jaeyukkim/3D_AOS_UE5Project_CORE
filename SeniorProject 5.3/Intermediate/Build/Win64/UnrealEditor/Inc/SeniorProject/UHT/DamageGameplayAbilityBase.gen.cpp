// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Abilities/DamageGameplayAbilityBase.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageGameplayAbilityBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEffectParams();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UDamageGameplayAbilityBase::execMakeDamageEffectParamsFromClassDefaults)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDamageEffectParams*)Z_Param__Result=P_THIS->MakeDamageEffectParamsFromClassDefaults(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageGameplayAbilityBase::execCauseDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CauseDamage(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	void UDamageGameplayAbilityBase::StaticRegisterNativesUDamageGameplayAbilityBase()
	{
		UClass* Class = UDamageGameplayAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CauseDamage", &UDamageGameplayAbilityBase::execCauseDamage },
			{ "MakeDamageEffectParamsFromClassDefaults", &UDamageGameplayAbilityBase::execMakeDamageEffectParamsFromClassDefaults },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics
	{
		struct DamageGameplayAbilityBase_eventCauseDamage_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageGameplayAbilityBase_eventCauseDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageGameplayAbilityBase, nullptr, "CauseDamage", nullptr, nullptr, Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::DamageGameplayAbilityBase_eventCauseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::DamageGameplayAbilityBase_eventCauseDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics
	{
		struct DamageGameplayAbilityBase_eventMakeDamageEffectParamsFromClassDefaults_Parms
		{
			AActor* TargetActor;
			FDamageEffectParams ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageGameplayAbilityBase_eventMakeDamageEffectParamsFromClassDefaults_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageGameplayAbilityBase_eventMakeDamageEffectParamsFromClassDefaults_Parms, ReturnValue), Z_Construct_UScriptStruct_FDamageEffectParams, METADATA_PARAMS(0, nullptr) }; // 4036095010
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_TargetActor", "None" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageGameplayAbilityBase, nullptr, "MakeDamageEffectParamsFromClassDefaults", nullptr, nullptr, Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::DamageGameplayAbilityBase_eventMakeDamageEffectParamsFromClassDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::DamageGameplayAbilityBase_eventMakeDamageEffectParamsFromClassDefaults_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageGameplayAbilityBase);
	UClass* Z_Construct_UClass_UDamageGameplayAbilityBase_NoRegister()
	{
		return UDamageGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UDamageGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_APCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ADCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ADCoefficient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageGameplayAbilityBase_CauseDamage, "CauseDamage" }, // 1363272545
		{ &Z_Construct_UFunction_UDamageGameplayAbilityBase_MakeDamageEffectParamsFromClassDefaults, "MakeDamageEffectParamsFromClassDefaults" }, // 3743086912
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGameplayAbilityBase, DamageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageType_MetaData), Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageType_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGameplayAbilityBase, BaseDamage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_BaseDamage_MetaData) }; // 4070660376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_APCoefficient_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_APCoefficient = { "APCoefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGameplayAbilityBase, APCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_APCoefficient_MetaData), Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_APCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_ADCoefficient_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/DamageGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_ADCoefficient = { "ADCoefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageGameplayAbilityBase, ADCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_ADCoefficient_MetaData), Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_ADCoefficient_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_APCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::NewProp_ADCoefficient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageGameplayAbilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::ClassParams = {
		&UDamageGameplayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDamageGameplayAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UDamageGameplayAbilityBase, UDamageGameplayAbilityBase::StaticClass, TEXT("UDamageGameplayAbilityBase"), &Z_Registration_Info_UClass_UDamageGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageGameplayAbilityBase), 1055837645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_1225386807(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_DamageGameplayAbilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
