// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/GameSetting/MyHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUDWidget() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyHUDWidget_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UMyHUDWidget::StaticRegisterNativesUMyHUDWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyHUDWidget);
	UClass* Z_Construct_UClass_UMyHUDWidget_NoRegister()
	{
		return UMyHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SeniorProject/GameSetting/MyHUDWidget.h" },
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyHUDWidget, HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar = { "ExpBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyHUDWidget, ExpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyHUDWidget, PlayerLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyHUDWidget_Statics::ClassParams = {
		&UMyHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UMyHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyHUDWidget.OuterSingleton, Z_Construct_UClass_UMyHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyHUDWidget.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMyHUDWidget>()
	{
		return UMyHUDWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyHUDWidget);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyHUDWidget, UMyHUDWidget::StaticClass, TEXT("UMyHUDWidget"), &Z_Registration_Info_UClass_UMyHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyHUDWidget), 2440475451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyHUDWidget_h_4231929012(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
