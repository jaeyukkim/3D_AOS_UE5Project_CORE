// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/AttributeMenu/AttributeMenuWidgetController.h"
#include "SeniorProject/AbilitySystem/Data/AttributeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeMenuWidgetController() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDefaultWidgetController();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeTagInfo();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventAttributeInfoSignature_Parms
		{
			FAttributeTagInfo Info;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventAttributeInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FAttributeTagInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 1410738640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AttributeMenu/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "AttributeInfoSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::_Script_SeniorProject_eventAttributeInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::_Script_SeniorProject_eventAttributeInfoSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAttributeInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& AttributeInfoSignature, FAttributeTagInfo const& Info)
{
	struct _Script_SeniorProject_eventAttributeInfoSignature_Parms
	{
		FAttributeTagInfo Info;
	};
	_Script_SeniorProject_eventAttributeInfoSignature_Parms Parms;
	Parms.Info=Info;
	AttributeInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAttributeMenuWidgetController::execBroadcastInitialValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInitialValues();
		P_NATIVE_END;
	}
	void UAttributeMenuWidgetController::StaticRegisterNativesUAttributeMenuWidgetController()
	{
		UClass* Class = UAttributeMenuWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInitialValues", &UAttributeMenuWidgetController::execBroadcastInitialValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AttributeMenu/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeMenuWidgetController, nullptr, "BroadcastInitialValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeMenuWidgetController);
	UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister()
	{
		return UAttributeMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttributeInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeMenuWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeMenuWidgetController_BroadcastInitialValues, "BroadcastInitialValues" }, // 2805048671
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/AttributeMenu/AttributeMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/AttributeMenu/AttributeMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/AttributeMenu/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate = { "AttributeInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfoDelegate), Z_Construct_UDelegateFunction_SeniorProject_AttributeInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate_MetaData), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate_MetaData) }; // 1370934324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo_MetaData[] = {
		{ "Category", "AttributeMenuWidgetController" },
		{ "ModuleRelativePath", "UI/AttributeMenu/AttributeMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfo), Z_Construct_UClass_UAttributeInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo_MetaData), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams = {
		&UAttributeMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttributeMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton, Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAttributeMenuWidgetController>()
	{
		return UAttributeMenuWidgetController::StaticClass();
	}
	UAttributeMenuWidgetController::UAttributeMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeMenuWidgetController);
	UAttributeMenuWidgetController::~UAttributeMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_AttributeMenu_AttributeMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_AttributeMenu_AttributeMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeMenuWidgetController, UAttributeMenuWidgetController::StaticClass, TEXT("UAttributeMenuWidgetController"), &Z_Registration_Info_UClass_UAttributeMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeMenuWidgetController), 3860874149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_AttributeMenu_AttributeMenuWidgetController_h_3146543419(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_AttributeMenu_AttributeMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_AttributeMenu_AttributeMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
