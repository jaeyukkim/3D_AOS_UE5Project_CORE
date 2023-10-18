// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/AISetting/KwangAiController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKwangAiController() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangAiController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangAiController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AKwangAiController::execOnSensed)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSensed(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	void AKwangAiController::StaticRegisterNativesAKwangAiController()
	{
		UClass* Class = AKwangAiController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSensed", &AKwangAiController::execOnSensed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKwangAiController_OnSensed_Statics
	{
		struct KwangAiController_eventOnSensed_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KwangAiController_eventOnSensed_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::NewProp_UpdatedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::NewProp_UpdatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/AISetting/KwangAiController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangAiController, nullptr, "OnSensed", nullptr, nullptr, sizeof(Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::KwangAiController_eventOnSensed_Parms), Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKwangAiController_OnSensed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangAiController_OnSensed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKwangAiController);
	UClass* Z_Construct_UClass_AKwangAiController_NoRegister()
	{
		return AKwangAiController::StaticClass();
	}
	struct Z_Construct_UClass_AKwangAiController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBMonster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BBMonster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BTMonster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BTMonster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKwangAiController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKwangAiController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKwangAiController_OnSensed, "OnSensed" }, // 169078587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangAiController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SeniorProject/AISetting/KwangAiController.h" },
		{ "ModuleRelativePath", "SeniorProject/AISetting/KwangAiController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangAiController_Statics::NewProp_Sight_MetaData[] = {
		{ "Category", "KwangAiController" },
		{ "ModuleRelativePath", "SeniorProject/AISetting/KwangAiController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKwangAiController_Statics::NewProp_Sight = { "Sight", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKwangAiController, Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKwangAiController_Statics::NewProp_Sight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKwangAiController_Statics::NewProp_Sight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangAiController_Statics::NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "KwangAiController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/AISetting/KwangAiController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKwangAiController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKwangAiController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKwangAiController_Statics::NewProp_AIPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKwangAiController_Statics::NewProp_AIPerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangAiController_Statics::NewProp_BBMonster_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/AISetting/KwangAiController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKwangAiController_Statics::NewProp_BBMonster = { "BBMonster", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKwangAiController, BBMonster), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKwangAiController_Statics::NewProp_BBMonster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKwangAiController_Statics::NewProp_BBMonster_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangAiController_Statics::NewProp_BTMonster_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/AISetting/KwangAiController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKwangAiController_Statics::NewProp_BTMonster = { "BTMonster", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKwangAiController, BTMonster), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKwangAiController_Statics::NewProp_BTMonster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKwangAiController_Statics::NewProp_BTMonster_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangAiController_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "Category", "KwangAiController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeniorProject/AISetting/KwangAiController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKwangAiController_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKwangAiController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKwangAiController_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKwangAiController_Statics::NewProp_BlackboardComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKwangAiController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangAiController_Statics::NewProp_Sight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangAiController_Statics::NewProp_AIPerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangAiController_Statics::NewProp_BBMonster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangAiController_Statics::NewProp_BTMonster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangAiController_Statics::NewProp_BlackboardComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKwangAiController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKwangAiController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKwangAiController_Statics::ClassParams = {
		&AKwangAiController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKwangAiController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKwangAiController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKwangAiController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKwangAiController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKwangAiController()
	{
		if (!Z_Registration_Info_UClass_AKwangAiController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKwangAiController.OuterSingleton, Z_Construct_UClass_AKwangAiController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKwangAiController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AKwangAiController>()
	{
		return AKwangAiController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKwangAiController);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_KwangAiController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_KwangAiController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKwangAiController, AKwangAiController::StaticClass, TEXT("AKwangAiController"), &Z_Registration_Info_UClass_AKwangAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKwangAiController), 1089181717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_KwangAiController_h_1854316077(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_KwangAiController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_KwangAiController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
