// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/DefaultBase/AttackTraceLoop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackTraceLoop() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttackTraceLoop();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttackTraceLoop_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UAttackTraceLoop::StaticRegisterNativesUAttackTraceLoop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackTraceLoop);
	UClass* Z_Construct_UClass_UAttackTraceLoop_NoRegister()
	{
		return UAttackTraceLoop::StaticClass();
	}
	struct Z_Construct_UClass_UAttackTraceLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackTraceLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTraceLoop_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackTraceLoop_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "DefaultBase/AttackTraceLoop.h" },
		{ "ModuleRelativePath", "DefaultBase/AttackTraceLoop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackTraceLoop_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "DefaultBase/AttackTraceLoop.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackTraceLoop_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackTraceLoop, Character), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTraceLoop_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UAttackTraceLoop_Statics::NewProp_Character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackTraceLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackTraceLoop_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackTraceLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackTraceLoop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackTraceLoop_Statics::ClassParams = {
		&UAttackTraceLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttackTraceLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTraceLoop_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTraceLoop_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackTraceLoop_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTraceLoop_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttackTraceLoop()
	{
		if (!Z_Registration_Info_UClass_UAttackTraceLoop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackTraceLoop.OuterSingleton, Z_Construct_UClass_UAttackTraceLoop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackTraceLoop.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAttackTraceLoop>()
	{
		return UAttackTraceLoop::StaticClass();
	}
	UAttackTraceLoop::UAttackTraceLoop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackTraceLoop);
	UAttackTraceLoop::~UAttackTraceLoop() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_AttackTraceLoop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_AttackTraceLoop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackTraceLoop, UAttackTraceLoop::StaticClass, TEXT("UAttackTraceLoop"), &Z_Registration_Info_UClass_UAttackTraceLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackTraceLoop), 544229123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_AttackTraceLoop_h_2753437207(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_AttackTraceLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_AttackTraceLoop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
