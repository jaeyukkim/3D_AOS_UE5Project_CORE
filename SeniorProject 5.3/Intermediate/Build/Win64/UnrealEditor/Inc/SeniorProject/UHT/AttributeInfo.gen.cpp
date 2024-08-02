// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Data/AttributeInfo.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeInfo();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeTagInfo();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeTagInfo;
class UScriptStruct* FAttributeTagInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeTagInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeTagInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeTagInfo, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("AttributeTagInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeTagInfo.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FAttributeTagInfo>()
{
	return FAttributeTagInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeTagInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n * \n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeTagInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "Category", "AttributeTagInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeTagInfo, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeTag_MetaData), Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "AttributeTagInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeTagInfo, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeName_MetaData), Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeDescription_MetaData[] = {
		{ "Category", "AttributeTagInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeDescription = { "AttributeDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeTagInfo, AttributeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeDescription_MetaData), Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "AttributeTagInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeTagInfo, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewProp_AttributeValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"AttributeTagInfo",
		Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::PropPointers),
		sizeof(FAttributeTagInfo),
		alignof(FAttributeTagInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeTagInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeTagInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeTagInfo.InnerSingleton, Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeTagInfo.InnerSingleton;
	}
	void UAttributeInfo::StaticRegisterNativesUAttributeInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeInfo);
	UClass* Z_Construct_UClass_UAttributeInfo_NoRegister()
	{
		return UAttributeInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Data/AttributeInfo.h" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_Inner = { "AttributeInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributeTagInfo, METADATA_PARAMS(0, nullptr) }; // 1410738640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData[] = {
		{ "Category", "AttributeInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation = { "AttributeInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeInfo, AttributeInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData), Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData) }; // 1410738640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeInfo_Statics::ClassParams = {
		&UAttributeInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttributeInfo()
	{
		if (!Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton, Z_Construct_UClass_UAttributeInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAttributeInfo>()
	{
		return UAttributeInfo::StaticClass();
	}
	UAttributeInfo::UAttributeInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeInfo);
	UAttributeInfo::~UAttributeInfo() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo[] = {
		{ FAttributeTagInfo::StaticStruct, Z_Construct_UScriptStruct_FAttributeTagInfo_Statics::NewStructOps, TEXT("AttributeTagInfo"), &Z_Registration_Info_UScriptStruct_AttributeTagInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeTagInfo), 1410738640U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeInfo, UAttributeInfo::StaticClass, TEXT("UAttributeInfo"), &Z_Registration_Info_UClass_UAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeInfo), 2151516223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_1202820149(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
