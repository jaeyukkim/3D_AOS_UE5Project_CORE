// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/CharacterBase/DefaultBase/MovementComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementComponentBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMovementComponentBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMovementComponentBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UMovementComponentBase::StaticRegisterNativesUMovementComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovementComponentBase);
	UClass* Z_Construct_UClass_UMovementComponentBase_NoRegister()
	{
		return UMovementComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovementComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovementComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponentBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponentBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/CharacterBase/DefaultBase/MovementComponentBase.h" },
		{ "ModuleRelativePath", "Character/CharacterBase/DefaultBase/MovementComponentBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovementComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementComponentBase_Statics::ClassParams = {
		&UMovementComponentBase::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementComponentBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovementComponentBase()
	{
		if (!Z_Registration_Info_UClass_UMovementComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementComponentBase.OuterSingleton, Z_Construct_UClass_UMovementComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovementComponentBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMovementComponentBase>()
	{
		return UMovementComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementComponentBase);
	UMovementComponentBase::~UMovementComponentBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_MovementComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_MovementComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovementComponentBase, UMovementComponentBase::StaticClass, TEXT("UMovementComponentBase"), &Z_Registration_Info_UClass_UMovementComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementComponentBase), 3148054771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_MovementComponentBase_h_382339012(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_MovementComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_CharacterBase_DefaultBase_MovementComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
