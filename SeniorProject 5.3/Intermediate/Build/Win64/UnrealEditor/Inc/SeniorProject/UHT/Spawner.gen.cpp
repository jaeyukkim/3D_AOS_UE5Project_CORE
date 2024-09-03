// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Actor/Gameplay/Spawner.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ASpawner();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameRuleInterface_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnMinionSpawnSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMinionSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMinionSpawnSignature)
{
	OnMinionSpawnSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnSiegeMinionSpawnSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSiegeMinionSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSiegeMinionSpawnSignature)
{
	OnSiegeMinionSpawnSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnSuperMinionSpawnSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSuperMinionSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSuperMinionSpawnSignature)
{
	OnSuperMinionSpawnSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnNeutralityMonsterSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNeutralityMonsterSignature_DelegateWrapper(const FMulticastScriptDelegate& OnNeutralityMonsterSignature)
{
	OnNeutralityMonsterSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	void ASpawner::StaticRegisterNativesASpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner);
	UClass* Z_Construct_UClass_ASpawner_NoRegister()
	{
		return ASpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RangeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SiegeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SiegeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperMinionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SuperMinionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeutralityMonsterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NeutralityMonsterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMinionSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinionSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSiegeMinionSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSiegeMinionSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuperMinionSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuperMinionSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNeutralityMonsterSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNeutralityMonsterSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/Gameplay/Spawner.h" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_RangeClass_MetaData[] = {
		{ "Category", "Minion" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_RangeClass = { "RangeClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, RangeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_RangeClass_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_RangeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_MeleeClass_MetaData[] = {
		{ "Category", "Minion" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_MeleeClass = { "MeleeClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, MeleeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_MeleeClass_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_MeleeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_SiegeClass_MetaData[] = {
		{ "Category", "Minion" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SiegeClass = { "SiegeClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, SiegeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_SiegeClass_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_SiegeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_SuperMinionClass_MetaData[] = {
		{ "Category", "Minion" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SuperMinionClass = { "SuperMinionClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, SuperMinionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_SuperMinionClass_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_SuperMinionClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_NeutralityMonsterClass_MetaData[] = {
		{ "Category", "Minion" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_NeutralityMonsterClass = { "NeutralityMonsterClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, NeutralityMonsterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_NeutralityMonsterClass_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_NeutralityMonsterClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn = { "OnMinionSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, OnMinionSpawn), Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn_MetaData) }; // 2553520474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_OnSiegeMinionSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_OnSiegeMinionSpawn = { "OnSiegeMinionSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, OnSiegeMinionSpawn), Z_Construct_UDelegateFunction_SeniorProject_OnSiegeMinionSpawnSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_OnSiegeMinionSpawn_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_OnSiegeMinionSpawn_MetaData) }; // 3859486388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_OnSuperMinionSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_OnSuperMinionSpawn = { "OnSuperMinionSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, OnSuperMinionSpawn), Z_Construct_UDelegateFunction_SeniorProject_OnSuperMinionSpawnSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_OnSuperMinionSpawn_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_OnSuperMinionSpawn_MetaData) }; // 3085583451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_OnNeutralityMonsterSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_OnNeutralityMonsterSpawn = { "OnNeutralityMonsterSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, OnNeutralityMonsterSpawn), Z_Construct_UDelegateFunction_SeniorProject_OnNeutralityMonsterSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_OnNeutralityMonsterSpawn_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_OnNeutralityMonsterSpawn_MetaData) }; // 3174906081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_TeamName_MetaData[] = {
		{ "Category", "GameRule" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, TeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_TeamName_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_TeamName_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_LineTag_MetaData[] = {
		{ "Category", "GameRule" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_LineTag_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_LineTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_RangeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_MeleeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SiegeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SuperMinionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_NeutralityMonsterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_OnSiegeMinionSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_OnSuperMinionSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_OnNeutralityMonsterSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_TeamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_LineTag,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASpawner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameRuleInterface_NoRegister, (int32)VTABLE_OFFSET(ASpawner, IGameRuleInterface), false },  // 3371675016
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
		&ASpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawner_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawner()
	{
		if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ASpawner>()
	{
		return ASpawner::StaticClass();
	}

	void ASpawner::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TeamName(TEXT("TeamName"));
		static const FName Name_LineTag(TEXT("LineTag"));

		const bool bIsValid = true
			&& Name_TeamName == ClassReps[(int32)ENetFields_Private::TeamName].Property->GetFName()
			&& Name_LineTag == ClassReps[(int32)ENetFields_Private::LineTag].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpawner"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
	ASpawner::~ASpawner() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 1406683788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_2737314706(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
