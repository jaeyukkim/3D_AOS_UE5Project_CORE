// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemComponentBase() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilitySystemComponentBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilitySystemComponentBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execClientEffectApplied)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveEffectHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEffectApplied_Implementation(Z_Param_AbilitySystemComponent,Z_Param_EffectSpec,Z_Param_ActiveEffectHandle);
		P_NATIVE_END;
	}
	struct AbilitySystemComponentBase_eventClientEffectApplied_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayEffectSpec EffectSpec;
		FActiveGameplayEffectHandle ActiveEffectHandle;
	};
	static FName NAME_UAbilitySystemComponentBase_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
	void UAbilitySystemComponentBase::ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
	{
		AbilitySystemComponentBase_eventClientEffectApplied_Parms Parms;
		Parms.AbilitySystemComponent=AbilitySystemComponent;
		Parms.EffectSpec=EffectSpec;
		Parms.ActiveEffectHandle=ActiveEffectHandle;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ClientEffectApplied),&Parms);
	}
	void UAbilitySystemComponentBase::StaticRegisterNativesUAbilitySystemComponentBase()
	{
		UClass* Class = UAbilitySystemComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientEffectApplied", &UAbilitySystemComponentBase::execClientEffectApplied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientEffectApplied_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientEffectApplied_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData) }; // 4290086594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle = { "ActiveEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientEffectApplied_Parms, ActiveEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ClientEffectApplied", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventClientEffectApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventClientEffectApplied_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemComponentBase);
	UClass* Z_Construct_UClass_UAbilitySystemComponentBase_NoRegister()
	{
		return UAbilitySystemComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySystemComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitySystemComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied, "ClientEffectApplied" }, // 4212018037
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UAbilitySystemComponentBase, UAbilitySystemComponentBase::StaticClass, TEXT("UAbilitySystemComponentBase"), &Z_Registration_Info_UClass_UAbilitySystemComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemComponentBase), 3406197666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_2919334588(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
