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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ASpawner();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameRuleInterface_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature();
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
	DEFINE_FUNCTION(ASpawner::execSpawnParticle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnParticle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawner::execMulticastLevelUpParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastLevelUpParticles_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawner::execSetIsSpawnSiegeMinion)
	{
		P_GET_UBOOL(Z_Param_IsSpawnSiegeMinion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSpawnSiegeMinion(Z_Param_IsSpawnSiegeMinion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawner::execGetIsSpawnSiegeMinion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSpawnSiegeMinion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawner::execSetIsSpawnSuperMinion)
	{
		P_GET_UBOOL(Z_Param_IsSpawnSuperMinion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSpawnSuperMinion(Z_Param_IsSpawnSuperMinion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawner::execGetIsSpawnSuperMinion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSpawnSuperMinion();
		P_NATIVE_END;
	}
	static FName NAME_ASpawner_MulticastLevelUpParticles = FName(TEXT("MulticastLevelUpParticles"));
	void ASpawner::MulticastLevelUpParticles() const
	{
		const_cast<ASpawner*>(this)->ProcessEvent(FindFunctionChecked(NAME_ASpawner_MulticastLevelUpParticles),NULL);
	}
	void ASpawner::StaticRegisterNativesASpawner()
	{
		UClass* Class = ASpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsSpawnSiegeMinion", &ASpawner::execGetIsSpawnSiegeMinion },
			{ "GetIsSpawnSuperMinion", &ASpawner::execGetIsSpawnSuperMinion },
			{ "MulticastLevelUpParticles", &ASpawner::execMulticastLevelUpParticles },
			{ "SetIsSpawnSiegeMinion", &ASpawner::execSetIsSpawnSiegeMinion },
			{ "SetIsSpawnSuperMinion", &ASpawner::execSetIsSpawnSuperMinion },
			{ "SpawnParticle", &ASpawner::execSpawnParticle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics
	{
		struct Spawner_eventGetIsSpawnSiegeMinion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Spawner_eventGetIsSpawnSiegeMinion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Spawner_eventGetIsSpawnSiegeMinion_Parms), &Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "GetIsSpawnSiegeMinion", nullptr, nullptr, Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::Spawner_eventGetIsSpawnSiegeMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::Spawner_eventGetIsSpawnSiegeMinion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics
	{
		struct Spawner_eventGetIsSpawnSuperMinion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Spawner_eventGetIsSpawnSuperMinion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Spawner_eventGetIsSpawnSuperMinion_Parms), &Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "GetIsSpawnSuperMinion", nullptr, nullptr, Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::Spawner_eventGetIsSpawnSuperMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::Spawner_eventGetIsSpawnSuperMinion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "MulticastLevelUpParticles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics
	{
		struct Spawner_eventSetIsSpawnSiegeMinion_Parms
		{
			bool IsSpawnSiegeMinion;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSpawnSiegeMinion_MetaData[];
#endif
		static void NewProp_IsSpawnSiegeMinion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSpawnSiegeMinion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::NewProp_IsSpawnSiegeMinion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::NewProp_IsSpawnSiegeMinion_SetBit(void* Obj)
	{
		((Spawner_eventSetIsSpawnSiegeMinion_Parms*)Obj)->IsSpawnSiegeMinion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::NewProp_IsSpawnSiegeMinion = { "IsSpawnSiegeMinion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Spawner_eventSetIsSpawnSiegeMinion_Parms), &Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::NewProp_IsSpawnSiegeMinion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::NewProp_IsSpawnSiegeMinion_MetaData), Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::NewProp_IsSpawnSiegeMinion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::NewProp_IsSpawnSiegeMinion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "SetIsSpawnSiegeMinion", nullptr, nullptr, Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::Spawner_eventSetIsSpawnSiegeMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::Spawner_eventSetIsSpawnSiegeMinion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics
	{
		struct Spawner_eventSetIsSpawnSuperMinion_Parms
		{
			bool IsSpawnSuperMinion;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSpawnSuperMinion_MetaData[];
#endif
		static void NewProp_IsSpawnSuperMinion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSpawnSuperMinion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::NewProp_IsSpawnSuperMinion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::NewProp_IsSpawnSuperMinion_SetBit(void* Obj)
	{
		((Spawner_eventSetIsSpawnSuperMinion_Parms*)Obj)->IsSpawnSuperMinion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::NewProp_IsSpawnSuperMinion = { "IsSpawnSuperMinion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Spawner_eventSetIsSpawnSuperMinion_Parms), &Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::NewProp_IsSpawnSuperMinion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::NewProp_IsSpawnSuperMinion_MetaData), Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::NewProp_IsSpawnSuperMinion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::NewProp_IsSpawnSuperMinion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "SetIsSpawnSuperMinion", nullptr, nullptr, Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::Spawner_eventSetIsSpawnSuperMinion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::Spawner_eventSetIsSpawnSuperMinion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawner_SpawnParticle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_SpawnParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_SpawnParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "SpawnParticle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SpawnParticle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_SpawnParticle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpawner_SpawnParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_SpawnParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner);
	UClass* Z_Construct_UClass_ASpawner_NoRegister()
	{
		return ASpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMinionSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinionSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnSuperMinion_MetaData[];
#endif
		static void NewProp_bSpawnSuperMinion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnSuperMinion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnSiegeMinion_MetaData[];
#endif
		static void NewProp_bSpawnSiegeMinion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnSiegeMinion;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_GetIsSpawnSiegeMinion, "GetIsSpawnSiegeMinion" }, // 482839198
		{ &Z_Construct_UFunction_ASpawner_GetIsSpawnSuperMinion, "GetIsSpawnSuperMinion" }, // 3727164573
		{ &Z_Construct_UFunction_ASpawner_MulticastLevelUpParticles, "MulticastLevelUpParticles" }, // 1354157521
		{ &Z_Construct_UFunction_ASpawner_SetIsSpawnSiegeMinion, "SetIsSpawnSiegeMinion" }, // 1080485258
		{ &Z_Construct_UFunction_ASpawner_SetIsSpawnSuperMinion, "SetIsSpawnSuperMinion" }, // 2969780732
		{ &Z_Construct_UFunction_ASpawner_SpawnParticle, "SpawnParticle" }, // 1072047775
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::FuncInfo) < 2048);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn = { "OnMinionSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, OnMinionSpawn), Z_Construct_UDelegateFunction_SeniorProject_OnMinionSpawnSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn_MetaData) }; // 2553520474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_ParticleComponent_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_ParticleComponent = { "ParticleComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, ParticleComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_ParticleComponent_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_ParticleComponent_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSuperMinion_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	void Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSuperMinion_SetBit(void* Obj)
	{
		((ASpawner*)Obj)->bSpawnSuperMinion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSuperMinion = { "bSpawnSuperMinion", nullptr, (EPropertyFlags)0x0040000000010021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawner), &Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSuperMinion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSuperMinion_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSuperMinion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSiegeMinion_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Actor/Gameplay/Spawner.h" },
	};
#endif
	void Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSiegeMinion_SetBit(void* Obj)
	{
		((ASpawner*)Obj)->bSpawnSiegeMinion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSiegeMinion = { "bSpawnSiegeMinion", nullptr, (EPropertyFlags)0x0040000000010021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawner), &Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSiegeMinion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSiegeMinion_MetaData), Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSiegeMinion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_OnMinionSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_ParticleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_TeamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSuperMinion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_bSpawnSiegeMinion,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASpawner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameRuleInterface_NoRegister, (int32)VTABLE_OFFSET(ASpawner, IGameRuleInterface), false },  // 1544812182
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
		FuncInfo,
		Z_Construct_UClass_ASpawner_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		static const FName Name_bSpawnSuperMinion(TEXT("bSpawnSuperMinion"));
		static const FName Name_bSpawnSiegeMinion(TEXT("bSpawnSiegeMinion"));

		const bool bIsValid = true
			&& Name_TeamName == ClassReps[(int32)ENetFields_Private::TeamName].Property->GetFName()
			&& Name_LineTag == ClassReps[(int32)ENetFields_Private::LineTag].Property->GetFName()
			&& Name_bSpawnSuperMinion == ClassReps[(int32)ENetFields_Private::bSpawnSuperMinion].Property->GetFName()
			&& Name_bSpawnSiegeMinion == ClassReps[(int32)ENetFields_Private::bSpawnSiegeMinion].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpawner"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
	ASpawner::~ASpawner() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 275662407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_265566353(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_Gameplay_Spawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
