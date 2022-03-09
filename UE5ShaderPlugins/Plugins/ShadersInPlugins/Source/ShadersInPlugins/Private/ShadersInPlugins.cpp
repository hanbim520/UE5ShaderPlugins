// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadersInPlugins.h"
#include <Interfaces/IPluginManager.h>

#define LOCTEXT_NAMESPACE "FShadersInPluginsModule"

void FShadersInPluginsModule::StartupModule()
{
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("ShadersInPlugins"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/ShadersInPlugins"), PluginShaderDir);
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FShadersInPluginsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShadersInPluginsModule, ShadersInPlugins)