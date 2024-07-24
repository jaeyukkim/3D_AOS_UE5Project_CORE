// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/EnemyBase/AISetting/MinionAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinionAIController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinionAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(AMinionAIController::execOnSensed)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSensed(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	void AMinionAIController::StaticRegisterNativesAMinionAIController()
	{
		UClass* Class = AMinionAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSensed", &AMinionAIController::execOnSensed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinionAIController_OnSensed_Statics
	{
		struct MinionAIController_eventOnSensed_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinionAIController_eventOnSensed_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::NewProp_UpdatedActors_MetaData), Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::NewProp_UpdatedActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::NewProp_UpdatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase/AISetting/MinionAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinionAIController, nullptr, "OnSensed", nullptr, nullptr, Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::MinionAIController_eventOnSensed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::MinionAIController_eventOnSensed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMinionAIController_OnSensed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinionAIController_OnSensed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinionAIController);
	UClass* Z_Construct_UClass_AMinionAIController_NoRegister()
	{
		return AMinionAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMinionAIController_Statics
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
	UObject* (*const Z_Construct_UClass_AMinionAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinionAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinionAIController_OnSensed, "OnSensed" }, // 3794081151
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyBase/AISetting/MinionAIController.h" },
		{ "ModuleRelativePath", "EnemyBase/AISetting/MinionAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionAIController_Statics::NewProp_Sight_MetaData[] = {
		{ "Category", "MinionAIController" },
		{ "ModuleRelativePath", "EnemyBase/AISetting/MinionAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionAIController_Statics::NewProp_Sight = { "Sight", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinionAIController, Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::NewProp_Sight_MetaData), Z_Construct_UClass_AMinionAIController_Statics::NewProp_Sight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionAIController_Statics::NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "MinionAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase/AISetting/MinionAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinionAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::NewProp_AIPerceptionComponent_MetaData), Z_Construct_UClass_AMinionAIController_Statics::NewProp_AIPerceptionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionAIController_Statics::NewProp_BBMonster_MetaData[] = {
		{ "ModuleRelativePath", "EnemyBase/AISetting/MinionAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionAIController_Statics::NewProp_BBMonster = { "BBMonster", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinionAIController, BBMonster), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::NewProp_BBMonster_MetaData), Z_Construct_UClass_AMinionAIController_Statics::NewProp_BBMonster_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionAIController_Statics::NewProp_BTMonster_MetaData[] = {
		{ "ModuleRelativePath", "EnemyBase/AISetting/MinionAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionAIController_Statics::NewProp_BTMonster = { "BTMonster", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinionAIController, BTMonster), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::NewProp_BTMonster_MetaData), Z_Construct_UClass_AMinionAIController_Statics::NewProp_BTMonster_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionAIController_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "Category", "MinionAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase/AISetting/MinionAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinionAIController_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinionAIController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::NewProp_BlackboardComp_MetaData), Z_Construct_UClass_AMinionAIController_Statics::NewProp_BlackboardComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinionAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionAIController_Statics::NewProp_Sight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionAIController_Statics::NewProp_AIPerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionAIController_Statics::NewProp_BBMonster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionAIController_Statics::NewProp_BTMonster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinionAIController_Statics::NewProp_BlackboardComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinionAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinionAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinionAIController_Statics::ClassParams = {
		&AMinionAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinionAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinionAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinionAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMinionAIController()
	{
		if (!Z_Registration_Info_UClass_AMinionAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinionAIController.OuterSingleton, Z_Construct_UClass_AMinionAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinionAIController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMinionAIController>()
	{
		return AMinionAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinionAIController);
	AMinionAIController::~AMinionAIController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_AISetting_MinionAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_AISetting_MinionAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinionAIController, AMinionAIController::StaticClass, TEXT("AMinionAIController"), &Z_Registration_Info_UClass_AMinionAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinionAIController), 1873241635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_AISetting_MinionAIController_h_2230929433(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_AISetting_MinionAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_EnemyBase_AISetting_MinionAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
