// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Data/AbilityInfo.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilityInfo();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilityInfo_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityInfoBase();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityInfoBase;
class UScriptStruct* FAbilityInfoBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityInfoBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityInfoBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityInfoBase, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("AbilityInfoBase"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityInfoBase.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FAbilityInfoBase>()
{
	return FAbilityInfoBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbilityInfoBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ICon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ICon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityInfoBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Category", "AbilityInfoBase" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityInfoBase, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_CooldownTag_MetaData[] = {
		{ "Category", "AbilityInfoBase" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityInfoBase, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_CooldownTag_MetaData), Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_CooldownTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "AbilityInfoBase" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityInfoBase, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_InputTag_MetaData), Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_InputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_ICon_MetaData[] = {
		{ "Category", "AbilityInfoBase" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AbilityInfo.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_ICon = { "ICon", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityInfoBase, ICon), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_ICon_MetaData), Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_ICon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewProp_ICon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"AbilityInfoBase",
		Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::PropPointers),
		sizeof(FAbilityInfoBase),
		alignof(FAbilityInfoBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityInfoBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AbilityInfoBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityInfoBase.InnerSingleton, Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbilityInfoBase.InnerSingleton;
	}
	void UAbilityInfo::StaticRegisterNativesUAbilityInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityInfo);
	UClass* Z_Construct_UClass_UAbilityInfo_NoRegister()
	{
		return UAbilityInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Data/AbilityInfo.h" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_Inner = { "AbilityInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilityInfoBase, METADATA_PARAMS(0, nullptr) }; // 4048124778
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_MetaData[] = {
		{ "Category", "AbilityInformation" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation = { "AbilityInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityInfo, AbilityInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_MetaData), Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_MetaData) }; // 4048124778
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityInfo_Statics::ClassParams = {
		&UAbilityInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilityInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityInfo()
	{
		if (!Z_Registration_Info_UClass_UAbilityInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityInfo.OuterSingleton, Z_Construct_UClass_UAbilityInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityInfo.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAbilityInfo>()
	{
		return UAbilityInfo::StaticClass();
	}
	UAbilityInfo::UAbilityInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityInfo);
	UAbilityInfo::~UAbilityInfo() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_Statics::ScriptStructInfo[] = {
		{ FAbilityInfoBase::StaticStruct, Z_Construct_UScriptStruct_FAbilityInfoBase_Statics::NewStructOps, TEXT("AbilityInfoBase"), &Z_Registration_Info_UScriptStruct_AbilityInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityInfoBase), 4048124778U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityInfo, UAbilityInfo::StaticClass, TEXT("UAbilityInfo"), &Z_Registration_Info_UClass_UAbilityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityInfo), 1266961017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_3146868199(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_AbilityInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
