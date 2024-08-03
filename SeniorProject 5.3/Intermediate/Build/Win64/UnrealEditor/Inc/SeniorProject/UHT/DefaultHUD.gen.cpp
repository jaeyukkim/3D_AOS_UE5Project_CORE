// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/DefaultHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADefaultHUD();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADefaultHUD_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidget_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void ADefaultHUD::StaticRegisterNativesADefaultHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultHUD);
	UClass* Z_Construct_UClass_ADefaultHUD_NoRegister()
	{
		return ADefaultHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetControllerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMenuWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeMenuWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMenuWidgetControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeMenuWidgetControllerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/DefaultHUD.h" },
		{ "ModuleRelativePath", "UI/DefaultHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultHUD, OverlayWidget), Z_Construct_UClass_UOverlayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidget_MetaData), Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "DefaultHUD" },
		{ "ModuleRelativePath", "UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetClass_MetaData), Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetController = { "OverlayWidgetController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultHUD, OverlayWidgetController), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetController_MetaData), Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "DefaultHUD" },
		{ "ModuleRelativePath", "UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetControllerClass = { "OverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultHUD, OverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData), Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetController = { "AttributeMenuWidgetController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultHUD, AttributeMenuWidgetController), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetController_MetaData), Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetControllerClass_MetaData[] = {
		{ "Category", "DefaultHUD" },
		{ "ModuleRelativePath", "UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetControllerClass = { "AttributeMenuWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultHUD, AttributeMenuWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetControllerClass_MetaData), Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetControllerClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_OverlayWidgetControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_AttributeMenuWidgetControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultHUD_Statics::ClassParams = {
		&ADefaultHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefaultHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADefaultHUD()
	{
		if (!Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton, Z_Construct_UClass_ADefaultHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ADefaultHUD>()
	{
		return ADefaultHUD::StaticClass();
	}
	ADefaultHUD::ADefaultHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultHUD);
	ADefaultHUD::~ADefaultHUD() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_DefaultHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_DefaultHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultHUD, ADefaultHUD::StaticClass, TEXT("ADefaultHUD"), &Z_Registration_Info_UClass_ADefaultHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultHUD), 3815546256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_DefaultHUD_h_553624378(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_DefaultHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_DefaultHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
