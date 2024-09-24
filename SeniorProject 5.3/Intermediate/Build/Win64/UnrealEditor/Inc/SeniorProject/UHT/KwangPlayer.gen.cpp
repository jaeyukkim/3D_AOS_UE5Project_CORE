// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Player/KwangPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKwangPlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AAttackRangeDecal_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangPlayer();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangPlayer_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "SwordDestroyDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSwordDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SwordDestroyDelegate)
{
	SwordDestroyDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AKwangPlayer::execSetbActiveWep)
	{
		P_GET_UBOOL(Z_Param_nbActiveWep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbActiveWep(Z_Param_nbActiveWep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKwangPlayer::execGetbActiveWep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbActiveWep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKwangPlayer::execDestroySword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroySword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKwangPlayer::execSetSwordLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewSwordLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwordLocation(Z_Param_NewSwordLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKwangPlayer::execGetSwordLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSwordLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKwangPlayer::execHideMagicCircle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMagicCircle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKwangPlayer::execShowMagicCircle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMagicCircle();
		P_NATIVE_END;
	}
	void AKwangPlayer::StaticRegisterNativesAKwangPlayer()
	{
		UClass* Class = AKwangPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySword", &AKwangPlayer::execDestroySword },
			{ "GetbActiveWep", &AKwangPlayer::execGetbActiveWep },
			{ "GetSwordLocation", &AKwangPlayer::execGetSwordLocation },
			{ "HideMagicCircle", &AKwangPlayer::execHideMagicCircle },
			{ "SetbActiveWep", &AKwangPlayer::execSetbActiveWep },
			{ "SetSwordLocation", &AKwangPlayer::execSetSwordLocation },
			{ "ShowMagicCircle", &AKwangPlayer::execShowMagicCircle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKwangPlayer_DestroySword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_DestroySword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_DestroySword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "DestroySword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_DestroySword_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_DestroySword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AKwangPlayer_DestroySword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_DestroySword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics
	{
		struct KwangPlayer_eventGetbActiveWep_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KwangPlayer_eventGetbActiveWep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KwangPlayer_eventGetbActiveWep_Parms), &Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "GetbActiveWep", nullptr, nullptr, Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::KwangPlayer_eventGetbActiveWep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::KwangPlayer_eventGetbActiveWep_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AKwangPlayer_GetbActiveWep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_GetbActiveWep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics
	{
		struct KwangPlayer_eventGetSwordLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KwangPlayer_eventGetSwordLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "GetSwordLocation", nullptr, nullptr, Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::KwangPlayer_eventGetSwordLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::KwangPlayer_eventGetSwordLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AKwangPlayer_GetSwordLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_GetSwordLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKwangPlayer_HideMagicCircle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_HideMagicCircle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_HideMagicCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "HideMagicCircle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_HideMagicCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_HideMagicCircle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AKwangPlayer_HideMagicCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_HideMagicCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics
	{
		struct KwangPlayer_eventSetbActiveWep_Parms
		{
			bool nbActiveWep;
		};
		static void NewProp_nbActiveWep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_nbActiveWep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::NewProp_nbActiveWep_SetBit(void* Obj)
	{
		((KwangPlayer_eventSetbActiveWep_Parms*)Obj)->nbActiveWep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::NewProp_nbActiveWep = { "nbActiveWep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KwangPlayer_eventSetbActiveWep_Parms), &Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::NewProp_nbActiveWep_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::NewProp_nbActiveWep,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "SetbActiveWep", nullptr, nullptr, Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::KwangPlayer_eventSetbActiveWep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::KwangPlayer_eventSetbActiveWep_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AKwangPlayer_SetbActiveWep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_SetbActiveWep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics
	{
		struct KwangPlayer_eventSetSwordLocation_Parms
		{
			FVector NewSwordLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSwordLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::NewProp_NewSwordLocation = { "NewSwordLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KwangPlayer_eventSetSwordLocation_Parms, NewSwordLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::NewProp_NewSwordLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "SetSwordLocation", nullptr, nullptr, Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::KwangPlayer_eventSetSwordLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::KwangPlayer_eventSetSwordLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AKwangPlayer_SetSwordLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_SetSwordLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "ShowMagicCircle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKwangPlayer);
	UClass* Z_Construct_UClass_AKwangPlayer_NoRegister()
	{
		return AKwangPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AKwangPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordDestroyDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SwordDestroyDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicCircleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MagicCircleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicCircle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MagicCircle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActiveWep_MetaData[];
#endif
		static void NewProp_bActiveWep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveWep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwordLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwordLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKwangPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AKwangPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKwangPlayer_DestroySword, "DestroySword" }, // 2262212281
		{ &Z_Construct_UFunction_AKwangPlayer_GetbActiveWep, "GetbActiveWep" }, // 648848605
		{ &Z_Construct_UFunction_AKwangPlayer_GetSwordLocation, "GetSwordLocation" }, // 2177835756
		{ &Z_Construct_UFunction_AKwangPlayer_HideMagicCircle, "HideMagicCircle" }, // 731477362
		{ &Z_Construct_UFunction_AKwangPlayer_SetbActiveWep, "SetbActiveWep" }, // 2936395637
		{ &Z_Construct_UFunction_AKwangPlayer_SetSwordLocation, "SetSwordLocation" }, // 3046888464
		{ &Z_Construct_UFunction_AKwangPlayer_ShowMagicCircle, "ShowMagicCircle" }, // 843905814
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player/KwangPlayer.h" },
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordDestroyDelegate_MetaData[] = {
		{ "Category", "Kwang" },
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordDestroyDelegate = { "SwordDestroyDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKwangPlayer, SwordDestroyDelegate), Z_Construct_UDelegateFunction_SeniorProject_SwordDestroyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordDestroyDelegate_MetaData), Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordDestroyDelegate_MetaData) }; // 1767799252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircleClass_MetaData[] = {
		{ "Category", "Kwang" },
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircleClass = { "MagicCircleClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKwangPlayer, MagicCircleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAttackRangeDecal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircleClass_MetaData), Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircleClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircle_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircle = { "MagicCircle", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKwangPlayer, MagicCircle), Z_Construct_UClass_AAttackRangeDecal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircle_MetaData), Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep_SetBit(void* Obj)
	{
		((AKwangPlayer*)Obj)->bActiveWep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep = { "bActiveWep", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AKwangPlayer), &Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep_MetaData), Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordLocation_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordLocation = { "SwordLocation", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKwangPlayer, SwordLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordLocation_MetaData), Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKwangPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordDestroyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_SwordLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKwangPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKwangPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKwangPlayer_Statics::ClassParams = {
		&AKwangPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKwangPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AKwangPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AKwangPlayer()
	{
		if (!Z_Registration_Info_UClass_AKwangPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKwangPlayer.OuterSingleton, Z_Construct_UClass_AKwangPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKwangPlayer.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AKwangPlayer>()
	{
		return AKwangPlayer::StaticClass();
	}

	void AKwangPlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bActiveWep(TEXT("bActiveWep"));
		static const FName Name_SwordLocation(TEXT("SwordLocation"));

		const bool bIsValid = true
			&& Name_bActiveWep == ClassReps[(int32)ENetFields_Private::bActiveWep].Property->GetFName()
			&& Name_SwordLocation == ClassReps[(int32)ENetFields_Private::SwordLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AKwangPlayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKwangPlayer);
	AKwangPlayer::~AKwangPlayer() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKwangPlayer, AKwangPlayer::StaticClass, TEXT("AKwangPlayer"), &Z_Registration_Info_UClass_AKwangPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKwangPlayer), 509192300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_3012959797(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
