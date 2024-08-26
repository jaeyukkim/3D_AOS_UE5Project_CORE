// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/Abilities/MeleeAttackBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAttackBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDamageGameplayAbilityBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMeleeAttackBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMeleeAttackBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(UMeleeAttackBase::execGetAttackAnim)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Combo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetAttackAnim(Z_Param_Combo);
		P_NATIVE_END;
	}
	void UMeleeAttackBase::StaticRegisterNativesUMeleeAttackBase()
	{
		UClass* Class = UMeleeAttackBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackAnim", &UMeleeAttackBase::execGetAttackAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics
	{
		struct MeleeAttackBase_eventGetAttackAnim_Parms
		{
			int32 Combo;
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Combo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::NewProp_Combo = { "Combo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeAttackBase_eventGetAttackAnim_Parms, Combo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeAttackBase_eventGetAttackAnim_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::NewProp_Combo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/MeleeAttackBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeAttackBase, nullptr, "GetAttackAnim", nullptr, nullptr, Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::MeleeAttackBase_eventGetAttackAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::MeleeAttackBase_eventGetAttackAnim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeAttackBase);
	UClass* Z_Construct_UClass_UMeleeAttackBase_NoRegister()
	{
		return UMeleeAttackBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeAttackBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeAttackBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageGameplayAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeleeAttackBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeAttackBase_GetAttackAnim, "GetAttackAnim" }, // 3020608398
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttackBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/MeleeAttackBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/MeleeAttackBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeleeAttackBase_Statics::NewProp_AttackMontage_Inner = { "AttackMontage", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttackBase_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/MeleeAttackBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeleeAttackBase_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeAttackBase, AttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::NewProp_AttackMontage_MetaData), Z_Construct_UClass_UMeleeAttackBase_Statics::NewProp_AttackMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeAttackBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeAttackBase_Statics::NewProp_AttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeAttackBase_Statics::NewProp_AttackMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeAttackBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeAttackBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeAttackBase_Statics::ClassParams = {
		&UMeleeAttackBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeleeAttackBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeAttackBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttackBase_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_MeleeAttackBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_MeleeAttackBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeAttackBase, UMeleeAttackBase::StaticClass, TEXT("UMeleeAttackBase"), &Z_Registration_Info_UClass_UMeleeAttackBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeAttackBase), 2033825429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_MeleeAttackBase_h_688695885(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_MeleeAttackBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_MeleeAttackBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
