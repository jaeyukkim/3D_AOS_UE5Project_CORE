// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/GameSetting/MyCharacterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterWidget() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterWidget_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UMyCharacterWidget::StaticRegisterNativesUMyCharacterWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCharacterWidget);
	UClass* Z_Construct_UClass_UMyCharacterWidget_NoRegister()
	{
		return UMyCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  hp?\xd9\xbf? \xc4\xb3???? ???? ????\xc8\xad\n */" },
		{ "IncludePath", "GameSetting/MyCharacterWidget.h" },
		{ "ModuleRelativePath", "GameSetting/MyCharacterWidget.h" },
		{ "ToolTip", "hp?\xd9\xbf? \xc4\xb3???? ???? ????\xc8\xad" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterWidget_Statics::NewProp_HPProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameSetting/MyCharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyCharacterWidget_Statics::NewProp_HPProgressBar = { "HPProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCharacterWidget, HPProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyCharacterWidget_Statics::NewProp_HPProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterWidget_Statics::NewProp_HPProgressBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyCharacterWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCharacterWidget_Statics::NewProp_HPProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCharacterWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCharacterWidget_Statics::ClassParams = {
		&UMyCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyCharacterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCharacterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCharacterWidget()
	{
		if (!Z_Registration_Info_UClass_UMyCharacterWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCharacterWidget.OuterSingleton, Z_Construct_UClass_UMyCharacterWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyCharacterWidget.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMyCharacterWidget>()
	{
		return UMyCharacterWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterWidget);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyCharacterWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyCharacterWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyCharacterWidget, UMyCharacterWidget::StaticClass, TEXT("UMyCharacterWidget"), &Z_Registration_Info_UClass_UMyCharacterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCharacterWidget), 2369079695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyCharacterWidget_h_3481478918(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyCharacterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyCharacterWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
