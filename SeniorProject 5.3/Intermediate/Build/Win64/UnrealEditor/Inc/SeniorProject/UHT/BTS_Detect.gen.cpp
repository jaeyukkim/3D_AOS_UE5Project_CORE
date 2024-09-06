// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AI/CustomBehaviorTree/BTS_Detect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_Detect() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTS_Detect();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTS_Detect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UBTS_Detect::StaticRegisterNativesUBTS_Detect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_Detect);
	UClass* Z_Construct_UClass_UBTS_Detect_NoRegister()
	{
		return UBTS_Detect::StaticClass();
	}
	struct Z_Construct_UClass_UBTS_Detect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTS_Detect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_Detect_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_Detect_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/CustomBehaviorTree/BTS_Detect.h" },
		{ "ModuleRelativePath", "AI/CustomBehaviorTree/BTS_Detect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTS_Detect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_Detect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_Detect_Statics::ClassParams = {
		&UBTS_Detect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_Detect_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_Detect_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTS_Detect()
	{
		if (!Z_Registration_Info_UClass_UBTS_Detect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_Detect.OuterSingleton, Z_Construct_UClass_UBTS_Detect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTS_Detect.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UBTS_Detect>()
	{
		return UBTS_Detect::StaticClass();
	}
	UBTS_Detect::UBTS_Detect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_Detect);
	UBTS_Detect::~UBTS_Detect() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_Detect, UBTS_Detect::StaticClass, TEXT("UBTS_Detect"), &Z_Registration_Info_UClass_UBTS_Detect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_Detect), 3424836708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_1630470374(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
