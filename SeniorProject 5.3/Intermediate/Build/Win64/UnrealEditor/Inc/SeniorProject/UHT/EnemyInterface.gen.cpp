// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Interface/EnemyInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UEnemyInterface();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(IEnemyInterface::execSetMinionTeamName)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewTeamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinionTeamName_Implementation(Z_Param_NewTeamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnemyInterface::execGetTeamName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetTeamName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnemyInterface::execSetPlayerTeamName)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerTeamName_Implementation(Z_Param_PS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnemyInterface::execGetCombatTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCombatTarget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnemyInterface::execSetCombatTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_InCombatTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCombatTarget_Implementation(Z_Param_InCombatTarget);
		P_NATIVE_END;
	}
	struct EnemyInterface_eventGetCombatTarget_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		EnemyInterface_eventGetCombatTarget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct EnemyInterface_eventGetTeamName_Parms
	{
		FGameplayTag ReturnValue;
	};
	struct EnemyInterface_eventSetCombatTarget_Parms
	{
		AActor* InCombatTarget;
	};
	struct EnemyInterface_eventSetMinionTeamName_Parms
	{
		FGameplayTag NewTeamName;
	};
	struct EnemyInterface_eventSetPlayerTeamName_Parms
	{
		APlayerState* PS;
	};
	AActor* IEnemyInterface::GetCombatTarget() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatTarget instead.");
		EnemyInterface_eventGetCombatTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	FGameplayTag IEnemyInterface::GetTeamName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTeamName instead.");
		EnemyInterface_eventGetTeamName_Parms Parms;
		return Parms.ReturnValue;
	}
	void IEnemyInterface::SetCombatTarget(AActor* InCombatTarget)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCombatTarget instead.");
	}
	void IEnemyInterface::SetMinionTeamName(FGameplayTag NewTeamName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMinionTeamName instead.");
	}
	void IEnemyInterface::SetPlayerTeamName(APlayerState* PS)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerTeamName instead.");
	}
	void UEnemyInterface::StaticRegisterNativesUEnemyInterface()
	{
		UClass* Class = UEnemyInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatTarget", &IEnemyInterface::execGetCombatTarget },
			{ "GetTeamName", &IEnemyInterface::execGetTeamName },
			{ "SetCombatTarget", &IEnemyInterface::execSetCombatTarget },
			{ "SetMinionTeamName", &IEnemyInterface::execSetMinionTeamName },
			{ "SetPlayerTeamName", &IEnemyInterface::execSetPlayerTeamName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyInterface_eventGetCombatTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/EnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyInterface, nullptr, "GetCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers), sizeof(EnemyInterface_eventGetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyInterface_eventGetCombatTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyInterface_GetCombatTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyInterface_GetCombatTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyInterface_eventGetTeamName_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/EnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyInterface, nullptr, "GetTeamName", nullptr, nullptr, Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::PropPointers), sizeof(EnemyInterface_eventGetTeamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyInterface_eventGetTeamName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyInterface_GetTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyInterface_GetTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCombatTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::NewProp_InCombatTarget = { "InCombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyInterface_eventSetCombatTarget_Parms, InCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::NewProp_InCombatTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/EnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyInterface, nullptr, "SetCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers), sizeof(EnemyInterface_eventSetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyInterface_eventSetCombatTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyInterface_SetCombatTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyInterface_SetCombatTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTeamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::NewProp_NewTeamName = { "NewTeamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyInterface_eventSetMinionTeamName_Parms, NewTeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::NewProp_NewTeamName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/EnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyInterface, nullptr, "SetMinionTeamName", nullptr, nullptr, Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::PropPointers), sizeof(EnemyInterface_eventSetMinionTeamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyInterface_eventSetMinionTeamName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::NewProp_PS = { "PS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyInterface_eventSetPlayerTeamName_Parms, PS), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::NewProp_PS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/EnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyInterface, nullptr, "SetPlayerTeamName", nullptr, nullptr, Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::PropPointers), sizeof(EnemyInterface_eventSetPlayerTeamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyInterface_eventSetPlayerTeamName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyInterface);
	UClass* Z_Construct_UClass_UEnemyInterface_NoRegister()
	{
		return UEnemyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyInterface_GetCombatTarget, "GetCombatTarget" }, // 1486420174
		{ &Z_Construct_UFunction_UEnemyInterface_GetTeamName, "GetTeamName" }, // 1730514696
		{ &Z_Construct_UFunction_UEnemyInterface_SetCombatTarget, "SetCombatTarget" }, // 231020459
		{ &Z_Construct_UFunction_UEnemyInterface_SetMinionTeamName, "SetMinionTeamName" }, // 2398461946
		{ &Z_Construct_UFunction_UEnemyInterface_SetPlayerTeamName, "SetPlayerTeamName" }, // 676417371
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/EnemyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyInterface_Statics::ClassParams = {
		&UEnemyInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyInterface()
	{
		if (!Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton, Z_Construct_UClass_UEnemyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UEnemyInterface>()
	{
		return UEnemyInterface::StaticClass();
	}
	UEnemyInterface::UEnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyInterface);
	UEnemyInterface::~UEnemyInterface() {}
	static FName NAME_UEnemyInterface_GetCombatTarget = FName(TEXT("GetCombatTarget"));
	AActor* IEnemyInterface::Execute_GetCombatTarget(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemyInterface::StaticClass()));
		EnemyInterface_eventGetCombatTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEnemyInterface_GetCombatTarget);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEnemyInterface*)(O->GetNativeInterfaceAddress(UEnemyInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCombatTarget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEnemyInterface_GetTeamName = FName(TEXT("GetTeamName"));
	FGameplayTag IEnemyInterface::Execute_GetTeamName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemyInterface::StaticClass()));
		EnemyInterface_eventGetTeamName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEnemyInterface_GetTeamName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IEnemyInterface*)(O->GetNativeInterfaceAddress(UEnemyInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTeamName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEnemyInterface_SetCombatTarget = FName(TEXT("SetCombatTarget"));
	void IEnemyInterface::Execute_SetCombatTarget(UObject* O, AActor* InCombatTarget)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemyInterface::StaticClass()));
		EnemyInterface_eventSetCombatTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEnemyInterface_SetCombatTarget);
		if (Func)
		{
			Parms.InCombatTarget=InCombatTarget;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEnemyInterface*)(O->GetNativeInterfaceAddress(UEnemyInterface::StaticClass())))
		{
			I->SetCombatTarget_Implementation(InCombatTarget);
		}
	}
	static FName NAME_UEnemyInterface_SetMinionTeamName = FName(TEXT("SetMinionTeamName"));
	void IEnemyInterface::Execute_SetMinionTeamName(UObject* O, FGameplayTag NewTeamName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemyInterface::StaticClass()));
		EnemyInterface_eventSetMinionTeamName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEnemyInterface_SetMinionTeamName);
		if (Func)
		{
			Parms.NewTeamName=NewTeamName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEnemyInterface*)(O->GetNativeInterfaceAddress(UEnemyInterface::StaticClass())))
		{
			I->SetMinionTeamName_Implementation(NewTeamName);
		}
	}
	static FName NAME_UEnemyInterface_SetPlayerTeamName = FName(TEXT("SetPlayerTeamName"));
	void IEnemyInterface::Execute_SetPlayerTeamName(UObject* O, APlayerState* PS)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemyInterface::StaticClass()));
		EnemyInterface_eventSetPlayerTeamName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEnemyInterface_SetPlayerTeamName);
		if (Func)
		{
			Parms.PS=PS;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEnemyInterface*)(O->GetNativeInterfaceAddress(UEnemyInterface::StaticClass())))
		{
			I->SetPlayerTeamName_Implementation(PS);
		}
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_EnemyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_EnemyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyInterface, UEnemyInterface::StaticClass, TEXT("UEnemyInterface"), &Z_Registration_Info_UClass_UEnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyInterface), 1288381000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_EnemyInterface_h_343536024(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_EnemyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_EnemyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
