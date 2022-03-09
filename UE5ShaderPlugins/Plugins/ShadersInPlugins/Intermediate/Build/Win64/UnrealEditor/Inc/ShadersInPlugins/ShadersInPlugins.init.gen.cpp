// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadersInPlugins_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShadersInPlugins;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShadersInPlugins()
	{
		if (!Z_Registration_Info_UPackage__Script_ShadersInPlugins.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShadersInPlugins",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD46A35B7,
				0xB454A69A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShadersInPlugins.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShadersInPlugins.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShadersInPlugins(Z_Construct_UPackage__Script_ShadersInPlugins, TEXT("/Script/ShadersInPlugins"), Z_Registration_Info_UPackage__Script_ShadersInPlugins, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD46A35B7, 0xB454A69A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
