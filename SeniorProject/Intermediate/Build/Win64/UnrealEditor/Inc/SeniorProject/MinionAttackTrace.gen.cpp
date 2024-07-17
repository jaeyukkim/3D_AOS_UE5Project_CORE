// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AIMinions/MinionAttackTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionAttackTrace() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMinionAttackTrace_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMinionAttackTrace();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions_NoRegister();
// End Cross Module References
	void UMinionAttackTrace::StaticRegisterNativesUMinionAttackTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinionAttackTrace);
	UClass* Z_Construct_UClass_UMinionAttackTrace_NoRegister()
	{
		return UMinionAttackTrace::StaticClass();
	}
	struct Z_Construct_UClass_UMinionAttackTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Minion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinionAttackTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAttackTrace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  ?????\xcd\xb0? ???\xdd\xbd\xc3\xbf? ?? ?????? ?\xd7\xb8??? ?????? ???? \n  ?????????? ?\xcf\xb4? ?\xd4\xbc??? \xc8\xa3???\xcf\xb4? ?????????\xd4\xbc?\n  \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AIMinions/MinionAttackTrace.h" },
		{ "ModuleRelativePath", "AIMinions/MinionAttackTrace.h" },
		{ "ToolTip", "?????\xcd\xb0? ???\xdd\xbd\xc3\xbf? ?? ?????? ?\xd7\xb8??? ?????? ????\n?????????? ?\xcf\xb4? ?\xd4\xbc??? \xc8\xa3???\xcf\xb4? ?????????\xd4\xbc?" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAttackTrace_Statics::NewProp_Minion_MetaData[] = {
		{ "ModuleRelativePath", "AIMinions/MinionAttackTrace.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinionAttackTrace_Statics::NewProp_Minion = { "Minion", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinionAttackTrace, Minion), Z_Construct_UClass_AMinions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinionAttackTrace_Statics::NewProp_Minion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAttackTrace_Statics::NewProp_Minion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinionAttackTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionAttackTrace_Statics::NewProp_Minion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinionAttackTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinionAttackTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinionAttackTrace_Statics::ClassParams = {
		&UMinionAttackTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMinionAttackTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAttackTrace_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMinionAttackTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAttackTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinionAttackTrace()
	{
		if (!Z_Registration_Info_UClass_UMinionAttackTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinionAttackTrace.OuterSingleton, Z_Construct_UClass_UMinionAttackTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinionAttackTrace.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMinionAttackTrace>()
	{
		return UMinionAttackTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinionAttackTrace);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAttackTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAttackTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinionAttackTrace, UMinionAttackTrace::StaticClass, TEXT("UMinionAttackTrace"), &Z_Registration_Info_UClass_UMinionAttackTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinionAttackTrace), 1320853815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAttackTrace_h_496376894(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAttackTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAttackTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
