// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/DefaultBase/MinionAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionAnimInstance() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAnimInstanceBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMinionAnimInstance();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMinionAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UMinionAnimInstance::StaticRegisterNativesUMinionAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinionAnimInstance);
	UClass* Z_Construct_UClass_UMinionAnimInstance_NoRegister()
	{
		return UMinionAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMinionAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinionAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DefaultBase/MinionAnimInstance.h" },
		{ "ModuleRelativePath", "DefaultBase/MinionAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinionAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinionAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinionAnimInstance_Statics::ClassParams = {
		&UMinionAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinionAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinionAnimInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMinionAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMinionAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinionAnimInstance.OuterSingleton, Z_Construct_UClass_UMinionAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinionAnimInstance.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UMinionAnimInstance>()
	{
		return UMinionAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinionAnimInstance);
	UMinionAnimInstance::~UMinionAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_MinionAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_MinionAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinionAnimInstance, UMinionAnimInstance::StaticClass, TEXT("UMinionAnimInstance"), &Z_Registration_Info_UClass_UMinionAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinionAnimInstance), 1633154847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_MinionAnimInstance_h_700030351(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_MinionAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_DefaultBase_MinionAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
