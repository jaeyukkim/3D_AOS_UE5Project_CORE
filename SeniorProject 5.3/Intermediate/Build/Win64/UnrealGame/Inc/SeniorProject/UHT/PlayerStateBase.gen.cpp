// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/CharacterBase/DefaultBase/PlayerStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	SENIORPROJECT_API UClass* Z_Construct_UClass_APlayerStateBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_APlayerStateBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void APlayerStateBase::StaticRegisterNativesAPlayerStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerStateBase);
	UClass* Z_Construct_UClass_APlayerStateBase_NoRegister()
	{
		return APlayerStateBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStateBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Character/CharacterBase/DefaultBase/PlayerStateBase.h" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/PlayerStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerStateBase_Statics::ClassParams = {
		&APlayerStateBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerStateBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlayerStateBase()
	{
		if (!Z_Registration_Info_UClass_APlayerStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerStateBase.OuterSingleton, Z_Construct_UClass_APlayerStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerStateBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<APlayerStateBase>()
	{
		return APlayerStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStateBase);
	APlayerStateBase::~APlayerStateBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_PlayerStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_PlayerStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerStateBase, APlayerStateBase::StaticClass, TEXT("APlayerStateBase"), &Z_Registration_Info_UClass_APlayerStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerStateBase), 658035715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_PlayerStateBase_h_657794130(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_PlayerStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_PlayerStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
