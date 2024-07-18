// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Character/Player/Character/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ACharacterBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilityComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(AMyCharacter::execHurt)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hurt(Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execPlayFootSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFootSound();
		P_NATIVE_END;
	}
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
		UClass* Class = AMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Hurt", &AMyCharacter::execHurt },
			{ "PlayFootSound", &AMyCharacter::execPlayFootSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacter_Hurt_Statics
	{
		struct MyCharacter_eventHurt_Parms
		{
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_Hurt_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventHurt_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_Hurt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_Hurt_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_Hurt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Hurt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Hurt", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_Hurt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Hurt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_Hurt_Statics::MyCharacter_eventHurt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Hurt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Hurt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Hurt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_Hurt_Statics::MyCharacter_eventHurt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCharacter_Hurt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Hurt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_PlayFootSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_PlayFootSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_PlayFootSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "PlayFootSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_PlayFootSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_PlayFootSound_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_PlayFootSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_PlayFootSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartGameAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootStepAudioCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootStepAudioCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_Hurt, "Hurt" }, // 812392198
		{ &Z_Construct_UFunction_AMyCharacter_PlayFootSound, "PlayFootSound" }, // 1640894610
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player/Character/MyCharacter.h" },
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "Category", "Abillity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AbilityComponent), Z_Construct_UClass_UAbilityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilityComponent_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilityComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_StartGameAnim_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_StartGameAnim = { "StartGameAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, StartGameAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_StartGameAnim_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_StartGameAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, PlayerController), Z_Construct_UClass_AMyPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_FootStepAudioCue_MetaData[] = {
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_FootStepAudioCue = { "FootStepAudioCue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, FootStepAudioCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_FootStepAudioCue_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_FootStepAudioCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Player/Character/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilityComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_StartGameAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_FootStepAudioCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
	AMyCharacter::~AMyCharacter() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_MyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_MyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 1016550697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_MyCharacter_h_2993146033(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Character_Player_Character_MyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS