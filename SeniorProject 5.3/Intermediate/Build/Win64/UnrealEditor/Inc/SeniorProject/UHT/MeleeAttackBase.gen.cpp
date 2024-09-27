// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Abilities/Attack/MeleeAttackBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAttackBase() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMeleeAttackBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMeleeAttackBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UMeleeAttackBase::StaticRegisterNativesUMeleeAttackBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeAttackBase);
	UClass* Z_Construct_UClass_UMeleeAttackBase_NoRegister()
	{
		return UMeleeAttackBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeAttackBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeAttackBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageGameplayAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttackBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/Attack/MeleeAttackBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/Attack/MeleeAttackBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeAttackBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeAttackBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeAttackBase_Statics::ClassParams = {
		&UMeleeAttackBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeAttackBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMeleeAttackBase()
	{
		if (!Z_Registration_Info_UClass_UMeleeAttackBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeAttackBase.OuterSingleton, Z_Construct_UClass_UMeleeAttackBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeleeAttackBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMeleeAttackBase>()
	{
		return UMeleeAttackBase::StaticClass();
	}
	UMeleeAttackBase::UMeleeAttackBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeAttackBase);
	UMeleeAttackBase::~UMeleeAttackBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Attack_MeleeAttackBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Attack_MeleeAttackBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeAttackBase, UMeleeAttackBase::StaticClass, TEXT("UMeleeAttackBase"), &Z_Registration_Info_UClass_UMeleeAttackBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeAttackBase), 4192847378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Attack_MeleeAttackBase_h_3137059590(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Attack_MeleeAttackBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_Attack_MeleeAttackBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
