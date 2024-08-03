// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/BlueprintFunctionLibraryBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFunctionLibraryBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBlueprintFunctionLibraryBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBlueprintFunctionLibraryBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execGetUAttributeMenuWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributeMenuWidgetController**)Z_Param__Result=UBlueprintFunctionLibraryBase::GetUAttributeMenuWidgetController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execGetOverlayWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOverlayWidgetController**)Z_Param__Result=UBlueprintFunctionLibraryBase::GetOverlayWidgetController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UBlueprintFunctionLibraryBase::StaticRegisterNativesUBlueprintFunctionLibraryBase()
	{
		UClass* Class = UBlueprintFunctionLibraryBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOverlayWidgetController", &UBlueprintFunctionLibraryBase::execGetOverlayWidgetController },
			{ "GetUAttributeMenuWidgetController", &UBlueprintFunctionLibraryBase::execGetUAttributeMenuWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics
	{
		struct BlueprintFunctionLibraryBase_eventGetOverlayWidgetController_Parms
		{
			const UObject* WorldContextObject;
			UOverlayWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventGetOverlayWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventGetOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilitySystemLibraryBase|WidgetController" },
		{ "ModuleRelativePath", "AbilitySystem/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "GetOverlayWidgetController", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::BlueprintFunctionLibraryBase_eventGetOverlayWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::BlueprintFunctionLibraryBase_eventGetOverlayWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics
	{
		struct BlueprintFunctionLibraryBase_eventGetUAttributeMenuWidgetController_Parms
		{
			const UObject* WorldContextObject;
			UAttributeMenuWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventGetUAttributeMenuWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventGetUAttributeMenuWidgetController_Parms, ReturnValue), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilitySystemLibraryBase|WidgetController" },
		{ "ModuleRelativePath", "AbilitySystem/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "GetUAttributeMenuWidgetController", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::BlueprintFunctionLibraryBase_eventGetUAttributeMenuWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::BlueprintFunctionLibraryBase_eventGetUAttributeMenuWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintFunctionLibraryBase);
	UClass* Z_Construct_UClass_UBlueprintFunctionLibraryBase_NoRegister()
	{
		return UBlueprintFunctionLibraryBase::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 3829041005
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController, "GetUAttributeMenuWidgetController" }, // 3114743644
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/BlueprintFunctionLibraryBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFunctionLibraryBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::ClassParams = {
		&UBlueprintFunctionLibraryBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlueprintFunctionLibraryBase()
	{
		if (!Z_Registration_Info_UClass_UBlueprintFunctionLibraryBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintFunctionLibraryBase.OuterSingleton, Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintFunctionLibraryBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UBlueprintFunctionLibraryBase>()
	{
		return UBlueprintFunctionLibraryBase::StaticClass();
	}
	UBlueprintFunctionLibraryBase::UBlueprintFunctionLibraryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFunctionLibraryBase);
	UBlueprintFunctionLibraryBase::~UBlueprintFunctionLibraryBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_BlueprintFunctionLibraryBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_BlueprintFunctionLibraryBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFunctionLibraryBase, UBlueprintFunctionLibraryBase::StaticClass, TEXT("UBlueprintFunctionLibraryBase"), &Z_Registration_Info_UClass_UBlueprintFunctionLibraryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFunctionLibraryBase), 378308950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_BlueprintFunctionLibraryBase_h_3381369179(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_BlueprintFunctionLibraryBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_BlueprintFunctionLibraryBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
