// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Sound/CoreSoundManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSoundManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCoreSoundManager();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCoreSoundManager_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_EGamePlaySoundType();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePlaySoundType;
	static UEnum* EGamePlaySoundType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGamePlaySoundType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGamePlaySoundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_EGamePlaySoundType, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("EGamePlaySoundType"));
		}
		return Z_Registration_Info_UEnum_EGamePlaySoundType.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<EGamePlaySoundType>()
	{
		return EGamePlaySoundType_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::Enumerators[] = {
		{ "EGamePlaySoundType::SpawnMinion", (int64)EGamePlaySoundType::SpawnMinion },
		{ "EGamePlaySoundType::FirstBloodEnemy", (int64)EGamePlaySoundType::FirstBloodEnemy },
		{ "EGamePlaySoundType::FirstBloodAlly", (int64)EGamePlaySoundType::FirstBloodAlly },
		{ "EGamePlaySoundType::EnemyDie", (int64)EGamePlaySoundType::EnemyDie },
		{ "EGamePlaySoundType::AllyDie", (int64)EGamePlaySoundType::AllyDie },
		{ "EGamePlaySoundType::DoubleKill", (int64)EGamePlaySoundType::DoubleKill },
		{ "EGamePlaySoundType::TripleKill", (int64)EGamePlaySoundType::TripleKill },
		{ "EGamePlaySoundType::EnemyTowerDestroyed", (int64)EGamePlaySoundType::EnemyTowerDestroyed },
		{ "EGamePlaySoundType::AllyTowerDestroyed", (int64)EGamePlaySoundType::AllyTowerDestroyed },
		{ "EGamePlaySoundType::EnemyInhibitorDestroyed", (int64)EGamePlaySoundType::EnemyInhibitorDestroyed },
		{ "EGamePlaySoundType::AllyInhibitorDestroyed", (int64)EGamePlaySoundType::AllyInhibitorDestroyed },
		{ "EGamePlaySoundType::AllyTowerUnderAttack", (int64)EGamePlaySoundType::AllyTowerUnderAttack },
		{ "EGamePlaySoundType::AllyInhibitorUnderAttack", (int64)EGamePlaySoundType::AllyInhibitorUnderAttack },
		{ "EGamePlaySoundType::AllyCoreUnderAttack", (int64)EGamePlaySoundType::AllyCoreUnderAttack },
		{ "EGamePlaySoundType::Defeat", (int64)EGamePlaySoundType::Defeat },
		{ "EGamePlaySoundType::Victory", (int64)EGamePlaySoundType::Victory },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::Enum_MetaDataParams[] = {
		{ "AllyCoreUnderAttack.Comment", "/**\n * \n */" },
		{ "AllyCoreUnderAttack.Name", "EGamePlaySoundType::AllyCoreUnderAttack" },
		{ "AllyDie.Comment", "/**\n * \n */" },
		{ "AllyDie.Name", "EGamePlaySoundType::AllyDie" },
		{ "AllyInhibitorDestroyed.Comment", "/**\n * \n */" },
		{ "AllyInhibitorDestroyed.Name", "EGamePlaySoundType::AllyInhibitorDestroyed" },
		{ "AllyInhibitorUnderAttack.Comment", "/**\n * \n */" },
		{ "AllyInhibitorUnderAttack.Name", "EGamePlaySoundType::AllyInhibitorUnderAttack" },
		{ "AllyTowerDestroyed.Comment", "/**\n * \n */" },
		{ "AllyTowerDestroyed.Name", "EGamePlaySoundType::AllyTowerDestroyed" },
		{ "AllyTowerUnderAttack.Comment", "/**\n * \n */" },
		{ "AllyTowerUnderAttack.Name", "EGamePlaySoundType::AllyTowerUnderAttack" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Defeat.Comment", "/**\n * \n */" },
		{ "Defeat.Name", "EGamePlaySoundType::Defeat" },
		{ "DoubleKill.Comment", "/**\n * \n */" },
		{ "DoubleKill.Name", "EGamePlaySoundType::DoubleKill" },
		{ "EnemyDie.Comment", "/**\n * \n */" },
		{ "EnemyDie.Name", "EGamePlaySoundType::EnemyDie" },
		{ "EnemyInhibitorDestroyed.Comment", "/**\n * \n */" },
		{ "EnemyInhibitorDestroyed.Name", "EGamePlaySoundType::EnemyInhibitorDestroyed" },
		{ "EnemyTowerDestroyed.Comment", "/**\n * \n */" },
		{ "EnemyTowerDestroyed.Name", "EGamePlaySoundType::EnemyTowerDestroyed" },
		{ "FirstBloodAlly.Comment", "/**\n * \n */" },
		{ "FirstBloodAlly.Name", "EGamePlaySoundType::FirstBloodAlly" },
		{ "FirstBloodEnemy.Comment", "/**\n * \n */" },
		{ "FirstBloodEnemy.Name", "EGamePlaySoundType::FirstBloodEnemy" },
		{ "ModuleRelativePath", "Sound/CoreSoundManager.h" },
		{ "SpawnMinion.Comment", "/**\n * \n */" },
		{ "SpawnMinion.Name", "EGamePlaySoundType::SpawnMinion" },
		{ "TripleKill.Comment", "/**\n * \n */" },
		{ "TripleKill.Name", "EGamePlaySoundType::TripleKill" },
		{ "Victory.Comment", "/**\n * \n */" },
		{ "Victory.Name", "EGamePlaySoundType::Victory" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"EGamePlaySoundType",
		"EGamePlaySoundType",
		Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SeniorProject_EGamePlaySoundType()
	{
		if (!Z_Registration_Info_UEnum_EGamePlaySoundType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePlaySoundType.InnerSingleton, Z_Construct_UEnum_SeniorProject_EGamePlaySoundType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGamePlaySoundType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventPlayingAnnouncerSound_Parms
		{
			EGamePlaySoundType SoundType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::NewProp_SoundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::NewProp_SoundType = { "SoundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventPlayingAnnouncerSound_Parms, SoundType), Z_Construct_UEnum_SeniorProject_EGamePlaySoundType, METADATA_PARAMS(0, nullptr) }; // 2263371661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::NewProp_SoundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::NewProp_SoundType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Sound/CoreSoundManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "PlayingAnnouncerSound__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::_Script_SeniorProject_eventPlayingAnnouncerSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::_Script_SeniorProject_eventPlayingAnnouncerSound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_PlayingAnnouncerSound__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayingAnnouncerSound_DelegateWrapper(const FMulticastScriptDelegate& PlayingAnnouncerSound, EGamePlaySoundType SoundType)
{
	struct _Script_SeniorProject_eventPlayingAnnouncerSound_Parms
	{
		EGamePlaySoundType SoundType;
	};
	_Script_SeniorProject_eventPlayingAnnouncerSound_Parms Parms;
	Parms.SoundType=SoundType;
	PlayingAnnouncerSound.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCoreSoundManager::execPlayTeamSound)
	{
		P_GET_ENUM(EGamePlaySoundType,Z_Param_SoundType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTeamSound(EGamePlaySoundType(Z_Param_SoundType));
		P_NATIVE_END;
	}
	void UCoreSoundManager::StaticRegisterNativesUCoreSoundManager()
	{
		UClass* Class = UCoreSoundManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayTeamSound", &UCoreSoundManager::execPlayTeamSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics
	{
		struct CoreSoundManager_eventPlayTeamSound_Parms
		{
			EGamePlaySoundType SoundType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::NewProp_SoundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::NewProp_SoundType = { "SoundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreSoundManager_eventPlayTeamSound_Parms, SoundType), Z_Construct_UEnum_SeniorProject_EGamePlaySoundType, METADATA_PARAMS(0, nullptr) }; // 2263371661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::NewProp_SoundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::NewProp_SoundType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\x9e\xac\xec\x83\x9d \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Sound/CoreSoundManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\x9e\xac\xec\x83\x9d \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSoundManager, nullptr, "PlayTeamSound", nullptr, nullptr, Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::CoreSoundManager_eventPlayTeamSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::CoreSoundManager_eventPlayTeamSound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoreSoundManager);
	UClass* Z_Construct_UClass_UCoreSoundManager_NoRegister()
	{
		return UCoreSoundManager::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSoundManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GamePlaySounds_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GamePlaySounds_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GamePlaySounds_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamePlaySounds_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GamePlaySounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSoundManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreSoundManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreSoundManager_PlayTeamSound, "PlayTeamSound" }, // 3325970232
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSoundManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sound/CoreSoundManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Sound/CoreSoundManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_ValueProp = { "GamePlaySounds", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_Key_KeyProp = { "GamePlaySounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SeniorProject_EGamePlaySoundType, METADATA_PARAMS(0, nullptr) }; // 2263371661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_MetaData[] = {
		{ "Category", "CoreSoundManager" },
		{ "ModuleRelativePath", "Sound/CoreSoundManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds = { "GamePlaySounds", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreSoundManager, GamePlaySounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_MetaData), Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_MetaData) }; // 2263371661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSoundManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundManager_Statics::NewProp_GamePlaySounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSoundManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSoundManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreSoundManager_Statics::ClassParams = {
		&UCoreSoundManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreSoundManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreSoundManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCoreSoundManager()
	{
		if (!Z_Registration_Info_UClass_UCoreSoundManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreSoundManager.OuterSingleton, Z_Construct_UClass_UCoreSoundManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoreSoundManager.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UCoreSoundManager>()
	{
		return UCoreSoundManager::StaticClass();
	}
	UCoreSoundManager::UCoreSoundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSoundManager);
	UCoreSoundManager::~UCoreSoundManager() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_Statics::EnumInfo[] = {
		{ EGamePlaySoundType_StaticEnum, TEXT("EGamePlaySoundType"), &Z_Registration_Info_UEnum_EGamePlaySoundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2263371661U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoreSoundManager, UCoreSoundManager::StaticClass, TEXT("UCoreSoundManager"), &Z_Registration_Info_UClass_UCoreSoundManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreSoundManager), 839885678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_1618894009(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
