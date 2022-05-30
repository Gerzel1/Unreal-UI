// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modular_UI.h"

#define LOCTEXT_NAMESPACE "FModular_UIModule"

void FModular_UIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FModular_UIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FModular_UIModule, Modular_UI)