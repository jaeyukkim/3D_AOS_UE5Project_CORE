// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTypesBase() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectBaseContext();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayEffectBaseContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FGameplayEffectBaseContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext;
class UScriptStruct* FGameplayEffectBaseContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectBaseContext, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("GameplayEffectBaseContext"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FGameplayEffectBaseContext>()
{
	return FGameplayEffectBaseContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[];
#endif
		static void NewProp_bIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMagicalDamage_MetaData[];
#endif
		static void NewProp_bIsMagicalDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMagicalDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectBaseContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
	{
		((FGameplayEffectBaseContext*)Obj)->bIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectBaseContext), &Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_MetaData), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTypesBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_SetBit(void* Obj)
	{
		((FGameplayEffectBaseContext*)Obj)->bIsMagicalDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage = { "bIsMagicalDamage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayEffectBaseContext), &Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_MetaData), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsCriticalHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewProp_bIsMagicalDamage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"GameplayEffectBaseContext",
		Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers),
		sizeof(FGameplayEffectBaseContext),
		alignof(FGameplayEffectBaseContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectBaseContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics::ScriptStructInfo[] = {
		{ FGameplayEffectBaseContext::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectBaseContext_Statics::NewStructOps, TEXT("GameplayEffectBaseContext"), &Z_Registration_Info_UScriptStruct_GameplayEffectBaseContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectBaseContext), 602069209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_3015503892(TEXT("/Script/SeniorProject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTypesBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
