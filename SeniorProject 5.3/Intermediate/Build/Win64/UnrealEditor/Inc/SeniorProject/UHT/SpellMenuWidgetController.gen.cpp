// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/SpellMenu/SpellMenuWidgetController.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/AbilitySystem/Data/AbilityInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellMenuWidgetController() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilityInfo_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDefaultWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_USpellMenuWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_USpellMenuWidgetController_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityInfoBase();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnSpellPointChangedDelegate_Parms
		{
			int32 NewSpellPoint;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewSpellPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::NewProp_NewSpellPoint = { "NewSpellPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventOnSpellPointChangedDelegate_Parms, NewSpellPoint), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::NewProp_NewSpellPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnSpellPointChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventOnSpellPointChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventOnSpellPointChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSpellPointChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSpellPointChangedDelegate, int32 NewSpellPoint)
{
	struct _Script_SeniorProject_eventOnSpellPointChangedDelegate_Parms
	{
		int32 NewSpellPoint;
	};
	_Script_SeniorProject_eventOnSpellPointChangedDelegate_Parms Parms;
	Parms.NewSpellPoint=NewSpellPoint;
	OnSpellPointChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventAbilityLevelChangedDelegate_Parms
		{
			FGameplayTag AbilityTag;
			int32 NewAbilityLevel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewAbilityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventAbilityLevelChangedDelegate_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::NewProp_NewAbilityLevel = { "NewAbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventAbilityLevelChangedDelegate_Parms, NewAbilityLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::NewProp_NewAbilityLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "AbilityLevelChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventAbilityLevelChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventAbilityLevelChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAbilityLevelChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityLevelChangedDelegate, FGameplayTag AbilityTag, int32 NewAbilityLevel)
{
	struct _Script_SeniorProject_eventAbilityLevelChangedDelegate_Parms
	{
		FGameplayTag AbilityTag;
		int32 NewAbilityLevel;
	};
	_Script_SeniorProject_eventAbilityLevelChangedDelegate_Parms Parms;
	Parms.AbilityTag=AbilityTag;
	Parms.NewAbilityLevel=NewAbilityLevel;
	AbilityLevelChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventAbilityInfoDelegate_Parms
		{
			FAbilityInfoBase Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventAbilityInfoDelegate_Parms, Info), Z_Construct_UScriptStruct_FAbilityInfoBase, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 4048124778
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "AbilityInfoDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventAbilityInfoDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventAbilityInfoDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAbilityInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityInfoDelegate, FAbilityInfoBase const& Info)
{
	struct _Script_SeniorProject_eventAbilityInfoDelegate_Parms
	{
		FAbilityInfoBase Info;
	};
	_Script_SeniorProject_eventAbilityInfoDelegate_Parms Parms;
	Parms.Info=Info;
	AbilityInfoDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USpellMenuWidgetController::execCanUpgradeSpell)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUpgradeSpell(Z_Param_AbilityTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpellMenuWidgetController::execUpgradeSpell)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeSpell(Z_Param_Out_AbilityTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpellMenuWidgetController::execBroadcastInitialValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInitialValues();
		P_NATIVE_END;
	}
	void USpellMenuWidgetController::StaticRegisterNativesUSpellMenuWidgetController()
	{
		UClass* Class = USpellMenuWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInitialValues", &USpellMenuWidgetController::execBroadcastInitialValues },
			{ "CanUpgradeSpell", &USpellMenuWidgetController::execCanUpgradeSpell },
			{ "UpgradeSpell", &USpellMenuWidgetController::execUpgradeSpell },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpellMenuWidgetController, nullptr, "BroadcastInitialValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics
	{
		struct SpellMenuWidgetController_eventCanUpgradeSpell_Parms
		{
			FGameplayTag AbilityTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpellMenuWidgetController_eventCanUpgradeSpell_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpellMenuWidgetController_eventCanUpgradeSpell_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpellMenuWidgetController_eventCanUpgradeSpell_Parms), &Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpellMenuWidgetController, nullptr, "CanUpgradeSpell", nullptr, nullptr, Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::SpellMenuWidgetController_eventCanUpgradeSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::SpellMenuWidgetController_eventCanUpgradeSpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics
	{
		struct SpellMenuWidgetController_eventUpgradeSpell_Parms
		{
			FGameplayTag AbilityTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpellMenuWidgetController_eventUpgradeSpell_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpellMenuWidgetController, nullptr, "UpgradeSpell", nullptr, nullptr, Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::SpellMenuWidgetController_eventUpgradeSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::SpellMenuWidgetController_eventUpgradeSpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpellMenuWidgetController);
	UClass* Z_Construct_UClass_USpellMenuWidgetController_NoRegister()
	{
		return USpellMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_USpellMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellPointsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SpellPointsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AbilityInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevelChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AbilityLevelChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityUnLocked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AbilityUnLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpellMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpellMenuWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpellMenuWidgetController_BroadcastInitialValues, "BroadcastInitialValues" }, // 372703513
		{ &Z_Construct_UFunction_USpellMenuWidgetController_CanUpgradeSpell, "CanUpgradeSpell" }, // 1286830594
		{ &Z_Construct_UFunction_USpellMenuWidgetController_UpgradeSpell, "UpgradeSpell" }, // 3867581517
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_SpellPointsChanged_MetaData[] = {
		{ "Category", "GAS|Spell" },
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_SpellPointsChanged = { "SpellPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellMenuWidgetController, SpellPointsChanged), Z_Construct_UDelegateFunction_SeniorProject_OnSpellPointChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_SpellPointsChanged_MetaData), Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_SpellPointsChanged_MetaData) }; // 2601629179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfoDelegate_MetaData[] = {
		{ "Category", "GAS|Spell" },
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfoDelegate = { "AbilityInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellMenuWidgetController, AbilityInfoDelegate), Z_Construct_UDelegateFunction_SeniorProject_AbilityInfoDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfoDelegate_MetaData), Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfoDelegate_MetaData) }; // 2645499936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityLevelChangedDelegate_MetaData[] = {
		{ "Category", "GAS|Spell" },
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityLevelChangedDelegate = { "AbilityLevelChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellMenuWidgetController, AbilityLevelChangedDelegate), Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityLevelChangedDelegate_MetaData), Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityLevelChangedDelegate_MetaData) }; // 3310921986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityUnLocked_MetaData[] = {
		{ "Category", "GAS|Spell" },
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityUnLocked = { "AbilityUnLocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellMenuWidgetController, AbilityUnLocked), Z_Construct_UDelegateFunction_SeniorProject_AbilityLevelChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityUnLocked_MetaData), Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityUnLocked_MetaData) }; // 3310921986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfo_MetaData[] = {
		{ "Category", "Widget Data" },
		{ "ModuleRelativePath", "UI/SpellMenu/SpellMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfo = { "AbilityInfo", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpellMenuWidgetController, AbilityInfo), Z_Construct_UClass_UAbilityInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfo_MetaData), Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpellMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_SpellPointsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfoDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityLevelChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityUnLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellMenuWidgetController_Statics::NewProp_AbilityInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpellMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpellMenuWidgetController_Statics::ClassParams = {
		&USpellMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpellMenuWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_USpellMenuWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellMenuWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpellMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_USpellMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpellMenuWidgetController.OuterSingleton, Z_Construct_UClass_USpellMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpellMenuWidgetController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<USpellMenuWidgetController>()
	{
		return USpellMenuWidgetController::StaticClass();
	}
	USpellMenuWidgetController::USpellMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpellMenuWidgetController);
	USpellMenuWidgetController::~USpellMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpellMenuWidgetController, USpellMenuWidgetController::StaticClass, TEXT("USpellMenuWidgetController"), &Z_Registration_Info_UClass_USpellMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpellMenuWidgetController), 2407118080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_1309621136(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
