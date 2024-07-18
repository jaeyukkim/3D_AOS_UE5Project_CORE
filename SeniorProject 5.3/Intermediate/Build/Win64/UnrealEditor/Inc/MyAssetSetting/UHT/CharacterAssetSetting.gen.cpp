// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyAssetSetting/Public/CharacterAssetSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAssetSetting() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MYASSETSETTING_API UClass* Z_Construct_UClass_UCharacterAssetSetting();
	MYASSETSETTING_API UClass* Z_Construct_UClass_UCharacterAssetSetting_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyAssetSetting();
// End Cross Module References
	void UCharacterAssetSetting::StaticRegisterNativesUCharacterAssetSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAssetSetting);
	UClass* Z_Construct_UClass_UCharacterAssetSetting_NoRegister()
	{
		return UCharacterAssetSetting::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAssetSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KwangAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KwangAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KwangAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAssetSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyAssetSetting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAssetSetting_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAssetSetting_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CharacterAssetSetting.h" },
		{ "ModuleRelativePath", "Public/CharacterAssetSetting.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAssetSetting_Statics::NewProp_KwangAssets_Inner = { "KwangAssets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAssetSetting_Statics::NewProp_KwangAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterAssetSetting.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAssetSetting_Statics::NewProp_KwangAssets = { "KwangAssets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAssetSetting, KwangAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAssetSetting_Statics::NewProp_KwangAssets_MetaData), Z_Construct_UClass_UCharacterAssetSetting_Statics::NewProp_KwangAssets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAssetSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAssetSetting_Statics::NewProp_KwangAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAssetSetting_Statics::NewProp_KwangAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAssetSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAssetSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAssetSetting_Statics::ClassParams = {
		&UCharacterAssetSetting::StaticClass,
		"SeniorProject",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterAssetSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAssetSetting_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAssetSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAssetSetting_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAssetSetting_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterAssetSetting()
	{
		if (!Z_Registration_Info_UClass_UCharacterAssetSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAssetSetting.OuterSingleton, Z_Construct_UClass_UCharacterAssetSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterAssetSetting.OuterSingleton;
	}
	template<> MYASSETSETTING_API UClass* StaticClass<UCharacterAssetSetting>()
	{
		return UCharacterAssetSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAssetSetting);
	UCharacterAssetSetting::~UCharacterAssetSetting() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_MyAssetSetting_Public_CharacterAssetSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_MyAssetSetting_Public_CharacterAssetSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAssetSetting, UCharacterAssetSetting::StaticClass, TEXT("UCharacterAssetSetting"), &Z_Registration_Info_UClass_UCharacterAssetSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAssetSetting), 3000474119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_MyAssetSetting_Public_CharacterAssetSetting_h_3066548482(TEXT("/Script/MyAssetSetting"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_MyAssetSetting_Public_CharacterAssetSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_MyAssetSetting_Public_CharacterAssetSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
