// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Abilities/ProjectileSpellBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileSpellBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UProjectileSpellBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UProjectileSpellBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileSpellBase::execSpawnProjectile)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AimLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile(Z_Param_Out_AimLocation);
		P_NATIVE_END;
	}
	void UProjectileSpellBase::StaticRegisterNativesUProjectileSpellBase()
	{
		UClass* Class = UProjectileSpellBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &UProjectileSpellBase::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics
	{
		struct ProjectileSpellBase_eventSpawnProjectile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_AimLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_AimLocation = { "AimLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpellBase_eventSpawnProjectile_Parms, AimLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_AimLocation_MetaData), Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_AimLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::NewProp_AimLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/ProjectileSpellBase.h" },
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
		{ &Z_Construct_UFunction_UProjectileSpellBase_SpawnProjectile, "SpawnProjectile" }, // 430835054
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/ProjectileSpellBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/ProjectileSpellBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance_MetaData[] = {
		{ "Category", "ProjectileSpellBase" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance = { "AbilityDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpellBase, AbilityDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance_MetaData), Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileSpellBase" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/ProjectileSpellBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpellBase, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileSpellBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_AbilityDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpellBase_Statics::NewProp_ProjectileClass,
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
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileSpellBase, UProjectileSpellBase::StaticClass, TEXT("UProjectileSpellBase"), &Z_Registration_Info_UClass_UProjectileSpellBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileSpellBase), 4206442695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_3790297376(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
