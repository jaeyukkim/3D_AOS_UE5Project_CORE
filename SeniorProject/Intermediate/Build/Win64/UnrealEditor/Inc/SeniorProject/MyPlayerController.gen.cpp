// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/Player/MyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyHUDWidget_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
// End Cross Module References
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerController);
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SeniorProject/Player/MyPlayerController.h" },
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, HUDWidgetClass), Z_Construct_UClass_UMyHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, HUDWidget), Z_Construct_UClass_UMyHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState = { "MyPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, MyPlayerState), Z_Construct_UClass_AMyPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_HUDWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerController, AMyPlayerController::StaticClass, TEXT("AMyPlayerController"), &Z_Registration_Info_UClass_AMyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerController), 2386636903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerController_h_3114544300(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
