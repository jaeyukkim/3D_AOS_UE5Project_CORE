// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Interface/PlayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UPlayerInterface();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerInterface::execAddToXP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InXP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToXP_Implementation(Z_Param_InXP);
		P_NATIVE_END;
	}
	struct PlayerInterface_eventAddToXP_Parms
	{
		int32 InXP;
	};
	void IPlayerInterface::AddToXP(int32 InXP)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToXP instead.");
	}
	void UPlayerInterface::StaticRegisterNativesUPlayerInterface()
	{
		UClass* Class = UPlayerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToXP", &IPlayerInterface::execAddToXP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InXP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::NewProp_InXP = { "InXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToXP_Parms, InXP), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::NewProp_InXP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers), sizeof(PlayerInterface_eventAddToXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToXP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInterface);
	UClass* Z_Construct_UClass_UPlayerInterface_NoRegister()
	{
		return UPlayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInterface_AddToXP, "AddToXP" }, // 1711502672
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInterface_Statics::ClassParams = {
		&UPlayerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlayerInterface()
	{
		if (!Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton, Z_Construct_UClass_UPlayerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInterface.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UPlayerInterface>()
	{
		return UPlayerInterface::StaticClass();
	}
	UPlayerInterface::UPlayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInterface);
	UPlayerInterface::~UPlayerInterface() {}
	static FName NAME_UPlayerInterface_AddToXP = FName(TEXT("AddToXP"));
	void IPlayerInterface::Execute_AddToXP(UObject* O, int32 InXP)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToXP_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToXP);
		if (Func)
		{
			Parms.InXP=InXP;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToXP_Implementation(InXP);
		}
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInterface, UPlayerInterface::StaticClass, TEXT("UPlayerInterface"), &Z_Registration_Info_UClass_UPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInterface), 556950836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_4215781148(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
