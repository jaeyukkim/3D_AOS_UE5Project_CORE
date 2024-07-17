// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAssetSetting_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyAssetSetting;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyAssetSetting()
	{
		if (!Z_Registration_Info_UPackage__Script_MyAssetSetting.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyAssetSetting",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x76B63A2C,
				0xBA73B30A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyAssetSetting.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyAssetSetting.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyAssetSetting(Z_Construct_UPackage__Script_MyAssetSetting, TEXT("/Script/MyAssetSetting"), Z_Registration_Info_UPackage__Script_MyAssetSetting, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x76B63A2C, 0xBA73B30A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
