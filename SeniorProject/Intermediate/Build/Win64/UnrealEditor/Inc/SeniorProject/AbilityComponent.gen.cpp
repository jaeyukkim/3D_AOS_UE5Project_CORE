// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Player/AbilityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UAbilityComponent::StaticRegisterNativesUAbilityComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent);
	UClass* Z_Construct_UClass_UAbilityComponent_NoRegister()
	{
		return UAbilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KwangSwordMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KwangSwordMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KwangSword_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KwangSword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Q_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Q_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_Q_Throw_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability_Q_Throw_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_Q_Catch_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability_Q_Catch_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RMB_NoWep_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RMB_NoWep_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_RMB_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability_RMB_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_RMB_NoWep_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability_RMB_NoWep_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_R_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability_R_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_R_NoWep_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability_R_NoWep_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//Kwang \xc4\xb3?????? ??\xc5\xb3 ??????\xc6\xae\n" },
		{ "IncludePath", "Player/AbilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
		{ "ToolTip", "Kwang \xc4\xb3?????? ??\xc5\xb3 ??????\xc6\xae" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SwordMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SwordMeshComponent = { "SwordMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, SwordMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SwordMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SwordMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSwordMesh_MetaData[] = {
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSwordMesh = { "KwangSwordMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, KwangSwordMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSwordMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSwordMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSword_MetaData[] = {
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSword = { "KwangSword", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, KwangSword), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Q_Effect_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Q_Effect = { "Q_Effect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, Q_Effect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Q_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Q_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Throw_Montage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Throw_Montage = { "Ability_Q_Throw_Montage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, Ability_Q_Throw_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Throw_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Throw_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Catch_Montage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Catch_Montage = { "Ability_Q_Catch_Montage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, Ability_Q_Catch_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Catch_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Catch_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_RMB_NoWep_Effect_MetaData[] = {
		{ "Category", "Q_Ability" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_RMB_NoWep_Effect = { "RMB_NoWep_Effect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, RMB_NoWep_Effect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_RMB_NoWep_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_RMB_NoWep_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_Montage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_Montage = { "Ability_RMB_Montage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, Ability_RMB_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_NoWep_Montage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_NoWep_Montage = { "Ability_RMB_NoWep_Montage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, Ability_RMB_NoWep_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_NoWep_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_NoWep_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_Montage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_Montage = { "Ability_R_Montage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, Ability_R_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_NoWep_Montage_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Player/AbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_NoWep_Montage = { "Ability_R_NoWep_Montage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityComponent, Ability_R_NoWep_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_NoWep_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_NoWep_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_SwordMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSwordMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_KwangSword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Q_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Throw_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_Q_Catch_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_RMB_NoWep_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_RMB_NoWep_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Statics::NewProp_Ability_R_NoWep_Montage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_Statics::ClassParams = {
		&UAbilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityComponent()
	{
		if (!Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton, Z_Construct_UClass_UAbilityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityComponent.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAbilityComponent>()
	{
		return UAbilityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_AbilityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_AbilityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent, UAbilityComponent::StaticClass, TEXT("UAbilityComponent"), &Z_Registration_Info_UClass_UAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent), 461209461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_AbilityComponent_h_490411970(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_AbilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_AbilityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
