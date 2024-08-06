// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Input/InputActionData.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UInputActionData();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UInputActionData_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionDataBase();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionDataBase;
class UScriptStruct* FInputActionDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionDataBase, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("InputActionDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionDataBase.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FInputActionDataBase>()
{
	return FInputActionDataBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionDataBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionDataBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Input/InputActionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionDataBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "InputActionDataBase" },
		{ "ModuleRelativePath", "Input/InputActionData.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionDataBase, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "InputActionDataBase" },
		{ "ModuleRelativePath", "Input/InputActionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionDataBase, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputTag_MetaData), Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionDataBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"InputActionDataBase",
		Z_Construct_UScriptStruct_FInputActionDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionDataBase_Statics::PropPointers),
		sizeof(FInputActionDataBase),
		alignof(FInputActionDataBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionDataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionDataBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionDataBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionDataBase()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionDataBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionDataBase.InnerSingleton, Z_Construct_UScriptStruct_FInputActionDataBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionDataBase.InnerSingleton;
	}
	void UInputActionData::StaticRegisterNativesUInputActionData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputActionData);
	UClass* Z_Construct_UClass_UInputActionData_NoRegister()
	{
		return UInputActionData::StaticClass();
	}
	struct Z_Construct_UClass_UInputActionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputActionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputActionData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Input/InputActionData.h" },
		{ "ModuleRelativePath", "Input/InputActionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputActionData_Statics::NewProp_InputActionData_Inner = { "InputActionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionDataBase, METADATA_PARAMS(0, nullptr) }; // 2558348168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputActionData_Statics::NewProp_InputActionData_MetaData[] = {
		{ "Category", "InputActionData" },
		{ "ModuleRelativePath", "Input/InputActionData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputActionData_Statics::NewProp_InputActionData = { "InputActionData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputActionData, InputActionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionData_Statics::NewProp_InputActionData_MetaData), Z_Construct_UClass_UInputActionData_Statics::NewProp_InputActionData_MetaData) }; // 2558348168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionData_Statics::NewProp_InputActionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionData_Statics::NewProp_InputActionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputActionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputActionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputActionData_Statics::ClassParams = {
		&UInputActionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputActionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputActionData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInputActionData()
	{
		if (!Z_Registration_Info_UClass_UInputActionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputActionData.OuterSingleton, Z_Construct_UClass_UInputActionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputActionData.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UInputActionData>()
	{
		return UInputActionData::StaticClass();
	}
	UInputActionData::UInputActionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputActionData);
	UInputActionData::~UInputActionData() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_Statics::ScriptStructInfo[] = {
		{ FInputActionDataBase::StaticStruct, Z_Construct_UScriptStruct_FInputActionDataBase_Statics::NewStructOps, TEXT("InputActionDataBase"), &Z_Registration_Info_UScriptStruct_InputActionDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionDataBase), 2558348168U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputActionData, UInputActionData::StaticClass, TEXT("UInputActionData"), &Z_Registration_Info_UClass_UInputActionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputActionData), 730968729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_3362757616(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputActionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
