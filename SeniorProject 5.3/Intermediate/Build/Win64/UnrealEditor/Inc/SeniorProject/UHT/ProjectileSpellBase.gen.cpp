// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Abilities/Spell/ProjectileSpellBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileSpellBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AHomingProjectile_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UProjectileSpellBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UProjectileSpellBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileSpellBase::execSpawnProjectile)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectileTargetLocation);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SocketTag);
		P_GET_UBOOL(Z_Param_bOverridePitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile(Z_Param_Out_ProjectileTargetLocation,Z_Param_Out_SocketTag,Z_Param_bOverridePitch,Z_Param_PitchOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectileSpellBase::execSpawnProjectileAimLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AimLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectileAimLocation(Z_Param_Out_AimLocation);
		P_NATIVE_END;
	}
	void UProjectileSpellBase::StaticRegisterNativesUProjectileSpellBase()
	{
		UClass* Class = UProjectileSpellBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &UProjectileSpellBase::execSpawnProjectile },
			{ "SpawnProjectileAimLocation", &UProjectileSpellBase::execSpawnProjectileAimLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics
	{
		struct ProjectileSpellBase_eventSpawnProjectile_Parms
		{
			FVector ProjectileTargetLocation;
			FGameplayTag SocketTag;
			bool bOverridePitch;
			float PitchOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
		static void NewProp_bOverridePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation = { "ProjectileTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpellBase_eventSpawnProjectile_Parms, ProjectileTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData), Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpellBase_eventSpawnProjectile_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_SocketTag_MetaData), Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_SocketTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_bOverridePitch_SetBit(void* Obj)
	{
		((ProjectileSpellBase_eventSpawnProjectile_Parms*)Obj)->bOverridePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_bOverridePitch = { "bOverridePitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectileSpellBase_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_bOverridePitch_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_PitchOverride = { "PitchOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpellBase_eventSpawnProjectile_Parms, PitchOverride), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_SocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_bOverridePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_PitchOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpellBase, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::ProjectileSpellBase_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::ProjectileSpellBase_eventSpawnProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics
	{
		struct ProjectileSpellBase_eventSpawnProjectileAimLocation_Parms
		{
			FVector AimLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::NewProp_AimLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::NewProp_AimLocation = { "AimLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpellBase_eventSpawnProjectileAimLocation_Parms, AimLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::NewProp_AimLocation_MetaData), Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::NewProp_AimLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::NewProp_AimLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpellBase, nullptr, "SpawnProjectileAimLocation", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::ProjectileSpellBase_eventSpawnProjectileAimLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::ProjectileSpellBase_eventSpawnProjectileAimLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileSpellBase);
	UClass* Z_Construct_UClass_UProjectileSpellBase_NoRegister()
	{
		return UProjectileSpellBase::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileSpellBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomingProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HomingProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditiveSpawnLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileSpellBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageGameplayAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileSpellBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile, "SpawnProjectile" }, // 3826464700
		{ &Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectileAimLocation, "SpawnProjectileAimLocation" }, // 12335189
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance_MetaData[] = {
		{ "Category", "ProjectileSpellBase" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance = { "AbilityDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpellBase, AbilityDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance_MetaData), Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileSpellBase" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpellBase, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_HomingProjectileClass_MetaData[] = {
		{ "Category", "ProjectileSpellBase" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_HomingProjectileClass = { "HomingProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpellBase, HomingProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHomingProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_HomingProjectileClass_MetaData), Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_HomingProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AdditiveSpawnLocation_MetaData[] = {
		{ "Category", "ProjectileSpellBase" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Spell/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AdditiveSpawnLocation = { "AdditiveSpawnLocation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpellBase, AdditiveSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AdditiveSpawnLocation_MetaData), Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AdditiveSpawnLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileSpellBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_HomingProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AdditiveSpawnLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileSpellBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileSpellBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileSpellBase_Statics::ClassParams = {
		&UProjectileSpellBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectileSpellBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileSpellBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProjectileSpellBase()
	{
		if (!Z_Registration_Info_UClass_UProjectileSpellBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileSpellBase.OuterSingleton, Z_Construct_UClass_UProjectileSpellBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileSpellBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UProjectileSpellBase>()
	{
		return UProjectileSpellBase::StaticClass();
	}
	UProjectileSpellBase::UProjectileSpellBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileSpellBase);
	UProjectileSpellBase::~UProjectileSpellBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Spell_ProjectileSpellBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Spell_ProjectileSpellBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileSpellBase, UProjectileSpellBase::StaticClass, TEXT("UProjectileSpellBase"), &Z_Registration_Info_UClass_UProjectileSpellBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileSpellBase), 379677970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Spell_ProjectileSpellBase_h_373256157(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Spell_ProjectileSpellBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Spell_ProjectileSpellBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
