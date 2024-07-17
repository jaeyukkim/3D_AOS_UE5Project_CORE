// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/GameSetting/MyMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMenuWidget() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyMenuWidget_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyMenuWidget::execOnRetryGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryGameClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyMenuWidget::execOnReturnToTitleClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReturnToTitleClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyMenuWidget::execOnResumeClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResumeClicked();
		P_NATIVE_END;
	}
	void UMyMenuWidget::StaticRegisterNativesUMyMenuWidget()
	{
		UClass* Class = UMyMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumeClicked", &UMyMenuWidget::execOnResumeClicked },
			{ "OnRetryGameClicked", &UMyMenuWidget::execOnRetryGameClicked },
			{ "OnReturnToTitleClicked", &UMyMenuWidget::execOnReturnToTitleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMenuWidget, nullptr, "OnResumeClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMenuWidget, nullptr, "OnRetryGameClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSetting/MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMenuWidget, nullptr, "OnReturnToTitleClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyMenuWidget);
	UClass* Z_Construct_UClass_UMyMenuWidget_NoRegister()
	{
		return UMyMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyMenuWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UMyMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyMenuWidget_OnResumeClicked, "OnResumeClicked" }, // 925013397
		{ &Z_Construct_UFunction_UMyMenuWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 2881330582
		{ &Z_Construct_UFunction_UMyMenuWidget_OnReturnToTitleClicked, "OnReturnToTitleClicked" }, // 1491868741
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameSetting/MyMenuWidget.h" },
		{ "ModuleRelativePath", "GameSetting/MyMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameSetting/MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMenuWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ReturnToTitleButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameSetting/MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ReturnToTitleButton = { "ReturnToTitleButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMenuWidget, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ReturnToTitleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ReturnToTitleButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_RetryGameButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameSetting/MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_RetryGameButton = { "RetryGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMenuWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_RetryGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_RetryGameButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ResumeButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_ReturnToTitleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_RetryGameButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyMenuWidget_Statics::ClassParams = {
		&UMyMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyMenuWidget()
	{
		if (!Z_Registration_Info_UClass_UMyMenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyMenuWidget.OuterSingleton, Z_Construct_UClass_UMyMenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyMenuWidget.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMyMenuWidget>()
	{
		return UMyMenuWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMenuWidget);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyMenuWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyMenuWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyMenuWidget, UMyMenuWidget::StaticClass, TEXT("UMyMenuWidget"), &Z_Registration_Info_UClass_UMyMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyMenuWidget), 2462723496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyMenuWidget_h_1099686475(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyMenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
