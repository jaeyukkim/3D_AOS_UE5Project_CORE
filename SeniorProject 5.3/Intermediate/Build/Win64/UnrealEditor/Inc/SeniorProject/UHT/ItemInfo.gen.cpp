// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Data/ItemInfo.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemInfo();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemInfo_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FItemsInfo();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemsInfo;
class UScriptStruct* FItemsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemsInfo, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("ItemsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ItemsInfo.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FItemsInfo>()
{
	return FItemsInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemsInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemEffect_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemEffect_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemEffect_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ItemEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredGold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredGold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAbilityItem_MetaData[];
#endif
		static void NewProp_bIsAbilityItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAbilityItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemsInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemTag_MetaData[] = {
		{ "Category", "ItemsInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemTag = { "ItemTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemsInfo, ItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemTag_MetaData), Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect_ValueProp = { "ItemEffect", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect_Key_KeyProp = { "ItemEffect_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect_MetaData[] = {
		{ "Category", "ItemsInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect = { "ItemEffect", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemsInfo, ItemEffect), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect_MetaData), Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "ItemsInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemsInfo, ItemIcon), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemIcon_MetaData), Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemIcon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_RequiredGold_MetaData[] = {
		{ "Category", "ItemsInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_RequiredGold = { "RequiredGold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemsInfo, RequiredGold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_RequiredGold_MetaData), Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_RequiredGold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "ItemsInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemsInfo, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemDescription_MetaData), Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_bIsAbilityItem_MetaData[] = {
		{ "Category", "ItemsInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_bIsAbilityItem_SetBit(void* Obj)
	{
		((FItemsInfo*)Obj)->bIsAbilityItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_bIsAbilityItem = { "bIsAbilityItem", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemsInfo), &Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_bIsAbilityItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_bIsAbilityItem_MetaData), Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_bIsAbilityItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemAbility_MetaData[] = {
		{ "Category", "ItemsInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemAbility = { "ItemAbility", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemsInfo, ItemAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemAbility_MetaData), Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemAbility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_RequiredGold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_bIsAbilityItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemsInfo_Statics::NewProp_ItemAbility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"ItemsInfo",
		Z_Construct_UScriptStruct_FItemsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::PropPointers),
		sizeof(FItemsInfo),
		alignof(FItemsInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemsInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemsInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemsInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemsInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemsInfo.InnerSingleton, Z_Construct_UScriptStruct_FItemsInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemsInfo.InnerSingleton;
	}
	void UItemInfo::StaticRegisterNativesUItemInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemInfo);
	UClass* Z_Construct_UClass_UItemInfo_NoRegister()
	{
		return UItemInfo::StaticClass();
	}
	struct Z_Construct_UClass_UItemInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemInformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Data/ItemInfo.h" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemInformation_Inner = { "ItemInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemsInfo, METADATA_PARAMS(0, nullptr) }; // 1306869662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemInformation_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemInformation = { "ItemInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemInfo, ItemInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemInformation_MetaData), Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemInformation_MetaData) }; // 1306869662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemEffectClass_MetaData[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemEffectClass = { "ItemEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemInfo, ItemEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemEffectClass_MetaData), Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemEffectClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemInfo_Statics::NewProp_ItemEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemInfo_Statics::ClassParams = {
		&UItemInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemInfo()
	{
		if (!Z_Registration_Info_UClass_UItemInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemInfo.OuterSingleton, Z_Construct_UClass_UItemInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemInfo.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UItemInfo>()
	{
		return UItemInfo::StaticClass();
	}
	UItemInfo::UItemInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInfo);
	UItemInfo::~UItemInfo() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_Statics::ScriptStructInfo[] = {
		{ FItemsInfo::StaticStruct, Z_Construct_UScriptStruct_FItemsInfo_Statics::NewStructOps, TEXT("ItemsInfo"), &Z_Registration_Info_UScriptStruct_ItemsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemsInfo), 1306869662U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemInfo, UItemInfo::StaticClass, TEXT("UItemInfo"), &Z_Registration_Info_UClass_UItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemInfo), 2940615575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_728345998(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Data_ItemInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
