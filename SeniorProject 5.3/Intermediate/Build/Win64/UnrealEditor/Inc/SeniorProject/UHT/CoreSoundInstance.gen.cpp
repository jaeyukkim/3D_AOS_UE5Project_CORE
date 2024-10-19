// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Sound/CoreSoundInstance.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSoundInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCoreSoundInstance();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCoreSoundInstance_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCoreSoundManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UCoreSoundInstance::StaticRegisterNativesUCoreSoundInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoreSoundInstance);
	UClass* Z_Construct_UClass_UCoreSoundInstance_NoRegister()
	{
		return UCoreSoundInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSoundInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundInstances_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundInstances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundInstances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SoundInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoreSoundManagerBPClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CoreSoundManagerBPClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSoundInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSoundInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Sound/CoreSoundInstance.h" },
		{ "ModuleRelativePath", "Sound/CoreSoundInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances_ValueProp = { "SoundInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCoreSoundManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances_Key_KeyProp = { "SoundInstances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8c\x80\xeb\xb3\x84 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xeb\xa7\xa4\xeb\x8b\x88\xec\xa0\x80 \xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c\n" },
#endif
		{ "ModuleRelativePath", "Sound/CoreSoundInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8c\x80\xeb\xb3\x84 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xeb\xa7\xa4\xeb\x8b\x88\xec\xa0\x80 \xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances = { "SoundInstances", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreSoundInstance, SoundInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances_MetaData), Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_CoreSoundManagerBPClass_MetaData[] = {
		{ "Category", "CoreSoundInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CoreSoundManager\xec\x9d\x98 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\xb0\xb8\xec\xa1\xb0\n" },
#endif
		{ "ModuleRelativePath", "Sound/CoreSoundInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CoreSoundManager\xec\x9d\x98 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\xb0\xb8\xec\xa1\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_CoreSoundManagerBPClass = { "CoreSoundManagerBPClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreSoundInstance, CoreSoundManagerBPClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCoreSoundManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_CoreSoundManagerBPClass_MetaData), Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_CoreSoundManagerBPClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSoundInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_SoundInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSoundInstance_Statics::NewProp_CoreSoundManagerBPClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSoundInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSoundInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreSoundInstance_Statics::ClassParams = {
		&UCoreSoundInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreSoundInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreSoundInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSoundInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCoreSoundInstance()
	{
		if (!Z_Registration_Info_UClass_UCoreSoundInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreSoundInstance.OuterSingleton, Z_Construct_UClass_UCoreSoundInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoreSoundInstance.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UCoreSoundInstance>()
	{
		return UCoreSoundInstance::StaticClass();
	}
	UCoreSoundInstance::UCoreSoundInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSoundInstance);
	UCoreSoundInstance::~UCoreSoundInstance() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoreSoundInstance, UCoreSoundInstance::StaticClass, TEXT("UCoreSoundInstance"), &Z_Registration_Info_UClass_UCoreSoundInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreSoundInstance), 2235474669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundInstance_h_3148015803(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Sound_CoreSoundInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
