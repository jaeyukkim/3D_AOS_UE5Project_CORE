// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/Player/TwoHandAttackTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwoHandAttackTrace() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UTwoHandAttackTrace_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UTwoHandAttackTrace();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKallari_NoRegister();
// End Cross Module References
	void UTwoHandAttackTrace::StaticRegisterNativesUTwoHandAttackTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwoHandAttackTrace);
	UClass* Z_Construct_UClass_UTwoHandAttackTrace_NoRegister()
	{
		return UTwoHandAttackTrace::StaticClass();
	}
	struct Z_Construct_UClass_UTwoHandAttackTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kallari_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Kallari;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwoHandAttackTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwoHandAttackTrace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SeniorProject/Player/TwoHandAttackTrace.h" },
		{ "ModuleRelativePath", "SeniorProject/Player/TwoHandAttackTrace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwoHandAttackTrace_Statics::NewProp_Kallari_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/TwoHandAttackTrace.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwoHandAttackTrace_Statics::NewProp_Kallari = { "Kallari", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwoHandAttackTrace, Kallari), Z_Construct_UClass_AKallari_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwoHandAttackTrace_Statics::NewProp_Kallari_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwoHandAttackTrace_Statics::NewProp_Kallari_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwoHandAttackTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwoHandAttackTrace_Statics::NewProp_Kallari,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwoHandAttackTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwoHandAttackTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwoHandAttackTrace_Statics::ClassParams = {
		&UTwoHandAttackTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwoHandAttackTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwoHandAttackTrace_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTwoHandAttackTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwoHandAttackTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwoHandAttackTrace()
	{
		if (!Z_Registration_Info_UClass_UTwoHandAttackTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwoHandAttackTrace.OuterSingleton, Z_Construct_UClass_UTwoHandAttackTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwoHandAttackTrace.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UTwoHandAttackTrace>()
	{
		return UTwoHandAttackTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwoHandAttackTrace);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_TwoHandAttackTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_TwoHandAttackTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTwoHandAttackTrace, UTwoHandAttackTrace::StaticClass, TEXT("UTwoHandAttackTrace"), &Z_Registration_Info_UClass_UTwoHandAttackTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwoHandAttackTrace), 4277269899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_TwoHandAttackTrace_h_2742652062(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_TwoHandAttackTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_TwoHandAttackTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
