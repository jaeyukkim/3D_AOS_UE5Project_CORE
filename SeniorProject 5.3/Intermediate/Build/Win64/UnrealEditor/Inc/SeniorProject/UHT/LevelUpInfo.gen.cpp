// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Data/LevelUpInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelUpInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ULevelUpInfo();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ULevelUpInfo_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLevelUpInfoBase();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelUpInfoBase;
class UScriptStruct* FLevelUpInfoBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelUpInfoBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelUpInfoBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelUpInfoBase, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("LevelUpInfoBase"));
	}
	return Z_Registration_Info_UScriptStruct_LevelUpInfoBase.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FLevelUpInfoBase>()
{
	return FLevelUpInfoBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpRequirement_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelUpRequirement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelUpInfoBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::NewProp_LevelUpRequirement_MetaData[] = {
		{ "Category", "LevelUpInfoBase" },
		{ "ModuleRelativePath", "AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::NewProp_LevelUpRequirement = { "LevelUpRequirement", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelUpInfoBase, LevelUpRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::NewProp_LevelUpRequirement_MetaData), Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::NewProp_LevelUpRequirement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::NewProp_LevelUpRequirement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"LevelUpInfoBase",
		Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::PropPointers),
		sizeof(FLevelUpInfoBase),
		alignof(FLevelUpInfoBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLevelUpInfoBase()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelUpInfoBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelUpInfoBase.InnerSingleton, Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelUpInfoBase.InnerSingleton;
	}
	void ULevelUpInfo::StaticRegisterNativesULevelUpInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelUpInfo);
	UClass* Z_Construct_UClass_ULevelUpInfo_NoRegister()
	{
		return ULevelUpInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULevelUpInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelUpInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelUpInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelUpInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Data/LevelUpInfo.h" },
		{ "ModuleRelativePath", "AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_Inner = { "LevelUpInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelUpInfoBase, METADATA_PARAMS(0, nullptr) }; // 385057410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData[] = {
		{ "Category", "LevelUpInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation = { "LevelUpInformation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelUpInfo, LevelUpInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData), Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData) }; // 385057410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelUpInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelUpInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelUpInfo_Statics::ClassParams = {
		&ULevelUpInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelUpInfo()
	{
		if (!Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton, Z_Construct_UClass_ULevelUpInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ULevelUpInfo>()
	{
		return ULevelUpInfo::StaticClass();
	}
	ULevelUpInfo::ULevelUpInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelUpInfo);
	ULevelUpInfo::~ULevelUpInfo() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo[] = {
		{ FLevelUpInfoBase::StaticStruct, Z_Construct_UScriptStruct_FLevelUpInfoBase_Statics::NewStructOps, TEXT("LevelUpInfoBase"), &Z_Registration_Info_UScriptStruct_LevelUpInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelUpInfoBase), 385057410U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelUpInfo, ULevelUpInfo::StaticClass, TEXT("ULevelUpInfo"), &Z_Registration_Info_UClass_ULevelUpInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelUpInfo), 3598720967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_4069028259(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
