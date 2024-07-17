// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Player/MyCharacterStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterStatComponent() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterStatComponent_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyCharacterStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UMyCharacterStatComponent::StaticRegisterNativesUMyCharacterStatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCharacterStatComponent);
	UClass* Z_Construct_UClass_UMyCharacterStatComponent_NoRegister()
	{
		return UMyCharacterStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyCharacterStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerDead_MetaData[];
#endif
		static void NewProp_IsPlayerDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCharacterStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/MyCharacterStatComponent.h" },
		{ "ModuleRelativePath", "Player/MyCharacterStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPriveteAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Player/MyCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCharacterStatComponent, Level), METADATA_PARAMS(Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData[] = {
		{ "AllowPriveteAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Player/MyCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCharacterStatComponent, CurrentHp), METADATA_PARAMS(Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_IsPlayerDead_MetaData[] = {
		{ "AllowPriveteAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Player/MyCharacterStatComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_IsPlayerDead_SetBit(void* Obj)
	{
		((UMyCharacterStatComponent*)Obj)->IsPlayerDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_IsPlayerDead = { "IsPlayerDead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyCharacterStatComponent), &Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_IsPlayerDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_IsPlayerDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_IsPlayerDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyCharacterStatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_CurrentHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCharacterStatComponent_Statics::NewProp_IsPlayerDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCharacterStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCharacterStatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCharacterStatComponent_Statics::ClassParams = {
		&UMyCharacterStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyCharacterStatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterStatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCharacterStatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCharacterStatComponent()
	{
		if (!Z_Registration_Info_UClass_UMyCharacterStatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCharacterStatComponent.OuterSingleton, Z_Construct_UClass_UMyCharacterStatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyCharacterStatComponent.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMyCharacterStatComponent>()
	{
		return UMyCharacterStatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterStatComponent);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyCharacterStatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyCharacterStatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyCharacterStatComponent, UMyCharacterStatComponent::StaticClass, TEXT("UMyCharacterStatComponent"), &Z_Registration_Info_UClass_UMyCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCharacterStatComponent), 2639359007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyCharacterStatComponent_h_2242458469(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyCharacterStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
