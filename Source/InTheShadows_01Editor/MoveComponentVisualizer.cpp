// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveComponentVisualizer.h"

void FMoveComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	// Get move component and draw its move offset
	const UMoveComponent* MoveComponent = Cast<const UMoveComponent>(Component);
	if (MoveComponent)
	{
		FVector Start = MoveComponent->GetComponentLocation();
		FVector End = Start + MoveComponent->MoveOffset;

		PDI->DrawLine(Start, End, FLinearColor::Red, SDPG_Foreground);
	}
}