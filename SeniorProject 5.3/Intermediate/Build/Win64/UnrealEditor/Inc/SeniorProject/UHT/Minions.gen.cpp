// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinions() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AAIControllerBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(AMinions::execStunned)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_CallbackTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stunned(Z_Param_CallbackTag,Z_Param_NewCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinions::execOnRep_Mesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinions::execSetIsMeshChanged)
	{
		P_GET_UBOOL(Z_Param_IsMeshChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsMeshChanged(Z_Param_IsMeshChanged);
		P_NATIVE_END;
	}
	void AMinions::StaticRegisterNativesAMinions()
	{
		UClass* Class = AMinions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Mesh", &AMinions::execOnRep_Mesh },
			{ "SetIsMeshChanged", &AMinions::execSetIsMeshChanged },
			{ "Stunned", &AMinions::execStunned },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinions_OnRep_Mesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_OnRep_Mesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_OnRep_Mesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "OnRep_Mesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_OnRep_Mesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinions_OnRep_Mesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMinions_OnRep_Mesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_OnRep_Mesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics
	{
		struct Minions_eventSetIsMeshChanged_Parms
		{
			bool IsMeshChanged;
		};
		static void NewProp_IsMeshChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMeshChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::NewProp_IsMeshChanged_SetBit(void* Obj)
	{
		((Minions_eventSetIsMeshChanged_Parms*)Obj)->IsMeshChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::NewProp_IsMeshChanged = { "IsMeshChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Minions_eventSetIsMeshChanged_Parms), &Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::NewProp_IsMeshChanged_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::NewProp_IsMeshChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "SetIsMeshChanged", nullptr, nullptr, Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::Minions_eventSetIsMeshChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::Minions_eventSetIsMeshChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMinions_SetIsMeshChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_SetIsMeshChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinions_Stunned_Statics
	{
		struct Minions_eventStunned_Parms
		{
			FGameplayTag CallbackTag;
			int32 NewCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CallbackTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_Stunned_Statics::NewProp_CallbackTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinions_Stunned_Statics::NewProp_CallbackTag = { "CallbackTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minions_eventStunned_Parms, CallbackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Stunned_Statics::NewProp_CallbackTag_MetaData), Z_Construct_UFunction_AMinions_Stunned_Statics::NewProp_CallbackTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinions_Stunned_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Minions_eventStunned_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinions_Stunned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinions_Stunned_Statics::NewProp_CallbackTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinions_Stunned_Statics::NewProp_NewCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinions_Stunned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinions_Stunned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinions, nullptr, "Stunned", nullptr, nullptr, Z_Construct_UFunction_AMinions_Stunned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Stunned_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinions_Stunned_Statics::Minions_eventStunned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Stunned_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinions_Stunned_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinions_Stunned_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMinions_Stunned_Statics::Minions_eventStunned_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMinions_Stunned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinions_Stunned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinions);
	UClass* Z_Construct_UClass_AMinions_NoRegister()
	{
		return AMinions::StaticClass();
	}
	struct Z_Construct_UClass_AMinions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CombatTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealthBarWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIControllerBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RedTeamMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueTeamMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMeshChanged_MetaData[];
#endif
		static void NewProp_bIsMeshChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMeshChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinions_OnRep_Mesh, "OnRep_Mesh" }, // 2060533894
		{ &Z_Construct_UFunction_AMinions_SetIsMeshChanged, "SetIsMeshChanged" }, // 3185324206
		{ &Z_Construct_UFunction_AMinions_Stunned, "Stunned" }, // 3100060050
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/Minions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_TeamName_MetaData[] = {
		{ "Category", "GameRule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* end GameplayInterface */" },
#endif
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end GameplayInterface" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, TeamName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_TeamName_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_TeamName_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_LineTag_MetaData[] = {
		{ "Category", "GameRule" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, LineTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_LineTag_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_LineTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Defalut Character Setting" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_Level_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_Level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_HealthBarWidget_MetaData[] = {
		{ "Category", "HealthBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, HealthBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_HealthBarWidget_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_HealthBarWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase_MetaData[] = {
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase = { "AIControllerBase", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, AIControllerBase), Z_Construct_UClass_AAIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh = { "RedTeamMesh", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, RedTeamMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh = { "BlueTeamMesh", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinions, BlueTeamMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinions_Statics::NewProp_bIsMeshChanged_MetaData[] = {
		{ "ModuleRelativePath", "Character/Enemy/Minions.h" },
	};
#endif
	void Z_Construct_UClass_AMinions_Statics::NewProp_bIsMeshChanged_SetBit(void* Obj)
	{
		((AMinions*)Obj)->bIsMeshChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinions_Statics::NewProp_bIsMeshChanged = { "bIsMeshChanged", "OnRep_Mesh", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMinions), &Z_Construct_UClass_AMinions_Statics::NewProp_bIsMeshChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::NewProp_bIsMeshChanged_MetaData), Z_Construct_UClass_AMinions_Statics::NewProp_bIsMeshChanged_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_LifeSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_CombatTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_TeamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_LineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_HealthBarWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_AIControllerBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_RedTeamMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_BlueTeamMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinions_Statics::NewProp_bIsMeshChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinions_Statics::ClassParams = {
		&AMinions::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinions_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinions_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMinions()
	{
		if (!Z_Registration_Info_UClass_AMinions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinions.OuterSingleton, Z_Construct_UClass_AMinions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinions.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMinions>()
	{
		return AMinions::StaticClass();
	}

	void AMinions::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TeamName(TEXT("TeamName"));
		static const FName Name_LineTag(TEXT("LineTag"));
		static const FName Name_bIsMeshChanged(TEXT("bIsMeshChanged"));

		const bool bIsValid = true
			&& Name_TeamName == ClassReps[(int32)ENetFields_Private::TeamName].Property->GetFName()
			&& Name_LineTag == ClassReps[(int32)ENetFields_Private::LineTag].Property->GetFName()
			&& Name_bIsMeshChanged == ClassReps[(int32)ENetFields_Private::bIsMeshChanged].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMinions"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinions);
	AMinions::~AMinions() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Minions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Minions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinions, AMinions::StaticClass, TEXT("AMinions"), &Z_Registration_Info_UClass_AMinions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinions), 1608782183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Minions_h_2272931320(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Minions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Enemy_Minions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
