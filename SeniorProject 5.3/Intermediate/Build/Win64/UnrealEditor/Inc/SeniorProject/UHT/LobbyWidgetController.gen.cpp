// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/Lobby/LobbyWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ULobbyWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ULobbyWidgetController_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMyStruct();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyStruct;
class UScriptStruct* FMyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyStruct, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("MyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyStruct.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FMyStruct>()
{
	return FMyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Lobby/LobbyWidgetController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"MyStruct",
		nullptr,
		0,
		sizeof(FMyStruct),
		alignof(FMyStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MyStruct.InnerSingleton;
	}
	void ULobbyWidgetController::StaticRegisterNativesULobbyWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULobbyWidgetController);
	UClass* Z_Construct_UClass_ULobbyWidgetController_NoRegister()
	{
		return ULobbyWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyWidgetController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Lobby/LobbyWidgetController.h" },
		{ "ModuleRelativePath", "UI/Lobby/LobbyWidgetController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyWidgetController_Statics::ClassParams = {
		&ULobbyWidgetController::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_ULobbyWidgetController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULobbyWidgetController()
	{
		if (!Z_Registration_Info_UClass_ULobbyWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyWidgetController.OuterSingleton, Z_Construct_UClass_ULobbyWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULobbyWidgetController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ULobbyWidgetController>()
	{
		return ULobbyWidgetController::StaticClass();
	}
	ULobbyWidgetController::ULobbyWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyWidgetController);
	ULobbyWidgetController::~ULobbyWidgetController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_Statics::ScriptStructInfo[] = {
		{ FMyStruct::StaticStruct, Z_Construct_UScriptStruct_FMyStruct_Statics::NewStructOps, TEXT("MyStruct"), &Z_Registration_Info_UScriptStruct_MyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyStruct), 4255671586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyWidgetController, ULobbyWidgetController::StaticClass, TEXT("ULobbyWidgetController"), &Z_Registration_Info_UClass_ULobbyWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyWidgetController), 4159787345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_17560813(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidgetController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
