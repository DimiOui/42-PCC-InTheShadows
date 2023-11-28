// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveComponent.h"

// Sets default values for this component's properties
UMoveComponent::UMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UMoveComponent::EnableMovement(bool bShouldMove)
{
	// Assign movement value and enable/disable tick
	bEnableMovement = bShouldMove;
	SetComponentTickEnabled(bEnableMovement);
}

void UMoveComponent::ResetMovement()
{
	// Clear distance and set to origin
	CurrentDistance = 0.0f;
	SetRelativeLocation(StartRelativeLocation);
}

void UMoveComponent::SetMoveDirection(int Direction)
{
	MoveDirection = Direction >= 1 ? 1 : -1;
}

// Called when the game starts
void UMoveComponent::BeginPlay()
{
	Super::BeginPlay();

	// Set start location
	StartRelativeLocation = GetRelativeLocation();

	// Compute normalized movement
	MoveOffsetNorm = MoveOffset;
	MoveOffsetNorm.Normalize();
	MaxDistance = MoveOffset.Length();

	// Check if ticking is required
	SetComponentTickEnabled(bEnableMovement);
}


// Called every frame
void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Set the current distance
	if (bEnableMovement)
	{
		CurrentDistance += DeltaTime * MoveSpeed * MoveDirection;
		if (CurrentDistance >= MaxDistance || CurrentDistance <= 0.0f)
		{
			// Invert Direction
			MoveDirection *= -1.0f;

			// Fire event
			OnEndpointReached.Broadcast(CurrentDistance >= MaxDistance);

			// Clamp distance
			CurrentDistance = FMath::Clamp(CurrentDistance, 0.0f, MaxDistance);
		}
	}

	// Compute and set current location
	SetRelativeLocation(StartRelativeLocation + MoveOffsetNorm * CurrentDistance);
}
