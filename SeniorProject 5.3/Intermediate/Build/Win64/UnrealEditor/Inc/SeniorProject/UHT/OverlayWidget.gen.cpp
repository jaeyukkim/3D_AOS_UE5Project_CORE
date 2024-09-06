// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidget();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UOverlayWidget::execSetRotationToPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationToPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayWidget::execSetWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_InWidgetController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetController(Z_Param_InWidgetController);
		P_NATIVE_END;
	}
	static FName NAME_UOverlayWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
	void UOverlayWidget::WidgetControllerSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOverlayWidget_WidgetControllerSet),NULL);
	}
	void UOverlayWidget::StaticRegisterNativesUOverlayWidget()
	{
		UClass* Class = UOverlayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRotationToPlayer", &UOverlayWidget::execSetRotationToPlayer },
			{ "SetWidgetController", &UOverlayWidget::execSetWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayWidget, nullptr, "SetRotationToPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics
	{
		struct OverlayWidget_eventSetWidgetController_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlayWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::NewProp_InWidgetController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayWidget, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::OverlayWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::OverlayWidget_eventSetWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOverlayWidget_SetWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlayWidget_SetWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlayWidget);
	UClass* Z_Construct_UClass_UOverlayWidget_NoRegister()
	{
		return UOverlayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOverlayWidget_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOverlayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverlayWidget_SetRotationToPlayer, "SetRotationToPlayer" }, // 3296506612
		{ &Z_Construct_UFunction_UOverlayWidget_SetWidgetController, "SetWidgetController" }, // 215103648
		{ &Z_Construct_UFunction_UOverlayWidget_WidgetControllerSet, "WidgetControllerSet" }, // 650134327
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/OverlayWidget/OverlayWidget.h" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidget_Statics::NewProp_WidgetController_MetaData[] = {
		{ "Category", "OverlayWidget" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOverlayWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidget_Statics::NewProp_WidgetController_MetaData), Z_Construct_UClass_UOverlayWidget_Statics::NewProp_WidgetController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidget_Statics::NewProp_WidgetController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidget_Statics::ClassParams = {
		&UOverlayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOverlayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlayWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOverlayWidget()
	{
		if (!Z_Registration_Info_UClass_UOverlayWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidget.OuterSingleton, Z_Construct_UClass_UOverlayWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlayWidget.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UOverlayWidget>()
	{
		return UOverlayWidget::StaticClass();
	}
	UOverlayWidget::UOverlayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidget);
	UOverlayWidget::~UOverlayWidget() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidget, UOverlayWidget::StaticClass, TEXT("UOverlayWidget"), &Z_Registration_Info_UClass_UOverlayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidget), 1861479283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidget_h_2574797906(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
