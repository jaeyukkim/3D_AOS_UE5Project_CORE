// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeniorProject_init() {}
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SeniorProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SeniorProject()
	{
		if (!Z_Registration_Info_UPackage__Script_SeniorProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_OnExpChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_OnHealtChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_OnMaxHealtChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_OnNextExpChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SeniorProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1FD0B7C9,
				0x7A180B4C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SeniorProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SeniorProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SeniorProject(Z_Construct_UPackage__Script_SeniorProject, TEXT("/Script/SeniorProject"), Z_Registration_Info_UPackage__Script_SeniorProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1FD0B7C9, 0x7A180B4C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
