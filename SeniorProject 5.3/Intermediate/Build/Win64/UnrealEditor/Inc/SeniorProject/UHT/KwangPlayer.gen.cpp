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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AAttackRangeDecal_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangPlayer();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AKwangPlayer_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
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
	DEFINE_FUNCTION(AKwangPlayer::execDestroySwordObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroySwordObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKwangPlayer::execSetSwordObject)
	{
		P_GET_OBJECT(AActor,Z_Param_Sword);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwordObject(Z_Param_Sword);
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
			{ "DestroySwordObject", &AKwangPlayer::execDestroySwordObject },
			{ "GetbActiveWep", &AKwangPlayer::execGetbActiveWep },
			{ "HideMagicCircle", &AKwangPlayer::execHideMagicCircle },
			{ "SetbActiveWep", &AKwangPlayer::execSetbActiveWep },
			{ "SetSwordObject", &AKwangPlayer::execSetSwordObject },
			{ "ShowMagicCircle", &AKwangPlayer::execShowMagicCircle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKwangPlayer_DestroySwordObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_DestroySwordObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_DestroySwordObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "DestroySwordObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_DestroySwordObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_DestroySwordObject_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AKwangPlayer_DestroySwordObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_DestroySwordObject_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics
	{
		struct KwangPlayer_eventSetSwordObject_Parms
		{
			AActor* Sword;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sword;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::NewProp_Sword = { "Sword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KwangPlayer_eventSetSwordObject_Parms, Sword), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::NewProp_Sword,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKwangPlayer, nullptr, "SetSwordObject", nullptr, nullptr, Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::KwangPlayer_eventSetSwordObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::KwangPlayer_eventSetSwordObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AKwangPlayer_SetSwordObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKwangPlayer_SetSwordObject_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicCircleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MagicCircleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicCircle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MagicCircle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KwangSword_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_KwangSword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActiveWep_MetaData[];
#endif
		static void NewProp_bActiveWep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveWep;
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
		{ &Z_Construct_UFunction_AKwangPlayer_DestroySwordObject, "DestroySwordObject" }, // 699485913
		{ &Z_Construct_UFunction_AKwangPlayer_GetbActiveWep, "GetbActiveWep" }, // 648848605
		{ &Z_Construct_UFunction_AKwangPlayer_HideMagicCircle, "HideMagicCircle" }, // 731477362
		{ &Z_Construct_UFunction_AKwangPlayer_SetbActiveWep, "SetbActiveWep" }, // 2936395637
		{ &Z_Construct_UFunction_AKwangPlayer_SetSwordObject, "SetSwordObject" }, // 360044051
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangPlayer_Statics::NewProp_KwangSword_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/KwangPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AKwangPlayer_Statics::NewProp_KwangSword = { "KwangSword", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKwangPlayer, KwangSword), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKwangPlayer_Statics::NewProp_KwangSword_MetaData), Z_Construct_UClass_AKwangPlayer_Statics::NewProp_KwangSword_MetaData) };
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKwangPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_MagicCircle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_KwangSword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKwangPlayer_Statics::NewProp_bActiveWep,
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

		const bool bIsValid = true
			&& Name_bActiveWep == ClassReps[(int32)ENetFields_Private::bActiveWep].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AKwangPlayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKwangPlayer);
	AKwangPlayer::~AKwangPlayer() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKwangPlayer, AKwangPlayer::StaticClass, TEXT("AKwangPlayer"), &Z_Registration_Info_UClass_AKwangPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKwangPlayer), 1577719297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_3101735851(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_KwangPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
