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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinionAIController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(AMinions::execHurt)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hurt(Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void AMinions::StaticRegisterNativesAMinions()
	{
		UClass* Class = AMinions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Hurt", &AMinions::execHurt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinions_Hurt_Statics
	{
		struct Minions_eventHurt_Parms
		{
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinions_Hurt_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minions_eventHurt_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinions_Hurt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinions_Hurt_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_Hurt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_Hurt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "Hurt", nullptr, nullptr, Z_Construct_UFunction_AMinions_Hurt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Hurt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinions_Hurt_Statics::Minions_eventHurt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Hurt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinions_Hurt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Hurt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMinions_Hurt_Statics::Minions_eventHurt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMinions_Hurt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_Hurt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinions);
	UClass* Z_Construct_UClass_AMinions_NoRegister()
	{
		return AMinions::StaticClass();
	}
	struct Z_Construct_UClass_AMinions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinions_Hurt, "Hurt" }, // 1746255290
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/Monster/Minions.h" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "Character/Enemy/Monster/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, AIController), Z_Construct_UClass_AMinionAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AIController_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_AIController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AIController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinions_Statics::ClassParams = {
		&AMinions::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AMinions, AMinions::StaticClass, TEXT("AMinions"), &Z_Registration_Info_UClass_AMinions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinions), 177370084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_119526581(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Monster_Minions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS