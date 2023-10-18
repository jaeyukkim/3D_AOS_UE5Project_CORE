// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/Player/SwordTraceLoop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordTraceLoop() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_USwordTraceLoop_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_USwordTraceLoop();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMinions_NoRegister();
// End Cross Module References
	void USwordTraceLoop::StaticRegisterNativesUSwordTraceLoop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwordTraceLoop);
	UClass* Z_Construct_UClass_USwordTraceLoop_NoRegister()
	{
		return USwordTraceLoop::StaticClass();
	}
	struct Z_Construct_UClass_USwordTraceLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Minion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwordTraceLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwordTraceLoop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ???\xdd\xbd? ???? ?????\xcf\xb8? ?\xc7\xb0\xdd\xb9??? ?\xd7\xb8?\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SeniorProject/Player/SwordTraceLoop.h" },
		{ "ModuleRelativePath", "SeniorProject/Player/SwordTraceLoop.h" },
		{ "ToolTip", "???\xdd\xbd? ???? ?????\xcf\xb8? ?\xc7\xb0\xdd\xb9??? ?\xd7\xb8?" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/SwordTraceLoop.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwordTraceLoop, Character), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Minion_MetaData[] = {
		{ "ModuleRelativePath", "SeniorProject/Player/SwordTraceLoop.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Minion = { "Minion", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwordTraceLoop, Minion), Z_Construct_UClass_AMinions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Minion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Minion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwordTraceLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwordTraceLoop_Statics::NewProp_Minion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwordTraceLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwordTraceLoop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwordTraceLoop_Statics::ClassParams = {
		&USwordTraceLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USwordTraceLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USwordTraceLoop_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USwordTraceLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwordTraceLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwordTraceLoop()
	{
		if (!Z_Registration_Info_UClass_USwordTraceLoop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwordTraceLoop.OuterSingleton, Z_Construct_UClass_USwordTraceLoop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwordTraceLoop.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<USwordTraceLoop>()
	{
		return USwordTraceLoop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwordTraceLoop);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_SwordTraceLoop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_SwordTraceLoop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwordTraceLoop, USwordTraceLoop::StaticClass, TEXT("USwordTraceLoop"), &Z_Registration_Info_UClass_USwordTraceLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwordTraceLoop), 3850696358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_SwordTraceLoop_h_3244561935(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_SwordTraceLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_Player_SwordTraceLoop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
