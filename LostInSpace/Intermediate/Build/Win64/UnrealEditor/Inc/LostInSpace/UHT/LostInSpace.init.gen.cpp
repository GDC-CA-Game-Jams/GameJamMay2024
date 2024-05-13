// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLostInSpace_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LostInSpace;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LostInSpace()
	{
		if (!Z_Registration_Info_UPackage__Script_LostInSpace.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LostInSpace",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD3F25ADA,
				0xB80AF095,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LostInSpace.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LostInSpace.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LostInSpace(Z_Construct_UPackage__Script_LostInSpace, TEXT("/Script/LostInSpace"), Z_Registration_Info_UPackage__Script_LostInSpace, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD3F25ADA, 0xB80AF095));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
