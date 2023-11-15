// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/Player/MyPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerState() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayerState::execAddExp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IncomeExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddExp(Z_Param_IncomeExp);
		P_NATIVE_END;
	}
	void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
	{
		UClass* Class = AMyPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExp", &AMyPlayerState::execAddExp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayerState_AddExp_Statics
	{
		struct MyPlayerState_eventAddExp_Parms
		{
			int32 IncomeExp;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IncomeExp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::NewProp_IncomeExp = { "IncomeExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerState_eventAddExp_Parms, IncomeExp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyPlayerState_eventAddExp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyPlayerState_eventAddExp_Parms), &Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::NewProp_IncomeExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerState, nullptr, "AddExp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::MyPlayerState_eventAddExp_Parms), Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerState_AddExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerState_AddExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerState);
	UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
	{
		return AMyPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerState_AddExp, "AddExp" }, // 1959507023
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SeniorProject/Player/MyPlayerState.h" },
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerState, CharacterLevel), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Exp_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/MyPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerState, Exp), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Exp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_CharacterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_Exp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerState_Statics::ClassParams = {
		&AMyPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton, Z_Construct_UClass_AMyPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMyPlayerState>()
	{
		return AMyPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerState, AMyPlayerState::StaticClass, TEXT("AMyPlayerState"), &Z_Registration_Info_UClass_AMyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerState), 2177170901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_4292148527(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
