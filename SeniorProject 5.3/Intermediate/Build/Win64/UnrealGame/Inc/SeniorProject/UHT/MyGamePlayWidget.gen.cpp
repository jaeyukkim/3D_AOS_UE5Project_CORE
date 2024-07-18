// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/CharacterBase/UI/MyGamePlayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGamePlayWidget() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyGamePlayWidget();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyGamePlayWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UMyGamePlayWidget::execOnRetryGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryGameClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyGamePlayWidget::execOnReturnToTitleClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReturnToTitleClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyGamePlayWidget::execOnResumeClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResumeClicked();
		P_NATIVE_END;
	}
	void UMyGamePlayWidget::StaticRegisterNativesUMyGamePlayWidget()
	{
		UClass* Class = UMyGamePlayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumeClicked", &UMyGamePlayWidget::execOnResumeClicked },
			{ "OnRetryGameClicked", &UMyGamePlayWidget::execOnRetryGameClicked },
			{ "OnReturnToTitleClicked", &UMyGamePlayWidget::execOnReturnToTitleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGamePlayWidget, nullptr, "OnResumeClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGamePlayWidget, nullptr, "OnRetryGameClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGamePlayWidget, nullptr, "OnReturnToTitleClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGamePlayWidget);
	UClass* Z_Construct_UClass_UMyGamePlayWidget_NoRegister()
	{
		return UMyGamePlayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyGamePlayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToTitleButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToTitleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetryGameButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RetryGameButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGamePlayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGamePlayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGamePlayWidget_OnResumeClicked, "OnResumeClicked" }, // 3974758020
		{ &Z_Construct_UFunction_UMyGamePlayWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 3464152391
		{ &Z_Construct_UFunction_UMyGamePlayWidget_OnReturnToTitleClicked, "OnReturnToTitleClicked" }, // 603543752
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGamePlayWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGamePlayWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ResumeButton_MetaData), Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ResumeButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ReturnToTitleButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ReturnToTitleButton = { "ReturnToTitleButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGamePlayWidget, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ReturnToTitleButton_MetaData), Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ReturnToTitleButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_RetryGameButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CharacterBase/UI/MyGamePlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_RetryGameButton = { "RetryGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGamePlayWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_RetryGameButton_MetaData), Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_RetryGameButton_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGamePlayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ResumeButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_ReturnToTitleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGamePlayWidget_Statics::NewProp_RetryGameButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGamePlayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGamePlayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGamePlayWidget_Statics::ClassParams = {
		&UMyGamePlayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyGamePlayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGamePlayWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGamePlayWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyGamePlayWidget()
	{
		if (!Z_Registration_Info_UClass_UMyGamePlayWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGamePlayWidget.OuterSingleton, Z_Construct_UClass_UMyGamePlayWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGamePlayWidget.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMyGamePlayWidget>()
	{
		return UMyGamePlayWidget::StaticClass();
	}
	UMyGamePlayWidget::UMyGamePlayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGamePlayWidget);
	UMyGamePlayWidget::~UMyGamePlayWidget() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyGamePlayWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyGamePlayWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGamePlayWidget, UMyGamePlayWidget::StaticClass, TEXT("UMyGamePlayWidget"), &Z_Registration_Info_UClass_UMyGamePlayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGamePlayWidget), 473209181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyGamePlayWidget_h_720112714(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyGamePlayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_UI_MyGamePlayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
