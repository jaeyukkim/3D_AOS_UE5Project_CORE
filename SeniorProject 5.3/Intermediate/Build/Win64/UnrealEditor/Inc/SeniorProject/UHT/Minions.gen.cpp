// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Enemy/Monster/Minions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinions() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AAIControllerBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_ECharacterClass();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AMinions::StaticRegisterNativesAMinions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinions);
	UClass* Z_Construct_UClass_AMinions_NoRegister()
	{
		return AMinions::StaticClass();
	}
	struct Z_Construct_UClass_AMinions_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CombatTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIControllerBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RedTeamMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueTeamMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/Monster/Minions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, OnHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_OnHealthChanged_MetaData) }; // 3734952828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, OnMaxHealthChanged), Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_OnMaxHealthChanged_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_OnMaxHealthChanged_MetaData) }; // 3734952828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Enemy Interface*/" },
#endif
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enemy Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Defalut Character Setting" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_Level_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Character Class Defaults" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, CharacterClass), Z_Construct_UEnum_SeniorProject_ECharacterClass, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_CharacterClass_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_CharacterClass_MetaData) }; // 2251408729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_HealthBar_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, HealthBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_HealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase_MetaData[] = {
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase = { "AIControllerBase", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, AIControllerBase), Z_Construct_UClass_AAIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh = { "RedTeamMesh", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, RedTeamMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh = { "BlueTeamMesh", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, BlueTeamMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinions_Statics::ClassParams = {
		&AMinions::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMinions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMinions()
	{
		if (!Z_Registration_Info_UClass_AMinions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinions.OuterSingleton, Z_Construct_UClass_AMinions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinions.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMinions>()
	{
		return AMinions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinions);
	AMinions::~AMinions() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinions, AMinions::StaticClass, TEXT("AMinions"), &Z_Registration_Info_UClass_AMinions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinions), 2201759053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_4283179924(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
