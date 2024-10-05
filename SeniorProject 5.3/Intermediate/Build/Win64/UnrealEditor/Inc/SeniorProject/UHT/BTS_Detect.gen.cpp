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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_losingTargetRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_losingTargetRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_Detect_Statics::NewProp_DetectRange_MetaData[] = {
		{ "Category", "BTS_Detect" },
		{ "ModuleRelativePath", "AI/CustomBehaviorTree/BTS_Detect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTS_Detect_Statics::NewProp_DetectRange = { "DetectRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_Detect, DetectRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_Detect_Statics::NewProp_DetectRange_MetaData), Z_Construct_UClass_UBTS_Detect_Statics::NewProp_DetectRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_Detect_Statics::NewProp_losingTargetRange_MetaData[] = {
		{ "Category", "BTS_Detect" },
		{ "ModuleRelativePath", "AI/CustomBehaviorTree/BTS_Detect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTS_Detect_Statics::NewProp_losingTargetRange = { "losingTargetRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTS_Detect, losingTargetRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_Detect_Statics::NewProp_losingTargetRange_MetaData), Z_Construct_UClass_UBTS_Detect_Statics::NewProp_losingTargetRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTS_Detect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_Detect_Statics::NewProp_DetectRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTS_Detect_Statics::NewProp_losingTargetRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTS_Detect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_Detect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_Detect_Statics::ClassParams = {
		&UBTS_Detect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTS_Detect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_Detect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_Detect_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_Detect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_Detect_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UBTS_Detect, UBTS_Detect::StaticClass, TEXT("UBTS_Detect"), &Z_Registration_Info_UClass_UBTS_Detect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_Detect), 914630248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_3019139304(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTS_Detect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
