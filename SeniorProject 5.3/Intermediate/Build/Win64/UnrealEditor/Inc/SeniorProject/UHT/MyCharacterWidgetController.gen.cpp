// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/CharacterBase/UI/MyCharacterWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterWidgetController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UMyCharacterWidgetController::StaticRegisterNativesUMyCharacterWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCharacterWidgetController);
	UClass* Z_Construct_UClass_UMyCharacterWidgetController_NoRegister()
	{
		return UMyCharacterWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UMyCharacterWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCharacterWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterWidgetController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/CharacterBase/UI/MyCharacterWidgetController.h" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyCharacterWidgetController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCharacterWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCharacterWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCharacterWidgetController_Statics::ClassParams = {
		&UMyCharacterWidgetController::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyCharacterWidgetController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyCharacterWidgetController()
	{
		if (!Z_Registration_Info_UClass_UMyCharacterWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCharacterWidgetController.OuterSingleton, Z_Construct_UClass_UMyCharacterWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyCharacterWidgetController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMyCharacterWidgetController>()
	{
		return UMyCharacterWidgetController::StaticClass();
	}
	UMyCharacterWidgetController::UMyCharacterWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterWidgetController);
	UMyCharacterWidgetController::~UMyCharacterWidgetController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyCharacterWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyCharacterWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyCharacterWidgetController, UMyCharacterWidgetController::StaticClass, TEXT("UMyCharacterWidgetController"), &Z_Registration_Info_UClass_UMyCharacterWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCharacterWidgetController), 324566800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyCharacterWidgetController_h_3103929650(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyCharacterWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyCharacterWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
