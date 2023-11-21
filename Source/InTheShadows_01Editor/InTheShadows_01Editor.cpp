#include "InTheShadows_01Editor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FInTheShadows_01EditorModule, InTheShadows_01Editor);

void FInTheShadows_01EditorModule::StartupModule()
{
	// Check if editor is valid
	if (GUnrealEd)
	{
		// Registering the visualizer
		TSharedPtr<FMoveComponentVisualizer> MoveVisualizer = MakeShareable(new FMoveComponentVisualizer());

		if (MoveVisualizer.IsValid())
		{
			GUnrealEd->RegisterComponentVisualizer(UMoveComponent::StaticClass()->GetFName(), MoveVisualizer);
			MoveVisualizer->OnRegister();
		}
	}
}

void FInTheShadows_01EditorModule::ShutdownModule()
{
	// Check if editor is valid
	if (GUnrealEd)
	{
		// Unregistering the visualizer
		GUnrealEd->UnregisterComponentVisualizer(UMoveComponent::StaticClass()->GetFName());
	}
}