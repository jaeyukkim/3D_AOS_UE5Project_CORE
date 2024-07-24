// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/OverlayWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDefaultWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnHealtChangedSignature_Parms
		{
			float NewHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventOnHealtChangedSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnHealtChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnHealtChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnHealtChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHealtChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealtChangedSignature, float NewHealth)
{
	struct _Script_SeniorProject_eventOnHealtChangedSignature_Parms
	{
		float NewHealth;
	};
	_Script_SeniorProject_eventOnHealtChangedSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	OnHealtChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnMaxHealtChangedSignature_Parms
		{
			float NewMaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventOnMaxHealtChangedSignature_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnMaxHealtChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnMaxHealtChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnMaxHealtChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxHealtChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealtChangedSignature, float NewMaxHealth)
{
	struct _Script_SeniorProject_eventOnMaxHealtChangedSignature_Parms
	{
		float NewMaxHealth;
	};
	_Script_SeniorProject_eventOnMaxHealtChangedSignature_Parms Parms;
	Parms.NewMaxHealth=NewMaxHealth;
	OnMaxHealtChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnExpChangedSignature_Parms
		{
			float NewExp;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::NewProp_NewExp = { "NewExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventOnExpChangedSignature_Parms, NewExp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::NewProp_NewExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnExpChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnExpChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnExpChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnExpChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnExpChangedSignature, float NewExp)
{
	struct _Script_SeniorProject_eventOnExpChangedSignature_Parms
	{
		float NewExp;
	};
	_Script_SeniorProject_eventOnExpChangedSignature_Parms Parms;
	Parms.NewExp=NewExp;
	OnExpChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnNextExpChangedSignature_Parms
		{
			float NewNextExp;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewNextExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::NewProp_NewNextExp = { "NewNextExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventOnNextExpChangedSignature_Parms, NewNextExp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::NewProp_NewNextExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnNextExpChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnNextExpChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnNextExpChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNextExpChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnNextExpChangedSignature, float NewNextExp)
{
	struct _Script_SeniorProject_eventOnNextExpChangedSignature_Parms
	{
		float NewNextExp;
	};
	_Script_SeniorProject_eventOnNextExpChangedSignature_Parms Parms;
	Parms.NewNextExp=NewNextExp;
	OnNextExpChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnLevelChangedSignature_Parms
		{
			int32 NewLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventOnLevelChangedSignature_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::NewProp_NewLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnLevelChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnLevelChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnLevelChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnLevelChangedSignature, int32 NewLevel)
{
	struct _Script_SeniorProject_eventOnLevelChangedSignature_Parms
	{
		int32 NewLevel;
	};
	_Script_SeniorProject_eventOnLevelChangedSignature_Parms Parms;
	Parms.NewLevel=NewLevel;
	OnLevelChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UOverlayWidgetController::StaticRegisterNativesUOverlayWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlayWidgetController);
	UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister()
	{
		return UOverlayWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UOverlayWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExpChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExpChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNextExpChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNextExpChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UI/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData) }; // 2960627634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 2960627634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged = { "OnExpChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnExpChanged), Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged_MetaData) }; // 604595493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged = { "OnNextExpChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnNextExpChanged), Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged_MetaData) }; // 1074083697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged = { "OnLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnLevelChanged), Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged_MetaData) }; // 1262368345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlayWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams = {
		&UOverlayWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOverlayWidgetController()
	{
		if (!Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UOverlayWidgetController>()
	{
		return UOverlayWidgetController::StaticClass();
	}
	UOverlayWidgetController::UOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidgetController);
	UOverlayWidgetController::~UOverlayWidgetController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 258624134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidgetController_h_1309314716(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
