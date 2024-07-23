// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/CharacterBase/UI/MyHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUDWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyHUDWidget();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UMyHUDWidget::execSetWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_InWidgetController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetController(Z_Param_InWidgetController);
		P_NATIVE_END;
	}
	static FName NAME_UMyHUDWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
	void UMyHUDWidget::WidgetControllerSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMyHUDWidget_WidgetControllerSet),NULL);
	}
	void UMyHUDWidget::StaticRegisterNativesUMyHUDWidget()
	{
		UClass* Class = UMyHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetController", &UMyHUDWidget::execSetWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics
	{
		struct MyHUDWidget_eventSetWidgetController_Parms
		{
			UObject* InWidgetController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUDWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::NewProp_InWidgetController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyHUDWidget, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::MyHUDWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::MyHUDWidget_eventSetWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyHUDWidget_SetWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyHUDWidget_SetWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyHUDWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyHUDWidget);
	UClass* Z_Construct_UClass_UMyHUDWidget_NoRegister()
	{
		return UMyHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetController;
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyHUDWidget_SetWidgetController, "SetWidgetController" }, // 3103147661
		{ &Z_Construct_UFunction_UMyHUDWidget_WidgetControllerSet, "WidgetControllerSet" }, // 789630664
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_WidgetController_MetaData[] = {
		{ "Category", "MyHUDWidget" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyHUDWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_WidgetController_MetaData), Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_WidgetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyHUDWidget, HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar_MetaData), Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_HPBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar = { "ExpBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyHUDWidget, ExpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar_MetaData), Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_ExpBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyHUDWidget, PlayerLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel_MetaData), Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_PlayerLevel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyHUDWidget_Statics::NewProp_WidgetController,
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
		FuncInfo,
		Z_Construct_UClass_UMyHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyHUDWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyHUDWidget_Statics::PropPointers) < 2048);
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
	UMyHUDWidget::UMyHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyHUDWidget);
	UMyHUDWidget::~UMyHUDWidget() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyHUDWidget, UMyHUDWidget::StaticClass, TEXT("UMyHUDWidget"), &Z_Registration_Info_UClass_UMyHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyHUDWidget), 3119163765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyHUDWidget_h_4072234329(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
