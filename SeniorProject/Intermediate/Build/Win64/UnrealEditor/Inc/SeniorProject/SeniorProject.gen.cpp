// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/SeniorProject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeniorProject() {}
// Cross Module References
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_ECharacterState();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_EMinionState();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_EAttackDirection();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
	static UEnum* ECharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_ECharacterState, Z_Construct_UPackage__Script_SeniorProject(), TEXT("ECharacterState"));
		}
		return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_ECharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::Enumerators[] = {
		{ "ECharacterState::PREINT", (int64)ECharacterState::PREINT },
		{ "ECharacterState::LOADING", (int64)ECharacterState::LOADING },
		{ "ECharacterState::READY", (int64)ECharacterState::READY },
		{ "ECharacterState::DEAD", (int64)ECharacterState::DEAD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DEAD.Name", "ECharacterState::DEAD" },
		{ "LOADING.Name", "ECharacterState::LOADING" },
		{ "ModuleRelativePath", "SeniorProject.h" },
		{ "PREINT.Name", "ECharacterState::PREINT" },
		{ "READY.Name", "ECharacterState::READY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"ECharacterState",
		"ECharacterState",
		Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeniorProject_ECharacterState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_SeniorProject_ECharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMinionState;
	static UEnum* EMinionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMinionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMinionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_EMinionState, Z_Construct_UPackage__Script_SeniorProject(), TEXT("EMinionState"));
		}
		return Z_Registration_Info_UEnum_EMinionState.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<EMinionState>()
	{
		return EMinionState_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_EMinionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_EMinionState_Statics::Enumerators[] = {
		{ "EMinionState::LOADING", (int64)EMinionState::LOADING },
		{ "EMinionState::READY", (int64)EMinionState::READY },
		{ "EMinionState::DEAD", (int64)EMinionState::DEAD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_EMinionState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DEAD.Name", "EMinionState::DEAD" },
		{ "LOADING.Name", "EMinionState::LOADING" },
		{ "ModuleRelativePath", "SeniorProject.h" },
		{ "READY.Name", "EMinionState::READY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_EMinionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"EMinionState",
		"EMinionState",
		Z_Construct_UEnum_SeniorProject_EMinionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EMinionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeniorProject_EMinionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EMinionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeniorProject_EMinionState()
	{
		if (!Z_Registration_Info_UEnum_EMinionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMinionState.InnerSingleton, Z_Construct_UEnum_SeniorProject_EMinionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMinionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackDirection;
	static UEnum* EAttackDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttackDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttackDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_EAttackDirection, Z_Construct_UPackage__Script_SeniorProject(), TEXT("EAttackDirection"));
		}
		return Z_Registration_Info_UEnum_EAttackDirection.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<EAttackDirection>()
	{
		return EAttackDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::Enumerators[] = {
		{ "EAttackDirection::Left", (int64)EAttackDirection::Left },
		{ "EAttackDirection::Right", (int64)EAttackDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EAttackDirection::Left" },
		{ "ModuleRelativePath", "SeniorProject.h" },
		{ "Right.Name", "EAttackDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"EAttackDirection",
		"EAttackDirection",
		Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeniorProject_EAttackDirection()
	{
		if (!Z_Registration_Info_UEnum_EAttackDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackDirection.InnerSingleton, Z_Construct_UEnum_SeniorProject_EAttackDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttackDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_SeniorProject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_SeniorProject_h_Statics::EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4177871130U) },
		{ EMinionState_StaticEnum, TEXT("EMinionState"), &Z_Registration_Info_UEnum_EMinionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3410177569U) },
		{ EAttackDirection_StaticEnum, TEXT("EAttackDirection"), &Z_Registration_Info_UEnum_EAttackDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3457443260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_SeniorProject_h_1313109256(TEXT("/Script/SeniorProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_SeniorProject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_SeniorProject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
