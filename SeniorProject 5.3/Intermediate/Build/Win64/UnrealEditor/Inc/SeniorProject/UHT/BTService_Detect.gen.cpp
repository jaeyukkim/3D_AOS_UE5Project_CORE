// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/EnemyBase/CustomBehaviorTree/BTService_Detect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Detect() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTService_Detect();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTService_Detect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UBTService_Detect::StaticRegisterNativesUBTService_Detect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_Detect);
	UClass* Z_Construct_UClass_UBTService_Detect_NoRegister()
	{
		return UBTService_Detect::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Detect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Detect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Detect_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Detect_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n//\xc8\xa8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xb3\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xd9\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\n */" },
#endif
		{ "IncludePath", "EnemyBase/CustomBehaviorTree/BTService_Detect.h" },
		{ "ModuleRelativePath", "EnemyBase/CustomBehaviorTree/BTService_Detect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//\xc8\xa8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xb3\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xd9\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Detect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Detect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Detect_Statics::ClassParams = {
		&UBTService_Detect::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Detect_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_Detect_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTService_Detect()
	{
		if (!Z_Registration_Info_UClass_UBTService_Detect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_Detect.OuterSingleton, Z_Construct_UClass_UBTService_Detect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_Detect.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UBTService_Detect>()
	{
		return UBTService_Detect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Detect);
	UBTService_Detect::~UBTService_Detect() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_CustomBehaviorTree_BTService_Detect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_CustomBehaviorTree_BTService_Detect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_Detect, UBTService_Detect::StaticClass, TEXT("UBTService_Detect"), &Z_Registration_Info_UClass_UBTService_Detect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_Detect), 2945926944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_CustomBehaviorTree_BTService_Detect_h_2013448080(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_CustomBehaviorTree_BTService_Detect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_CustomBehaviorTree_BTService_Detect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
