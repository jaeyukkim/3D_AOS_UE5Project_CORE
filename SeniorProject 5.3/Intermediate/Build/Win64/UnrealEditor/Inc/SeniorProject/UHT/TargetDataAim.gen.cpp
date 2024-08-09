// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/AbilityTask/TargetDataAim.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetDataAim() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UTargetDataAim();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UTargetDataAim_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventAimTargetDataSignature_Parms
		{
			FGameplayAbilityTargetDataHandle DataHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventAimTargetDataSignature_Parms, DataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle_MetaData), Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle_MetaData) }; // 3419327209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::NewProp_DataHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/TargetDataAim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "AimTargetDataSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::_Script_SeniorProject_eventAimTargetDataSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::_Script_SeniorProject_eventAimTargetDataSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAimTargetDataSignature_DelegateWrapper(const FMulticastScriptDelegate& AimTargetDataSignature, FGameplayAbilityTargetDataHandle const& DataHandle)
{
	struct _Script_SeniorProject_eventAimTargetDataSignature_Parms
	{
		FGameplayAbilityTargetDataHandle DataHandle;
	};
	_Script_SeniorProject_eventAimTargetDataSignature_Parms Parms;
	Parms.DataHandle=DataHandle;
	AimTargetDataSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTargetDataAim::execCreateTargetDataAim)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTargetDataAim**)Z_Param__Result=UTargetDataAim::CreateTargetDataAim(Z_Param_OwningAbility);
		P_NATIVE_END;
	}
	void UTargetDataAim::StaticRegisterNativesUTargetDataAim()
	{
		UClass* Class = UTargetDataAim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTargetDataAim", &UTargetDataAim::execCreateTargetDataAim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics
	{
		struct TargetDataAim_eventCreateTargetDataAim_Parms
		{
			UGameplayAbility* OwningAbility;
			UTargetDataAim* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetDataAim_eventCreateTargetDataAim_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetDataAim_eventCreateTargetDataAim_Parms, ReturnValue), Z_Construct_UClass_UTargetDataAim_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "TargetDataAim" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/TargetDataAim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetDataAim, nullptr, "CreateTargetDataAim", nullptr, nullptr, Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::TargetDataAim_eventCreateTargetDataAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::TargetDataAim_eventCreateTargetDataAim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetDataAim);
	UClass* Z_Construct_UClass_UTargetDataAim_NoRegister()
	{
		return UTargetDataAim::StaticClass();
	}
	struct Z_Construct_UClass_UTargetDataAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetDataAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataAim_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetDataAim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetDataAim_CreateTargetDataAim, "CreateTargetDataAim" }, // 604785157
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataAim_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDataAim_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AbilityTask/TargetDataAim.h" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/TargetDataAim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDataAim_Statics::NewProp_ValidData_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/TargetDataAim.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetDataAim_Statics::NewProp_ValidData = { "ValidData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetDataAim, ValidData), Z_Construct_UDelegateFunction_SeniorProject_AimTargetDataSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataAim_Statics::NewProp_ValidData_MetaData), Z_Construct_UClass_UTargetDataAim_Statics::NewProp_ValidData_MetaData) }; // 3547504021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDataAim_Statics::NewProp_AimDistance_MetaData[] = {
		{ "Category", "TargetDataAim" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/TargetDataAim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetDataAim_Statics::NewProp_AimDistance = { "AimDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetDataAim, AimDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataAim_Statics::NewProp_AimDistance_MetaData), Z_Construct_UClass_UTargetDataAim_Statics::NewProp_AimDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetDataAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetDataAim_Statics::NewProp_ValidData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetDataAim_Statics::NewProp_AimDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetDataAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetDataAim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetDataAim_Statics::ClassParams = {
		&UTargetDataAim::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetDataAim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataAim_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataAim_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetDataAim_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDataAim_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTargetDataAim()
	{
		if (!Z_Registration_Info_UClass_UTargetDataAim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetDataAim.OuterSingleton, Z_Construct_UClass_UTargetDataAim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetDataAim.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UTargetDataAim>()
	{
		return UTargetDataAim::StaticClass();
	}
	UTargetDataAim::UTargetDataAim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetDataAim);
	UTargetDataAim::~UTargetDataAim() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetDataAim, UTargetDataAim::StaticClass, TEXT("UTargetDataAim"), &Z_Registration_Info_UClass_UTargetDataAim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetDataAim), 2787803784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_375409375(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
