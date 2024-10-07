// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemMenuWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDefaultWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemAbility_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidgetController_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FItemInformation();
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
	struct Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventBuyButtonChangedDelegate_Parms
		{
			bool bIsBuyable;
		};
		static void NewProp_bIsBuyable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBuyable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable_SetBit(void* Obj)
	{
		((_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms*)Obj)->bIsBuyable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable = { "bIsBuyable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms), &Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "BuyButtonChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBuyButtonChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BuyButtonChangedDelegate, bool bIsBuyable)
{
	struct _Script_SeniorProject_eventBuyButtonChangedDelegate_Parms
	{
		bool bIsBuyable;
	};
	_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms Parms;
	Parms.bIsBuyable=bIsBuyable ? true : false;
	BuyButtonChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemInformation;
class UScriptStruct* FItemInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInformation, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("ItemInformation"));
	}
	return Z_Registration_Info_UScriptStruct_ItemInformation.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FItemInformation>()
{
	return FItemInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredGold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredGold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemImg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemImg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBought_MetaData[];
#endif
		static void NewProp_bHasBought_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBought;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag = { "ItemTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_RequiredGold_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_RequiredGold = { "RequiredGold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, RequiredGold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_RequiredGold_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_RequiredGold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg = { "ItemImg", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemImg), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility = { "ItemAbility", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_SetBit(void* Obj)
	{
		((FItemInformation*)Obj)->bHasBought = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought = { "bHasBought", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemInformation), &Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_RequiredGold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"ItemInformation",
		Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers),
		sizeof(FItemInformation),
		alignof(FItemInformation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemInformation.InnerSingleton, Z_Construct_UScriptStruct_FItemInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemInformation.InnerSingleton;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execUpdateClickedItem)
	{
		P_GET_STRUCT(FItemInformation,Z_Param_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateClickedItem(Z_Param_Info);
		P_NATIVE_END;
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
			{ "UpdateClickedItem", &UItemMenuWidgetController::execUpdateClickedItem },
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
	struct Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics
	{
		struct ItemMenuWidgetController_eventUpdateClickedItem_Parms
		{
			FItemInformation Info;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMenuWidgetController_eventUpdateClickedItem_Parms, Info), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(0, nullptr) }; // 906796815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "UpdateClickedItem", nullptr, nullptr, Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::ItemMenuWidgetController_eventUpdateClickedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::ItemMenuWidgetController_eventUpdateClickedItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuyButtonChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BuyButtonChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GoldChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTagData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemTagData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickedItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickedItemInfo;
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
		{ &Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem, "UpdateClickedItem" }, // 2996230491
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate = { "BuyButtonChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, BuyButtonChangedDelegate), Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate_MetaData) }; // 3728400177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged = { "GoldChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, GoldChanged), Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData) }; // 4267651908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData = { "ItemTagData", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, ItemTagData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo = { "ClickedItemInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, ClickedItemInfo), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo_MetaData) }; // 906796815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo,
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ScriptStructInfo[] = {
		{ FItemInformation::StaticStruct, Z_Construct_UScriptStruct_FItemInformation_Statics::NewStructOps, TEXT("ItemInformation"), &Z_Registration_Info_UScriptStruct_ItemInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemInformation), 906796815U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemMenuWidgetController, UItemMenuWidgetController::StaticClass, TEXT("UItemMenuWidgetController"), &Z_Registration_Info_UClass_UItemMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemMenuWidgetController), 1300930998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_1371820951(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
