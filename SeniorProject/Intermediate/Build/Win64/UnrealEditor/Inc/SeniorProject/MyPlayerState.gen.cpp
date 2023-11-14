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
	void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerState);
	UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
	{
		return AMyPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		Z_Construct_UClass_AMyPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AMyPlayerState, AMyPlayerState::StaticClass, TEXT("AMyPlayerState"), &Z_Registration_Info_UClass_AMyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerState), 201710515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_2251988905(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_MyPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
