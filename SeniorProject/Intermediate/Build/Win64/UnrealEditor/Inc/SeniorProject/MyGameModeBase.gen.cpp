// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/GameSetting/MyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyGameModeBase::execOpenPotal3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPotal3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execOpenPotal2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPotal2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execOpenPotal1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPotal1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameModeBase::execResetNumberOfMob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetNumberOfMob();
		P_NATIVE_END;
	}
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
		UClass* Class = AMyGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenPotal1", &AMyGameModeBase::execOpenPotal1 },
			{ "OpenPotal2", &AMyGameModeBase::execOpenPotal2 },
			{ "OpenPotal3", &AMyGameModeBase::execOpenPotal3 },
			{ "ResetNumberOfMob", &AMyGameModeBase::execResetNumberOfMob },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameModeBase_OpenPotal1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OpenPotal1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_OpenPotal1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "OpenPotal1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_OpenPotal1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OpenPotal1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_OpenPotal1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_OpenPotal1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_OpenPotal2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OpenPotal2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_OpenPotal2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "OpenPotal2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_OpenPotal2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OpenPotal2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_OpenPotal2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_OpenPotal2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_OpenPotal3_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_OpenPotal3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_OpenPotal3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "OpenPotal3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_OpenPotal3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_OpenPotal3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_OpenPotal3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_OpenPotal3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameModeBase, nullptr, "ResetNumberOfMob", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBase);
	UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
	{
		return AMyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonsterCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MonsterCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameModeBase_OpenPotal1, "OpenPotal1" }, // 2832209160
		{ &Z_Construct_UFunction_AMyGameModeBase_OpenPotal2, "OpenPotal2" }, // 1854438884
		{ &Z_Construct_UFunction_AMyGameModeBase_OpenPotal3, "OpenPotal3" }, // 78048961
		{ &Z_Construct_UFunction_AMyGameModeBase_ResetNumberOfMob, "ResetNumberOfMob" }, // 3752042721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterCount_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterCount = { "MonsterCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, MonsterCount), METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterCount_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AllActors_Inner = { "AllActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AllActors_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/GameSetting/MyGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AllActors = { "AllActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, AllActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AllActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AllActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_MonsterCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AllActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_AllActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
		&AMyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameModeBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMyGameModeBase>()
	{
		return AMyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBase, AMyGameModeBase::StaticClass, TEXT("AMyGameModeBase"), &Z_Registration_Info_UClass_AMyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBase), 2250570327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyGameModeBase_h_639779046(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_GameSetting_MyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
