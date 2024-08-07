// Copyright Epic Games, Inc. All Rights Reserved.
// Copyright 2024, Anderson Ortiz Dias Junior.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCompleteSaveSystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
