// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Interface/PlayerInterface.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UPlayerInterface();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FItemInformation();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerInterface::execSortingItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortingItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execDeleteItem)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ItemInputTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteItem_Implementation(Z_Param_ItemInputTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetAllItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemInformation>*)Z_Param__Result=P_THIS->GetAllItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetEmptyItemSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetEmptyItemSlot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToItem)
	{
		P_GET_STRUCT_REF(FItemInformation,Z_Param_Out_InOwnedItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToItem_Implementation(Z_Param_Out_InOwnedItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToSpellPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSpellPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToSpellPoints_Implementation(Z_Param_InSpellPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToPlayerLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPlayerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToPlayerLevel_Implementation(Z_Param_InPlayerLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execLevelUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LevelUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToGold)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InGold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToGold_Implementation(Z_Param_InGold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execAddToXP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InXP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToXP_Implementation(Z_Param_InXP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetSpellPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSpellPoints_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetSpellPointsReward)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSpellPointsReward_Implementation(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetGold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGold_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execGetXP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetXP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerInterface::execFindLevelForXP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InXP);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindLevelForXP_Implementation(Z_Param_InXP);
		P_NATIVE_END;
	}
	struct PlayerInterface_eventAddToGold_Parms
	{
		int32 InGold;
	};
	struct PlayerInterface_eventAddToItem_Parms
	{
		FItemInformation InOwnedItem;
	};
	struct PlayerInterface_eventAddToPlayerLevel_Parms
	{
		int32 InPlayerLevel;
	};
	struct PlayerInterface_eventAddToSpellPoints_Parms
	{
		int32 InSpellPoints;
	};
	struct PlayerInterface_eventAddToXP_Parms
	{
		int32 InXP;
	};
	struct PlayerInterface_eventDeleteItem_Parms
	{
		FGameplayTag ItemInputTag;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventDeleteItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PlayerInterface_eventFindLevelForXP_Parms
	{
		int32 InXP;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventFindLevelForXP_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PlayerInterface_eventGetAllItem_Parms
	{
		TArray<FItemInformation> ReturnValue;
	};
	struct PlayerInterface_eventGetEmptyItemSlot_Parms
	{
		FGameplayTag ReturnValue;
	};
	struct PlayerInterface_eventGetGold_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetGold_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PlayerInterface_eventGetSpellPoints_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetSpellPoints_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PlayerInterface_eventGetSpellPointsReward_Parms
	{
		int32 Level;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetSpellPointsReward_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PlayerInterface_eventGetXP_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerInterface_eventGetXP_Parms()
			: ReturnValue(0)
		{
		}
	};
	void IPlayerInterface::AddToGold(int32 InGold)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToGold instead.");
	}
	void IPlayerInterface::AddToItem(FItemInformation const& InOwnedItem)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToItem instead.");
	}
	void IPlayerInterface::AddToPlayerLevel(int32 InPlayerLevel)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToPlayerLevel instead.");
	}
	void IPlayerInterface::AddToSpellPoints(int32 InSpellPoints)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToSpellPoints instead.");
	}
	void IPlayerInterface::AddToXP(int32 InXP)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToXP instead.");
	}
	bool IPlayerInterface::DeleteItem(FGameplayTag ItemInputTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeleteItem instead.");
		PlayerInterface_eventDeleteItem_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::FindLevelForXP(int32 InXP) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FindLevelForXP instead.");
		PlayerInterface_eventFindLevelForXP_Parms Parms;
		return Parms.ReturnValue;
	}
	TArray<FItemInformation> IPlayerInterface::GetAllItem()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAllItem instead.");
		PlayerInterface_eventGetAllItem_Parms Parms;
		return Parms.ReturnValue;
	}
	FGameplayTag IPlayerInterface::GetEmptyItemSlot()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEmptyItemSlot instead.");
		PlayerInterface_eventGetEmptyItemSlot_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::GetGold() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGold instead.");
		PlayerInterface_eventGetGold_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::GetSpellPoints() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpellPoints instead.");
		PlayerInterface_eventGetSpellPoints_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::GetSpellPointsReward(int32 Level) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpellPointsReward instead.");
		PlayerInterface_eventGetSpellPointsReward_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IPlayerInterface::GetXP() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetXP instead.");
		PlayerInterface_eventGetXP_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPlayerInterface::LevelUp()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LevelUp instead.");
	}
	void IPlayerInterface::SortingItem()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SortingItem instead.");
	}
	void UPlayerInterface::StaticRegisterNativesUPlayerInterface()
	{
		UClass* Class = UPlayerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToGold", &IPlayerInterface::execAddToGold },
			{ "AddToItem", &IPlayerInterface::execAddToItem },
			{ "AddToPlayerLevel", &IPlayerInterface::execAddToPlayerLevel },
			{ "AddToSpellPoints", &IPlayerInterface::execAddToSpellPoints },
			{ "AddToXP", &IPlayerInterface::execAddToXP },
			{ "DeleteItem", &IPlayerInterface::execDeleteItem },
			{ "FindLevelForXP", &IPlayerInterface::execFindLevelForXP },
			{ "GetAllItem", &IPlayerInterface::execGetAllItem },
			{ "GetEmptyItemSlot", &IPlayerInterface::execGetEmptyItemSlot },
			{ "GetGold", &IPlayerInterface::execGetGold },
			{ "GetSpellPoints", &IPlayerInterface::execGetSpellPoints },
			{ "GetSpellPointsReward", &IPlayerInterface::execGetSpellPointsReward },
			{ "GetXP", &IPlayerInterface::execGetXP },
			{ "LevelUp", &IPlayerInterface::execLevelUp },
			{ "SortingItem", &IPlayerInterface::execSortingItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InGold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::NewProp_InGold = { "InGold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToGold_Parms, InGold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::NewProp_InGold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToGold", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::PropPointers), sizeof(PlayerInterface_eventAddToGold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToGold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOwnedItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOwnedItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::NewProp_InOwnedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::NewProp_InOwnedItem = { "InOwnedItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToItem_Parms, InOwnedItem), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::NewProp_InOwnedItem_MetaData), Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::NewProp_InOwnedItem_MetaData) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::NewProp_InOwnedItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::PropPointers), sizeof(PlayerInterface_eventAddToItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPlayerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::NewProp_InPlayerLevel = { "InPlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToPlayerLevel_Parms, InPlayerLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::NewProp_InPlayerLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToPlayerLevel", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers), sizeof(PlayerInterface_eventAddToPlayerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToPlayerLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSpellPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::NewProp_InSpellPoints = { "InSpellPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventAddToSpellPoints_Parms, InSpellPoints), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::NewProp_InSpellPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "AddToSpellPoints", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers), sizeof(PlayerInterface_eventAddToSpellPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventAddToSpellPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInputTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::NewProp_ItemInputTag = { "ItemInputTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventDeleteItem_Parms, ItemInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerInterface_eventDeleteItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerInterface_eventDeleteItem_Parms), &Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::NewProp_ItemInputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "DeleteItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::PropPointers), sizeof(PlayerInterface_eventDeleteItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventDeleteItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_DeleteItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_DeleteItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InXP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_InXP = { "InXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventFindLevelForXP_Parms, InXP), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventFindLevelForXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_InXP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "FindLevelForXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers), sizeof(PlayerInterface_eventFindLevelForXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventFindLevelForXP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_FindLevelForXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_FindLevelForXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(0, nullptr) }; // 3158792783
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetAllItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetAllItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::PropPointers), sizeof(PlayerInterface_eventGetAllItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetAllItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetAllItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetAllItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetEmptyItemSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetEmptyItemSlot", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::PropPointers), sizeof(PlayerInterface_eventGetEmptyItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetEmptyItemSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetGold_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetGold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetGold", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::PropPointers), sizeof(PlayerInterface_eventGetGold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetGold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetSpellPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetSpellPoints", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::PropPointers), sizeof(PlayerInterface_eventGetSpellPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetSpellPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetSpellPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetSpellPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetSpellPointsReward_Parms, Level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetSpellPointsReward_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetSpellPointsReward", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers), sizeof(PlayerInterface_eventGetSpellPointsReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetSpellPointsReward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_GetXP_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInterface_eventGetXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "GetXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers), sizeof(PlayerInterface_eventGetXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerInterface_eventGetXP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerInterface_GetXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_GetXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "LevelUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerInterface_LevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_LevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInterface_SortingItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterface_SortingItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterface_SortingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterface, nullptr, "SortingItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterface_SortingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInterface_SortingItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerInterface_SortingItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInterface_SortingItem_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UPlayerInterface_AddToGold, "AddToGold" }, // 749253225
		{ &Z_Construct_UFunction_UPlayerInterface_AddToItem, "AddToItem" }, // 1500164824
		{ &Z_Construct_UFunction_UPlayerInterface_AddToPlayerLevel, "AddToPlayerLevel" }, // 1819615132
		{ &Z_Construct_UFunction_UPlayerInterface_AddToSpellPoints, "AddToSpellPoints" }, // 4156170471
		{ &Z_Construct_UFunction_UPlayerInterface_AddToXP, "AddToXP" }, // 1711502672
		{ &Z_Construct_UFunction_UPlayerInterface_DeleteItem, "DeleteItem" }, // 161747729
		{ &Z_Construct_UFunction_UPlayerInterface_FindLevelForXP, "FindLevelForXP" }, // 1067225906
		{ &Z_Construct_UFunction_UPlayerInterface_GetAllItem, "GetAllItem" }, // 2902232786
		{ &Z_Construct_UFunction_UPlayerInterface_GetEmptyItemSlot, "GetEmptyItemSlot" }, // 336718263
		{ &Z_Construct_UFunction_UPlayerInterface_GetGold, "GetGold" }, // 358061602
		{ &Z_Construct_UFunction_UPlayerInterface_GetSpellPoints, "GetSpellPoints" }, // 2299189408
		{ &Z_Construct_UFunction_UPlayerInterface_GetSpellPointsReward, "GetSpellPointsReward" }, // 815528352
		{ &Z_Construct_UFunction_UPlayerInterface_GetXP, "GetXP" }, // 3622837887
		{ &Z_Construct_UFunction_UPlayerInterface_LevelUp, "LevelUp" }, // 2471005374
		{ &Z_Construct_UFunction_UPlayerInterface_SortingItem, "SortingItem" }, // 2339663229
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
	static FName NAME_UPlayerInterface_AddToGold = FName(TEXT("AddToGold"));
	void IPlayerInterface::Execute_AddToGold(UObject* O, int32 InGold)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToGold_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToGold);
		if (Func)
		{
			Parms.InGold=InGold;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToGold_Implementation(InGold);
		}
	}
	static FName NAME_UPlayerInterface_AddToItem = FName(TEXT("AddToItem"));
	void IPlayerInterface::Execute_AddToItem(UObject* O, FItemInformation const& InOwnedItem)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToItem);
		if (Func)
		{
			Parms.InOwnedItem=InOwnedItem;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToItem_Implementation(InOwnedItem);
		}
	}
	static FName NAME_UPlayerInterface_AddToPlayerLevel = FName(TEXT("AddToPlayerLevel"));
	void IPlayerInterface::Execute_AddToPlayerLevel(UObject* O, int32 InPlayerLevel)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToPlayerLevel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToPlayerLevel);
		if (Func)
		{
			Parms.InPlayerLevel=InPlayerLevel;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToPlayerLevel_Implementation(InPlayerLevel);
		}
	}
	static FName NAME_UPlayerInterface_AddToSpellPoints = FName(TEXT("AddToSpellPoints"));
	void IPlayerInterface::Execute_AddToSpellPoints(UObject* O, int32 InSpellPoints)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventAddToSpellPoints_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_AddToSpellPoints);
		if (Func)
		{
			Parms.InSpellPoints=InSpellPoints;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->AddToSpellPoints_Implementation(InSpellPoints);
		}
	}
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
	static FName NAME_UPlayerInterface_DeleteItem = FName(TEXT("DeleteItem"));
	bool IPlayerInterface::Execute_DeleteItem(UObject* O, FGameplayTag ItemInputTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventDeleteItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_DeleteItem);
		if (Func)
		{
			Parms.ItemInputTag=ItemInputTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->DeleteItem_Implementation(ItemInputTag);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_FindLevelForXP = FName(TEXT("FindLevelForXP"));
	int32 IPlayerInterface::Execute_FindLevelForXP(const UObject* O, int32 InXP)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventFindLevelForXP_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_FindLevelForXP);
		if (Func)
		{
			Parms.InXP=InXP;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->FindLevelForXP_Implementation(InXP);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetAllItem = FName(TEXT("GetAllItem"));
	TArray<FItemInformation> IPlayerInterface::Execute_GetAllItem(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetAllItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetAllItem);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAllItem_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetEmptyItemSlot = FName(TEXT("GetEmptyItemSlot"));
	FGameplayTag IPlayerInterface::Execute_GetEmptyItemSlot(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetEmptyItemSlot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetEmptyItemSlot);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetEmptyItemSlot_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetGold = FName(TEXT("GetGold"));
	int32 IPlayerInterface::Execute_GetGold(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetGold_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetGold);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGold_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetSpellPoints = FName(TEXT("GetSpellPoints"));
	int32 IPlayerInterface::Execute_GetSpellPoints(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetSpellPoints_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetSpellPoints);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSpellPoints_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetSpellPointsReward = FName(TEXT("GetSpellPointsReward"));
	int32 IPlayerInterface::Execute_GetSpellPointsReward(const UObject* O, int32 Level)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetSpellPointsReward_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetSpellPointsReward);
		if (Func)
		{
			Parms.Level=Level;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSpellPointsReward_Implementation(Level);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_GetXP = FName(TEXT("GetXP"));
	int32 IPlayerInterface::Execute_GetXP(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		PlayerInterface_eventGetXP_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_GetXP);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetXP_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerInterface_LevelUp = FName(TEXT("LevelUp"));
	void IPlayerInterface::Execute_LevelUp(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_LevelUp);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->LevelUp_Implementation();
		}
	}
	static FName NAME_UPlayerInterface_SortingItem = FName(TEXT("SortingItem"));
	void IPlayerInterface::Execute_SortingItem(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerInterface_SortingItem);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerInterface*)(O->GetNativeInterfaceAddress(UPlayerInterface::StaticClass())))
		{
			I->SortingItem_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInterface, UPlayerInterface::StaticClass, TEXT("UPlayerInterface"), &Z_Registration_Info_UClass_UPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInterface), 1742384584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_1814707764(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_PlayerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
