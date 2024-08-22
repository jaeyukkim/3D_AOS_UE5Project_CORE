// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AI/AIControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AAIControllerBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AAIControllerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AAIControllerBase::StaticRegisterNativesAAIControllerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIControllerBase);
	UClass* Z_Construct_UClass_AAIControllerBase_NoRegister()
	{
		return AAIControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AAIControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTreeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/AIControllerBase.h" },
		{ "ModuleRelativePath", "AI/AIControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerBase_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAIControllerBase_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIControllerBase, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::NewProp_BehaviorTreeComponent_MetaData), Z_Construct_UClass_AAIControllerBase_Statics::NewProp_BehaviorTreeComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIControllerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerBase_Statics::NewProp_BehaviorTreeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerBase_Statics::ClassParams = {
		&AAIControllerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIControllerBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIControllerBase()
	{
		if (!Z_Registration_Info_UClass_AAIControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIControllerBase.OuterSingleton, Z_Construct_UClass_AAIControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIControllerBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AAIControllerBase>()
	{
		return AAIControllerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerBase);
	AAIControllerBase::~AAIControllerBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_AIControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_AIControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIControllerBase, AAIControllerBase::StaticClass, TEXT("AAIControllerBase"), &Z_Registration_Info_UClass_AAIControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIControllerBase), 793941280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_AIControllerBase_h_4251379364(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_AIControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_AIControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
