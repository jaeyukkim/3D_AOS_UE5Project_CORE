// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/TitleSceneController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleSceneController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ATitleSceneController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ATitleSceneController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void ATitleSceneController::StaticRegisterNativesATitleSceneController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATitleSceneController);
	UClass* Z_Construct_UClass_ATitleSceneController_NoRegister()
	{
		return ATitleSceneController::StaticClass();
	}
	struct Z_Construct_UClass_ATitleSceneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIWidgetInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATitleSceneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleSceneController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleSceneController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UI/TitleSceneController.h" },
		{ "ModuleRelativePath", "UI/TitleSceneController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/TitleSceneController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetClass = { "UIWidgetClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATitleSceneController, UIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetClass_MetaData), Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleSceneController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetInstance = { "UIWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATitleSceneController, UIWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetInstance_MetaData), Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATitleSceneController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleSceneController_Statics::NewProp_UIWidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATitleSceneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitleSceneController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitleSceneController_Statics::ClassParams = {
		&ATitleSceneController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATitleSceneController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATitleSceneController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleSceneController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATitleSceneController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleSceneController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATitleSceneController()
	{
		if (!Z_Registration_Info_UClass_ATitleSceneController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitleSceneController.OuterSingleton, Z_Construct_UClass_ATitleSceneController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATitleSceneController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ATitleSceneController>()
	{
		return ATitleSceneController::StaticClass();
	}
	ATitleSceneController::ATitleSceneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATitleSceneController);
	ATitleSceneController::~ATitleSceneController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_TitleSceneController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_TitleSceneController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATitleSceneController, ATitleSceneController::StaticClass, TEXT("ATitleSceneController"), &Z_Registration_Info_UClass_ATitleSceneController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitleSceneController), 3953709750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_TitleSceneController_h_1517111127(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_TitleSceneController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_TitleSceneController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
