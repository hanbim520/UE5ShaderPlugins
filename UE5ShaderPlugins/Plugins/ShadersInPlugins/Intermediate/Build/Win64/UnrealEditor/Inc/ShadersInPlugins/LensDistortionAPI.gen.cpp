// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadersInPlugins/Classes/LensDistortionAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionAPI() {}
// Cross Module References
	SHADERSINPLUGINS_API UScriptStruct* Z_Construct_UScriptStruct_FShaderInPluginsCameraModel();
	UPackage* Z_Construct_UPackage__Script_ShadersInPlugins();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel;
class UScriptStruct* FShaderInPluginsCameraModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel, Z_Construct_UPackage__Script_ShadersInPlugins(), TEXT("ShaderInPluginsCameraModel"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel.OuterSingleton;
}
template<> SHADERSINPLUGINS_API UScriptStruct* StaticStruct<FShaderInPluginsCameraModel>()
{
	return FShaderInPluginsCameraModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Mathematic camera model for ShaderInPlugins | Lens Distortion/undistortion.\n *\n * Camera matrix =\n *  | F.X  0  C.x |\n *  |  0  F.Y C.Y |\n *  |  0   0   1  |\n */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Mathematic camera model for ShaderInPlugins | Lens Distortion/undistortion.\n\nCamera matrix =\n| F.X  0  C.x |\n|  0  F.Y C.Y |\n|  0   0   1  |" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderInPluginsCameraModel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K1_MetaData[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion|Camera Model" },
		{ "Comment", "/** Radial parameter #1. */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Radial parameter #1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShaderInPluginsCameraModel, K1), METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K2_MetaData[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion|Camera Model" },
		{ "Comment", "/** Radial parameter #2. */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Radial parameter #2." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShaderInPluginsCameraModel, K2), METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K3_MetaData[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion|Camera Model" },
		{ "Comment", "/** Radial parameter #3. */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Radial parameter #3." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K3 = { "K3", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShaderInPluginsCameraModel, K3), METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P1_MetaData[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion|Camera Model" },
		{ "Comment", "/** Tangential parameter #1. */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Tangential parameter #1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShaderInPluginsCameraModel, P1), METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P2_MetaData[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion|Camera Model" },
		{ "Comment", "/** Tangential parameter #2. */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Tangential parameter #2." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShaderInPluginsCameraModel, P2), METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_F_MetaData[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion|Camera Model" },
		{ "Comment", "/** Camera matrix's Fx and Fy. */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Camera matrix's Fx and Fy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShaderInPluginsCameraModel, F), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_F_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_C_MetaData[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion|Camera Model" },
		{ "Comment", "/** Camera matrix's Cx and Cy. */" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
		{ "ToolTip", "Camera matrix's Cx and Cy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShaderInPluginsCameraModel, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_C_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_K3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_P2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewProp_C,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShadersInPlugins,
		nullptr,
		&NewStructOps,
		"ShaderInPluginsCameraModel",
		sizeof(FShaderInPluginsCameraModel),
		alignof(FShaderInPluginsCameraModel),
		Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShaderInPluginsCameraModel()
	{
		if (!Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel.InnerSingleton, Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_LensDistortionAPI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_LensDistortionAPI_h_Statics::ScriptStructInfo[] = {
		{ FShaderInPluginsCameraModel::StaticStruct, Z_Construct_UScriptStruct_FShaderInPluginsCameraModel_Statics::NewStructOps, TEXT("ShaderInPluginsCameraModel"), &Z_Registration_Info_UScriptStruct_ShaderInPluginsCameraModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderInPluginsCameraModel), 3983713202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_LensDistortionAPI_h_2208500639(TEXT("/Script/ShadersInPlugins"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_LensDistortionAPI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_LensDistortionAPI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
