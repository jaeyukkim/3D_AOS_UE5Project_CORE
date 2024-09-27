// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Abilities/GameplayAbilityBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayAbilityBase::execMulticastSpawnParticleAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(UParticleSystem,Z_Param_ParticleSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSpawnParticleAtLocation_Implementation(Z_Param_Location,Z_Param_ParticleSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbilityBase::execSpawnParticleAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(UParticleSystem,Z_Param_ParticleSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnParticleAtLocation(Z_Param_Location,Z_Param_ParticleSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbilityBase::execActivateCasting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateCasting();
		P_NATIVE_END;
	}
	struct GameplayAbilityBase_eventMulticastSpawnParticleAtLocation_Parms
	{
		FVector Location;
		UParticleSystem* ParticleSystem;
	};
	static FName NAME_UGameplayAbilityBase_MulticastSpawnParticleAtLocation = FName(TEXT("MulticastSpawnParticleAtLocation"));
	void UGameplayAbilityBase::MulticastSpawnParticleAtLocation(FVector Location, UParticleSystem* ParticleSystem)
	{
		GameplayAbilityBase_eventMulticastSpawnParticleAtLocation_Parms Parms;
		Parms.Location=Location;
		Parms.ParticleSystem=ParticleSystem;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayAbilityBase_MulticastSpawnParticleAtLocation),&Parms);
	}
	void UGameplayAbilityBase::StaticRegisterNativesUGameplayAbilityBase()
	{
		UClass* Class = UGameplayAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCasting", &UGameplayAbilityBase::execActivateCasting },
			{ "MulticastSpawnParticleAtLocation", &UGameplayAbilityBase::execMulticastSpawnParticleAtLocation },
			{ "SpawnParticleAtLocation", &UGameplayAbilityBase::execSpawnParticleAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbilityBase, nullptr, "ActivateCasting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayAbilityBase_eventMulticastSpawnParticleAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayAbilityBase_eventMulticastSpawnParticleAtLocation_Parms, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::NewProp_ParticleSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbilityBase, nullptr, "MulticastSpawnParticleAtLocation", nullptr, nullptr, Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::PropPointers), sizeof(GameplayAbilityBase_eventMulticastSpawnParticleAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(GameplayAbilityBase_eventMulticastSpawnParticleAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics
	{
		struct GameplayAbilityBase_eventSpawnParticleAtLocation_Parms
		{
			FVector Location;
			UParticleSystem* ParticleSystem;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayAbilityBase_eventSpawnParticleAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayAbilityBase_eventSpawnParticleAtLocation_Parms, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::NewProp_ParticleSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbilityBase, nullptr, "SpawnParticleAtLocation", nullptr, nullptr, Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::GameplayAbilityBase_eventSpawnParticleAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::GameplayAbilityBase_eventSpawnParticleAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilityBase);
	UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupInputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupInputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CastingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsNeedCasting_MetaData[];
#endif
		static void NewProp_IsNeedCasting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNeedCasting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastingEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CastingEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayAbilityBase_ActivateCasting, "ActivateCasting" }, // 1050350180
		{ &Z_Construct_UFunction_UGameplayAbilityBase_MulticastSpawnParticleAtLocation, "MulticastSpawnParticleAtLocation" }, // 1561194821
		{ &Z_Construct_UFunction_UGameplayAbilityBase_SpawnParticleAtLocation, "SpawnParticleAtLocation" }, // 2844806882
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag = { "StartupInputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilityBase, StartupInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag_MetaData), Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingTime_MetaData[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingTime = { "CastingTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilityBase, CastingTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingTime_MetaData), Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_IsNeedCasting_MetaData[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_IsNeedCasting_SetBit(void* Obj)
	{
		((UGameplayAbilityBase*)Obj)->IsNeedCasting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_IsNeedCasting = { "IsNeedCasting", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayAbilityBase), &Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_IsNeedCasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_IsNeedCasting_MetaData), Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_IsNeedCasting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingEffect_MetaData[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingEffect = { "CastingEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilityBase, CastingEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingEffect_MetaData), Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_StartupInputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_IsNeedCasting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_CastingEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams = {
		&UGameplayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameplayAbilityBase()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton, Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbilityBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UGameplayAbilityBase>()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	UGameplayAbilityBase::UGameplayAbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilityBase);
	UGameplayAbilityBase::~UGameplayAbilityBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_GameplayAbilityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_GameplayAbilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilityBase, UGameplayAbilityBase::StaticClass, TEXT("UGameplayAbilityBase"), &Z_Registration_Info_UClass_UGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilityBase), 3155302429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_GameplayAbilityBase_h_2526939601(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_GameplayAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_GameplayAbilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
