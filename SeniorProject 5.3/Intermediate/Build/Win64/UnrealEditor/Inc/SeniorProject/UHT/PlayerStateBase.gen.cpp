// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/DefaultBase/PlayerStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_APlayerStateBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_APlayerStateBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(APlayerStateBase::execOnRep_Level)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Level(Z_Param_OldLevel);
		P_NATIVE_END;
	}
	void APlayerStateBase::StaticRegisterNativesAPlayerStateBase()
	{
		UClass* Class = APlayerStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Level", &APlayerStateBase::execOnRep_Level },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics
	{
		struct PlayerStateBase_eventOnRep_Level_Parms
		{
			int32 OldLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStateBase_eventOnRep_Level_Parms, OldLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::NewProp_OldLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultBase/PlayerStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerStateBase, nullptr, "OnRep_Level", nullptr, nullptr, Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::PlayerStateBase_eventOnRep_Level_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::PlayerStateBase_eventOnRep_Level_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerStateBase_OnRep_Level()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerStateBase_OnRep_Level_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerStateBase);
	UClass* Z_Construct_UClass_APlayerStateBase_NoRegister()
	{
		return APlayerStateBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerStateBase_OnRep_Level, "OnRep_Level" }, // 2924086207
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStateBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DefaultBase/PlayerStateBase.h" },
		{ "ModuleRelativePath", "DefaultBase/PlayerStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "PlayerStateBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultBase/PlayerStateBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerStateBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultBase/PlayerStateBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerStateBase, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStateBase_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Defalut Character Setting" },
		{ "ModuleRelativePath", "DefaultBase/PlayerStateBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerStateBase_Statics::NewProp_Level = { "Level", "OnRep_Level", (EPropertyFlags)0x0020080100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerStateBase, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::NewProp_Level_MetaData), Z_Construct_UClass_APlayerStateBase_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStateBase_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStateBase_Statics::NewProp_Level,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerStateBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerStateBase, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerStateBase, ICombatInterface), false },  // 444699132
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerStateBase_Statics::ClassParams = {
		&APlayerStateBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerStateBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerStateBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerStateBase()
	{
		if (!Z_Registration_Info_UClass_APlayerStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerStateBase.OuterSingleton, Z_Construct_UClass_APlayerStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerStateBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<APlayerStateBase>()
	{
		return APlayerStateBase::StaticClass();
	}

	void APlayerStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Level(TEXT("Level"));

		const bool bIsValid = true
			&& Name_Level == ClassReps[(int32)ENetFields_Private::Level].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerStateBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStateBase);
	APlayerStateBase::~APlayerStateBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_PlayerStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_PlayerStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerStateBase, APlayerStateBase::StaticClass, TEXT("APlayerStateBase"), &Z_Registration_Info_UClass_APlayerStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerStateBase), 2715896747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_PlayerStateBase_h_579818446(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_PlayerStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_PlayerStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
