// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemMenuWidgetController() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDefaultWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidgetController_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventGoldChangedSignature_Parms
		{
			int32 NewGold;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewGold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::NewProp_NewGold = { "NewGold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventGoldChangedSignature_Parms, NewGold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::NewProp_NewGold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "GoldChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventGoldChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventGoldChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGoldChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& GoldChangedSignature, int32 NewGold)
{
	struct _Script_SeniorProject_eventGoldChangedSignature_Parms
	{
		int32 NewGold;
	};
	_Script_SeniorProject_eventGoldChangedSignature_Parms Parms;
	Parms.NewGold=NewGold;
	GoldChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UItemMenuWidgetController::execBroadcastInitialValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInitialValues();
		P_NATIVE_END;
	}
	void UItemMenuWidgetController::StaticRegisterNativesUItemMenuWidgetController()
	{
		UClass* Class = UItemMenuWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInitialValues", &UItemMenuWidgetController::execBroadcastInitialValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "BroadcastInitialValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemMenuWidgetController);
	UClass* Z_Construct_UClass_UItemMenuWidgetController_NoRegister()
	{
		return UItemMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UItemMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GoldChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemMenuWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues, "BroadcastInitialValues" }, // 3844572844
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged = { "GoldChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, GoldChanged), Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData) }; // 4267651908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemMenuWidgetController_Statics::ClassParams = {
		&UItemMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemMenuWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_UItemMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemMenuWidgetController.OuterSingleton, Z_Construct_UClass_UItemMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemMenuWidgetController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UItemMenuWidgetController>()
	{
		return UItemMenuWidgetController::StaticClass();
	}
	UItemMenuWidgetController::UItemMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemMenuWidgetController);
	UItemMenuWidgetController::~UItemMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemMenuWidgetController, UItemMenuWidgetController::StaticClass, TEXT("UItemMenuWidgetController"), &Z_Registration_Info_UClass_UItemMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemMenuWidgetController), 3044726645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_1540583640(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
