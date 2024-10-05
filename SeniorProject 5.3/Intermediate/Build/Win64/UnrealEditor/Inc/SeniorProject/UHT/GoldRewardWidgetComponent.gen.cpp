// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/GoldReward/GoldRewardWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoldRewardWidgetComponent() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGoldRewardWidgetComponent();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGoldRewardWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct GoldRewardWidgetComponent_eventSetGoldRewardText_Parms
	{
		int32 GoldReward;
	};
	static FName NAME_UGoldRewardWidgetComponent_SetGoldRewardText = FName(TEXT("SetGoldRewardText"));
	void UGoldRewardWidgetComponent::SetGoldRewardText(int32 GoldReward)
	{
		GoldRewardWidgetComponent_eventSetGoldRewardText_Parms Parms;
		Parms.GoldReward=GoldReward;
		ProcessEvent(FindFunctionChecked(NAME_UGoldRewardWidgetComponent_SetGoldRewardText),&Parms);
	}
	void UGoldRewardWidgetComponent::StaticRegisterNativesUGoldRewardWidgetComponent()
	{
	}
	struct Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_GoldReward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::NewProp_GoldReward = { "GoldReward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoldRewardWidgetComponent_eventSetGoldRewardText_Parms, GoldReward), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::NewProp_GoldReward,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/GoldReward/GoldRewardWidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoldRewardWidgetComponent, nullptr, "SetGoldRewardText", nullptr, nullptr, Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::PropPointers), sizeof(GoldRewardWidgetComponent_eventSetGoldRewardText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::PropPointers) < 2048);
	static_assert(sizeof(GoldRewardWidgetComponent_eventSetGoldRewardText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoldRewardWidgetComponent);
	UClass* Z_Construct_UClass_UGoldRewardWidgetComponent_NoRegister()
	{
		return UGoldRewardWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGoldRewardWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoldRewardWidgetComponent_SetGoldRewardText, "SetGoldRewardText" }, // 2872439443
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/GoldReward/GoldRewardWidgetComponent.h" },
		{ "ModuleRelativePath", "UI/GoldReward/GoldRewardWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoldRewardWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::ClassParams = {
		&UGoldRewardWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGoldRewardWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UGoldRewardWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoldRewardWidgetComponent.OuterSingleton, Z_Construct_UClass_UGoldRewardWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoldRewardWidgetComponent.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UGoldRewardWidgetComponent>()
	{
		return UGoldRewardWidgetComponent::StaticClass();
	}
	UGoldRewardWidgetComponent::UGoldRewardWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoldRewardWidgetComponent);
	UGoldRewardWidgetComponent::~UGoldRewardWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_GoldReward_GoldRewardWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_GoldReward_GoldRewardWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoldRewardWidgetComponent, UGoldRewardWidgetComponent::StaticClass, TEXT("UGoldRewardWidgetComponent"), &Z_Registration_Info_UClass_UGoldRewardWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoldRewardWidgetComponent), 1634705950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_GoldReward_GoldRewardWidgetComponent_h_1684015452(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_GoldReward_GoldRewardWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_GoldReward_GoldRewardWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
