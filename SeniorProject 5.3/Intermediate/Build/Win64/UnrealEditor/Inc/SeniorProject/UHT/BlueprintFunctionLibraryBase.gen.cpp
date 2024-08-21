// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFunctionLibraryBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBlueprintFunctionLibraryBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBlueprintFunctionLibraryBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_ECharacterClass();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execSetIsMagicalDamage)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsCriticalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintFunctionLibraryBase::SetIsMagicalDamage(Z_Param_Out_EffectContextHandle,Z_Param_bInIsCriticalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execIsMagicalDamage)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFunctionLibraryBase::IsMagicalDamage(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execSetIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsCriticalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintFunctionLibraryBase::SetIsCriticalHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsCriticalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFunctionLibraryBase::IsCriticalHit(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execGiveStartupAbilities)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintFunctionLibraryBase::GiveStartupAbilities(Z_Param_WorldContextObject,Z_Param_ASC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFunctionLibraryBase::execInitializeDefaultAttributes)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ECharacterClass,Z_Param_CharacterClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintFunctionLibraryBase::InitializeDefaultAttributes(Z_Param_WorldContextObject,ECharacterClass(Z_Param_CharacterClass),Z_Param_Level,Z_Param_ASC);
		P_NATIVE_END;
	}
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
			{ "GiveStartupAbilities", &UBlueprintFunctionLibraryBase::execGiveStartupAbilities },
			{ "InitializeDefaultAttributes", &UBlueprintFunctionLibraryBase::execInitializeDefaultAttributes },
			{ "IsCriticalHit", &UBlueprintFunctionLibraryBase::execIsCriticalHit },
			{ "IsMagicalDamage", &UBlueprintFunctionLibraryBase::execIsMagicalDamage },
			{ "SetIsCriticalHit", &UBlueprintFunctionLibraryBase::execSetIsCriticalHit },
			{ "SetIsMagicalDamage", &UBlueprintFunctionLibraryBase::execSetIsMagicalDamage },
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
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
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
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
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
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics
	{
		struct BlueprintFunctionLibraryBase_eventGiveStartupAbilities_Parms
		{
			const UObject* WorldContextObject;
			UAbilitySystemComponent* ASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventGiveStartupAbilities_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventGiveStartupAbilities_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_ASC_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::NewProp_ASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "GiveStartupAbilities", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::BlueprintFunctionLibraryBase_eventGiveStartupAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::BlueprintFunctionLibraryBase_eventGiveStartupAbilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics
	{
		struct BlueprintFunctionLibraryBase_eventInitializeDefaultAttributes_Parms
		{
			const UObject* WorldContextObject;
			ECharacterClass CharacterClass;
			float Level;
			UAbilitySystemComponent* ASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventInitializeDefaultAttributes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventInitializeDefaultAttributes_Parms, CharacterClass), Z_Construct_UEnum_SeniorProject_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 35008010
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventInitializeDefaultAttributes_Parms, Level), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventInitializeDefaultAttributes_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::NewProp_ASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "InitializeDefaultAttributes", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::BlueprintFunctionLibraryBase_eventInitializeDefaultAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::BlueprintFunctionLibraryBase_eventInitializeDefaultAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics
	{
		struct BlueprintFunctionLibraryBase_eventIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFunctionLibraryBase_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintFunctionLibraryBase_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "IsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::BlueprintFunctionLibraryBase_eventIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::BlueprintFunctionLibraryBase_eventIsCriticalHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics
	{
		struct BlueprintFunctionLibraryBase_eventIsMagicalDamage_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventIsMagicalDamage_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_EffectContextHandle_MetaData), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_EffectContextHandle_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFunctionLibraryBase_eventIsMagicalDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintFunctionLibraryBase_eventIsMagicalDamage_Parms), &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "IsMagicalDamage", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::BlueprintFunctionLibraryBase_eventIsMagicalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::BlueprintFunctionLibraryBase_eventIsMagicalDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics
	{
		struct BlueprintFunctionLibraryBase_eventSetIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsCriticalHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventSetIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	void Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit(void* Obj)
	{
		((BlueprintFunctionLibraryBase_eventSetIsCriticalHit_Parms*)Obj)->bInIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit = { "bInIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintFunctionLibraryBase_eventSetIsCriticalHit_Parms), &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "SetIsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::BlueprintFunctionLibraryBase_eventSetIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::BlueprintFunctionLibraryBase_eventSetIsCriticalHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics
	{
		struct BlueprintFunctionLibraryBase_eventSetIsMagicalDamage_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsCriticalHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintFunctionLibraryBase_eventSetIsMagicalDamage_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 3768813396
	void Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::NewProp_bInIsCriticalHit_SetBit(void* Obj)
	{
		((BlueprintFunctionLibraryBase_eventSetIsMagicalDamage_Parms*)Obj)->bInIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::NewProp_bInIsCriticalHit = { "bInIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintFunctionLibraryBase_eventSetIsMagicalDamage_Parms), &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::NewProp_bInIsCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::NewProp_bInIsCriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFunctionLibraryBase, nullptr, "SetIsMagicalDamage", nullptr, nullptr, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::BlueprintFunctionLibraryBase_eventSetIsMagicalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::BlueprintFunctionLibraryBase_eventSetIsMagicalDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 1192307670
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GetUAttributeMenuWidgetController, "GetUAttributeMenuWidgetController" }, // 1461303798
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_GiveStartupAbilities, "GiveStartupAbilities" }, // 2204042487
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_InitializeDefaultAttributes, "InitializeDefaultAttributes" }, // 1666154150
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsCriticalHit, "IsCriticalHit" }, // 1378247691
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_IsMagicalDamage, "IsMagicalDamage" }, // 3122701809
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsCriticalHit, "SetIsCriticalHit" }, // 2638286082
		{ &Z_Construct_UFunction_UBlueprintFunctionLibraryBase_SetIsMagicalDamage, "SetIsMagicalDamage" }, // 4099381600
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFunctionLibraryBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Global/BlueprintFunctionLibraryBase.h" },
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
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFunctionLibraryBase, UBlueprintFunctionLibraryBase::StaticClass, TEXT("UBlueprintFunctionLibraryBase"), &Z_Registration_Info_UClass_UBlueprintFunctionLibraryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFunctionLibraryBase), 2041176936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_1750412432(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Global_BlueprintFunctionLibraryBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
