// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDefaultWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidget_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References

static_assert(std::is_polymorphic<FUIWidgetRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUIWidgetRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIWidgetRow;
class UScriptStruct* FUIWidgetRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIWidgetRow, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("UIWidgetRow"));
	}
	return Z_Registration_Info_UScriptStruct_UIWidgetRow.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FUIWidgetRow>()
{
	return FUIWidgetRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIWidgetRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MessageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIWidgetRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag = { "MessageTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MessageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget = { "MessageWidget", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, MessageWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "UIWidgetRow" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIWidgetRow, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_MessageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewProp_Image,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIWidgetRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UIWidgetRow",
		Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers),
		sizeof(FUIWidgetRow),
		alignof(FUIWidgetRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIWidgetRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIWidgetRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUIWidgetRow()
	{
		if (!Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIWidgetRow.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnAttributeChangedSignature_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventOnAttributeChangedSignature_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnAttributeChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnAttributeChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnAttributeChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttributeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignature, float NewValue)
{
	struct _Script_SeniorProject_eventOnAttributeChangedSignature_Parms
	{
		float NewValue;
	};
	_Script_SeniorProject_eventOnAttributeChangedSignature_Parms Parms;
	Parms.NewValue=NewValue;
	OnAttributeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
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
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
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
	struct Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventOnAdditionalAttributeMenuSignature_Parms
		{
			bool bIsActive;
		};
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((_Script_SeniorProject_eventOnAdditionalAttributeMenuSignature_Parms*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SeniorProject_eventOnAdditionalAttributeMenuSignature_Parms), &Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnAdditionalAttributeMenuSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnAdditionalAttributeMenuSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::_Script_SeniorProject_eventOnAdditionalAttributeMenuSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAdditionalAttributeMenuSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAdditionalAttributeMenuSignature, bool bIsActive)
{
	struct _Script_SeniorProject_eventOnAdditionalAttributeMenuSignature_Parms
	{
		bool bIsActive;
	};
	_Script_SeniorProject_eventOnAdditionalAttributeMenuSignature_Parms Parms;
	Parms.bIsActive=bIsActive ? true : false;
	OnAdditionalAttributeMenuSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventMessageWidgetRowSignature_Parms
		{
			FUIWidgetRow Row;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventMessageWidgetRowSignature_Parms, Row), Z_Construct_UScriptStruct_FUIWidgetRow, METADATA_PARAMS(0, nullptr) }; // 4119755805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::NewProp_Row,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "MessageWidgetRowSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::_Script_SeniorProject_eventMessageWidgetRowSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::_Script_SeniorProject_eventMessageWidgetRowSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMessageWidgetRowSignature_DelegateWrapper(const FMulticastScriptDelegate& MessageWidgetRowSignature, FUIWidgetRow Row)
{
	struct _Script_SeniorProject_eventMessageWidgetRowSignature_Parms
	{
		FUIWidgetRow Row;
	};
	_Script_SeniorProject_eventMessageWidgetRowSignature_Parms Parms;
	Parms.Row=Row;
	MessageWidgetRowSignature.ProcessMulticastDelegate<UObject>(&Parms);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxManaChanged;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAdditionalAttributeMenu_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAdditionalAttributeMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetRowDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageWidgetRowDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidgetDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MessageWidgetDataTable;
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
		{ "IncludePath", "UI/OverlayWidget/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnManaChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged = { "OnMaxManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxManaChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged = { "OnExpChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnExpChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged = { "OnNextExpChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnNextExpChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged_MetaData) }; // 4281681911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged = { "OnLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnLevelChanged), Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged_MetaData) }; // 1970276967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnAdditionalAttributeMenu_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnAdditionalAttributeMenu = { "OnAdditionalAttributeMenu", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnAdditionalAttributeMenu), Z_Construct_UDelegateFunction_SeniorProject_OnAdditionalAttributeMenuSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnAdditionalAttributeMenu_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnAdditionalAttributeMenu_MetaData) }; // 2047045282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate_MetaData[] = {
		{ "Category", "GAS|Messages" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate = { "MessageWidgetRowDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, MessageWidgetRowDelegate), Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate_MetaData) }; // 1438003612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable_MetaData[] = {
		{ "Category", "Widget Data" },
		{ "ModuleRelativePath", "UI/OverlayWidget/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable = { "MessageWidgetDataTable", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, MessageWidgetDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable_MetaData), Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnExpChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnNextExpChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnLevelChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnAdditionalAttributeMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetRowDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_MessageWidgetDataTable,
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
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_Statics::ScriptStructInfo[] = {
		{ FUIWidgetRow::StaticStruct, Z_Construct_UScriptStruct_FUIWidgetRow_Statics::NewStructOps, TEXT("UIWidgetRow"), &Z_Registration_Info_UScriptStruct_UIWidgetRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIWidgetRow), 4119755805U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 4061846062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_234276675(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_OverlayWidget_OverlayWidgetController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
