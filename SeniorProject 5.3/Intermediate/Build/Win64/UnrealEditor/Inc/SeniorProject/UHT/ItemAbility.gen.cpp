// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Item/ItemAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemAbility();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UItemAbility::execMulticastActivateItemEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastActivateItemEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAbility::execActivateItemEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateItemEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemAbility::execGetDescription)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription_Implementation(Z_Param_Level);
		P_NATIVE_END;
	}
	struct ItemAbility_eventGetDescription_Parms
	{
		int32 Level;
		FString ReturnValue;
	};
	static FName NAME_UItemAbility_GetDescription = FName(TEXT("GetDescription"));
	FString UItemAbility::GetDescription(int32 Level)
	{
		ItemAbility_eventGetDescription_Parms Parms;
		Parms.Level=Level;
		ProcessEvent(FindFunctionChecked(NAME_UItemAbility_GetDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UItemAbility_MulticastActivateItemEffect = FName(TEXT("MulticastActivateItemEffect"));
	void UItemAbility::MulticastActivateItemEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemAbility_MulticastActivateItemEffect),NULL);
	}
	void UItemAbility::StaticRegisterNativesUItemAbility()
	{
		UClass* Class = UItemAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateItemEffect", &UItemAbility::execActivateItemEffect },
			{ "GetDescription", &UItemAbility::execGetDescription },
			{ "MulticastActivateItemEffect", &UItemAbility::execMulticastActivateItemEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemAbility_ActivateItemEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAbility_ActivateItemEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Item/ItemAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAbility_ActivateItemEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAbility, nullptr, "ActivateItemEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAbility_ActivateItemEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemAbility_ActivateItemEffect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemAbility_ActivateItemEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemAbility_ActivateItemEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAbility_GetDescription_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemAbility_GetDescription_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemAbility_eventGetDescription_Parms, Level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItemAbility_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemAbility_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemAbility_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAbility_GetDescription_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemAbility_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAbility_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Item/ItemAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAbility_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAbility, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UItemAbility_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAbility_GetDescription_Statics::PropPointers), sizeof(ItemAbility_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAbility_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemAbility_GetDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAbility_GetDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemAbility_eventGetDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemAbility_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemAbility_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Item/ItemAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemAbility, nullptr, "MulticastActivateItemEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemAbility);
	UClass* Z_Construct_UClass_UItemAbility_NoRegister()
	{
		return UItemAbility::StaticClass();
	}
	struct Z_Construct_UClass_UItemAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActivableItem_MetaData[];
#endif
		static void NewProp_bIsActivableItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActivableItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemAbility_ActivateItemEffect, "ActivateItemEffect" }, // 3711687784
		{ &Z_Construct_UFunction_UItemAbility_GetDescription, "GetDescription" }, // 1848631945
		{ &Z_Construct_UFunction_UItemAbility_MulticastActivateItemEffect, "MulticastActivateItemEffect" }, // 886804669
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Item/ItemAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Item/ItemAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAbility_Statics::NewProp_bIsActivableItem_MetaData[] = {
		{ "Category", "ItemAbility" },
		{ "ModuleRelativePath", "AbilitySystem/Item/ItemAbility.h" },
	};
#endif
	void Z_Construct_UClass_UItemAbility_Statics::NewProp_bIsActivableItem_SetBit(void* Obj)
	{
		((UItemAbility*)Obj)->bIsActivableItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemAbility_Statics::NewProp_bIsActivableItem = { "bIsActivableItem", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemAbility), &Z_Construct_UClass_UItemAbility_Statics::NewProp_bIsActivableItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemAbility_Statics::NewProp_bIsActivableItem_MetaData), Z_Construct_UClass_UItemAbility_Statics::NewProp_bIsActivableItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAbility_Statics::NewProp_ItemEffect_MetaData[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "AbilitySystem/Item/ItemAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemAbility_Statics::NewProp_ItemEffect = { "ItemEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemAbility, ItemEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemAbility_Statics::NewProp_ItemEffect_MetaData), Z_Construct_UClass_UItemAbility_Statics::NewProp_ItemEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemAbility_Statics::NewProp_bIsActivableItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemAbility_Statics::NewProp_ItemEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemAbility_Statics::ClassParams = {
		&UItemAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemAbility()
	{
		if (!Z_Registration_Info_UClass_UItemAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemAbility.OuterSingleton, Z_Construct_UClass_UItemAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemAbility.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UItemAbility>()
	{
		return UItemAbility::StaticClass();
	}
	UItemAbility::UItemAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemAbility);
	UItemAbility::~UItemAbility() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemAbility, UItemAbility::StaticClass, TEXT("UItemAbility"), &Z_Registration_Info_UClass_UItemAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemAbility), 1439028763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_540111366(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
