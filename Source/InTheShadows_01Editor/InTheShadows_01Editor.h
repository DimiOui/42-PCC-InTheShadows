#pragma once

#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"

#include "MoveComponentVisualizer.h"

DECLARE_LOG_CATEGORY_EXTERN(InTheShadows_01Editor, All, All);

class FInTheShadows_01EditorModule : public IModuleInterface
{
public:
	void StartupModule() override;
	void ShutdownModule() override;

};
