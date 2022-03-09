// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadersInPlugins/Classes/ShaderInPluginsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderInPluginsBlueprintLibrary() {}
// Cross Module References
	SHADERSINPLUGINS_API UClass* Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_NoRegister();
	SHADERSINPLUGINS_API UClass* Z_Construct_UClass_UShaderInPluginsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ShadersInPlugins();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SHADERSINPLUGINS_API UScriptStruct* Z_Construct_UScriptStruct_FShaderInPluginsCameraModel();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UShaderInPluginsBlueprintLibrary::execNotEqual_CompareLensDistortionModels)
	{
		P_GET_STRUCT_REF(FShaderInPluginsCameraModel,Z_Param_Out_A);
		P_GET_STRUCT_REF(FShaderInPluginsCameraModel,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UShaderInPluginsBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShaderInPluginsBlueprintLibrary::execEqualEqual_CompareLensDistortionModels)
	{
		P_GET_STRUCT_REF(FShaderInPluginsCameraModel,Z_Param_Out_A);
		P_GET_STRUCT_REF(FShaderInPluginsCameraModel,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UShaderInPluginsBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShaderInPluginsBlueprintLibrary::execDrawUVDisplacementToRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FShaderInPluginsCameraModel,Z_Param_Out_CameraModel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedHorizontalFOV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedAspectRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UndistortOverscanFactor);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutputMultiply);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutputAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UShaderInPluginsBlueprintLibrary::DrawUVDisplacementToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_UndistortOverscanFactor,Z_Param_OutputRenderTarget,Z_Param_OutputMultiply,Z_Param_OutputAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShaderInPluginsBlueprintLibrary::execGetUndistortOverscanFactor)
	{
		P_GET_STRUCT_REF(FShaderInPluginsCameraModel,Z_Param_Out_CameraModel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedHorizontalFOV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedAspectRatio);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_UndistortOverscanFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UShaderInPluginsBlueprintLibrary::GetUndistortOverscanFactor(Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_Out_UndistortOverscanFactor);
		P_NATIVE_END;
	}
	void UShaderInPluginsBlueprintLibrary::StaticRegisterNativesUShaderInPluginsBlueprintLibrary()
	{
		UClass* Class = UShaderInPluginsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawUVDisplacementToRenderTarget", &UShaderInPluginsBlueprintLibrary::execDrawUVDisplacementToRenderTarget },
			{ "EqualEqual_CompareLensDistortionModels", &UShaderInPluginsBlueprintLibrary::execEqualEqual_CompareLensDistortionModels },
			{ "GetUndistortOverscanFactor", &UShaderInPluginsBlueprintLibrary::execGetUndistortOverscanFactor },
			{ "NotEqual_CompareLensDistortionModels", &UShaderInPluginsBlueprintLibrary::execNotEqual_CompareLensDistortionModels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics
	{
		struct ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms
		{
			const UObject* WorldContextObject;
			FShaderInPluginsCameraModel CameraModel;
			float DistortedHorizontalFOV;
			float DistortedAspectRatio;
			float UndistortOverscanFactor;
			UTextureRenderTarget2D* OutputRenderTarget;
			float OutputMultiply;
			float OutputAdd;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMultiply;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel = { "CameraModel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, CameraModel), Z_Construct_UScriptStruct_FShaderInPluginsCameraModel, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel_MetaData)) }; // 3983713202
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedHorizontalFOV = { "DistortedHorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedHorizontalFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedAspectRatio = { "DistortedAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_UndistortOverscanFactor = { "UndistortOverscanFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, UndistortOverscanFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputMultiply = { "OutputMultiply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputMultiply), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputAdd = { "OutputAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputAdd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedHorizontalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_UndistortOverscanFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputMultiply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion" },
		{ "Comment", "/** Draws UV displacement map within the output render target.\n\x09 * - Red & green channels hold the distortion displacement;\n\x09 * - Blue & alpha channels hold the undistortion displacement.\n\x09 * @param DistortedHorizontalFOV The desired horizontal FOV in the distorted render.\n\x09 * @param DistortedAspectRatio The desired aspect ratio of the distorted render.\n\x09 * @param UndistortOverscanFactor The factor of the overscan for the undistorted render.\n\x09 * @param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n\x09 * @param OutputMultiply The multiplication factor applied on the displacement.\n\x09 * @param OutputAdd Value added to the multiplied displacement before storing into the output render target.\n\x09 */" },
		{ "CPP_Default_OutputAdd", "0.500000" },
		{ "CPP_Default_OutputMultiply", "0.500000" },
		{ "ModuleRelativePath", "Classes/ShaderInPluginsBlueprintLibrary.h" },
		{ "ToolTip", "Draws UV displacement map within the output render target.\n- Red & green channels hold the distortion displacement;\n- Blue & alpha channels hold the undistortion displacement.\n@param DistortedHorizontalFOV The desired horizontal FOV in the distorted render.\n@param DistortedAspectRatio The desired aspect ratio of the distorted render.\n@param UndistortOverscanFactor The factor of the overscan for the undistorted render.\n@param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n@param OutputMultiply The multiplication factor applied on the displacement.\n@param OutputAdd Value added to the multiplied displacement before storing into the output render target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShaderInPluginsBlueprintLibrary, nullptr, "DrawUVDisplacementToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::ShaderInPluginsBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms), Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics
	{
		struct ShaderInPluginsBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms
		{
			FShaderInPluginsCameraModel A;
			FShaderInPluginsCameraModel B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FShaderInPluginsCameraModel, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData)) }; // 3983713202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FShaderInPluginsCameraModel, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData)) }; // 3983713202
	void Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShaderInPluginsBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShaderInPluginsBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion" },
		{ "Comment", "/* Returns true if A is equal to B (A == B) */" },
		{ "ModuleRelativePath", "Classes/ShaderInPluginsBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if A is equal to B (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShaderInPluginsBlueprintLibrary, nullptr, "EqualEqual_CompareLensDistortionModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::ShaderInPluginsBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics
	{
		struct ShaderInPluginsBlueprintLibrary_eventGetUndistortOverscanFactor_Parms
		{
			FShaderInPluginsCameraModel CameraModel;
			float DistortedHorizontalFOV;
			float DistortedAspectRatio;
			float UndistortOverscanFactor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel = { "CameraModel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, CameraModel), Z_Construct_UScriptStruct_FShaderInPluginsCameraModel, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel_MetaData)) }; // 3983713202
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedHorizontalFOV = { "DistortedHorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedHorizontalFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedAspectRatio = { "DistortedAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_UndistortOverscanFactor = { "UndistortOverscanFactor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, UndistortOverscanFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedHorizontalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_UndistortOverscanFactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion" },
		{ "Comment", "/** Returns the overscan factor required for the undistort rendering to avoid unrendered distorted pixels. */" },
		{ "ModuleRelativePath", "Classes/ShaderInPluginsBlueprintLibrary.h" },
		{ "ToolTip", "Returns the overscan factor required for the undistort rendering to avoid unrendered distorted pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShaderInPluginsBlueprintLibrary, nullptr, "GetUndistortOverscanFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::ShaderInPluginsBlueprintLibrary_eventGetUndistortOverscanFactor_Parms), Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics
	{
		struct ShaderInPluginsBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms
		{
			FShaderInPluginsCameraModel A;
			FShaderInPluginsCameraModel B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FShaderInPluginsCameraModel, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData)) }; // 3983713202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderInPluginsBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FShaderInPluginsCameraModel, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData)) }; // 3983713202
	void Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShaderInPluginsBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShaderInPluginsBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShaderInPlugins | Lens Distortion" },
		{ "Comment", "/* Returns true if A is not equal to B (A != B) */" },
		{ "ModuleRelativePath", "Classes/ShaderInPluginsBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if A is not equal to B (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShaderInPluginsBlueprintLibrary, nullptr, "NotEqual_CompareLensDistortionModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::ShaderInPluginsBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShaderInPluginsBlueprintLibrary);
	UClass* Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_NoRegister()
	{
		return UShaderInPluginsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadersInPlugins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_DrawUVDisplacementToRenderTarget, "DrawUVDisplacementToRenderTarget" }, // 2993818002
		{ &Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_EqualEqual_CompareLensDistortionModels, "EqualEqual_CompareLensDistortionModels" }, // 1003359392
		{ &Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_GetUndistortOverscanFactor, "GetUndistortOverscanFactor" }, // 1021982651
		{ &Z_Construct_UFunction_UShaderInPluginsBlueprintLibrary_NotEqual_CompareLensDistortionModels, "NotEqual_CompareLensDistortionModels" }, // 3407450187
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//class UE_DEPRECATED(5.0, \"The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin.\") ULensDistortionBlueprintLibrary;\n" },
		{ "IncludePath", "ShaderInPluginsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/ShaderInPluginsBlueprintLibrary.h" },
		{ "ToolTip", "class UE_DEPRECATED(5.0, \"The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin.\") ULensDistortionBlueprintLibrary;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShaderInPluginsBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::ClassParams = {
		&UShaderInPluginsBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShaderInPluginsBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UShaderInPluginsBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShaderInPluginsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShaderInPluginsBlueprintLibrary.OuterSingleton;
	}
	template<> SHADERSINPLUGINS_API UClass* StaticClass<UShaderInPluginsBlueprintLibrary>()
	{
		return UShaderInPluginsBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShaderInPluginsBlueprintLibrary);
	struct Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShaderInPluginsBlueprintLibrary, UShaderInPluginsBlueprintLibrary::StaticClass, TEXT("UShaderInPluginsBlueprintLibrary"), &Z_Registration_Info_UClass_UShaderInPluginsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShaderInPluginsBlueprintLibrary), 1637750177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_242006931(TEXT("/Script/ShadersInPlugins"),
		Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
