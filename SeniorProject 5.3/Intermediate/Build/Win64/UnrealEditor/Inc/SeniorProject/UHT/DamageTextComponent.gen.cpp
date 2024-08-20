// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/Damage/DamageTextComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageTextComponent() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageTextComponent();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageTextComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct DamageTextComponent_eventSetDamageText_Parms
	{
		float Damage;
	};
	static FName NAME_UDamageTextComponent_SetDamageText = FName(TEXT("SetDamageText"));
	void UDamageTextComponent::SetDamageText(float Damage)
	{
		DamageTextComponent_eventSetDamageText_Parms Parms;
		Parms.Damage=Damage;
		ProcessEvent(FindFunctionChecked(NAME_UDamageTextComponent_SetDamageText),&Parms);
	}
	void UDamageTextComponent::StaticRegisterNativesUDamageTextComponent()
	{
	}
	struct Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageTextComponent_eventSetDamageText_Parms, Damage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Damage/DamageTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageTextComponent, nullptr, "SetDamageText", nullptr, nullptr, Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::PropPointers), sizeof(DamageTextComponent_eventSetDamageText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::PropPointers) < 2048);
	static_assert(sizeof(DamageTextComponent_eventSetDamageText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDamageTextComponent_SetDamageText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageTextComponent);
	UClass* Z_Construct_UClass_UDamageTextComponent_NoRegister()
	{
		return UDamageTextComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDamageTextComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageTextComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageTextComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageTextComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageTextComponent_SetDamageText, "SetDamageText" }, // 14558509
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageTextComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageTextComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/Damage/DamageTextComponent.h" },
		{ "ModuleRelativePath", "UI/Damage/DamageTextComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageTextComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageTextComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageTextComponent_Statics::ClassParams = {
		&UDamageTextComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageTextComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageTextComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDamageTextComponent()
	{
		if (!Z_Registration_Info_UClass_UDamageTextComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageTextComponent.OuterSingleton, Z_Construct_UClass_UDamageTextComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageTextComponent.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UDamageTextComponent>()
	{
		return UDamageTextComponent::StaticClass();
	}
	UDamageTextComponent::UDamageTextComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageTextComponent);
	UDamageTextComponent::~UDamageTextComponent() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Damage_DamageTextComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Damage_DamageTextComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageTextComponent, UDamageTextComponent::StaticClass, TEXT("UDamageTextComponent"), &Z_Registration_Info_UClass_UDamageTextComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageTextComponent), 2024495159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Damage_DamageTextComponent_h_3896729967(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Damage_DamageTextComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Damage_DamageTextComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
