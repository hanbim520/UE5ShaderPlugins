// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FShaderInPluginsCameraModel;
class UObject;
class UTextureRenderTarget2D;
#ifdef SHADERSINPLUGINS_ShaderInPluginsBlueprintLibrary_generated_h
#error "ShaderInPluginsBlueprintLibrary.generated.h already included, missing '#pragma once' in ShaderInPluginsBlueprintLibrary.h"
#endif
#define SHADERSINPLUGINS_ShaderInPluginsBlueprintLibrary_generated_h

#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_SPARSE_DATA
#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShaderInPluginsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UShaderInPluginsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShadersInPlugins"), NO_API) \
	DECLARE_SERIALIZER(UShaderInPluginsBlueprintLibrary)


#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUShaderInPluginsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UShaderInPluginsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UShaderInPluginsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShadersInPlugins"), NO_API) \
	DECLARE_SERIALIZER(UShaderInPluginsBlueprintLibrary)


#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShaderInPluginsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderInPluginsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShaderInPluginsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderInPluginsBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShaderInPluginsBlueprintLibrary(UShaderInPluginsBlueprintLibrary&&); \
	NO_API UShaderInPluginsBlueprintLibrary(const UShaderInPluginsBlueprintLibrary&); \
public:


#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShaderInPluginsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShaderInPluginsBlueprintLibrary(UShaderInPluginsBlueprintLibrary&&); \
	NO_API UShaderInPluginsBlueprintLibrary(const UShaderInPluginsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShaderInPluginsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderInPluginsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderInPluginsBlueprintLibrary)


#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_13_PROLOG
#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_SPARSE_DATA \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_INCLASS \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_SPARSE_DATA \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShaderInPluginsBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADERSINPLUGINS_API UClass* StaticClass<class UShaderInPluginsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5ShaderPlugin_Plugins_ShadersInPlugins_Source_ShadersInPlugins_Classes_ShaderInPluginsBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
