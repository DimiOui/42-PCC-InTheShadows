// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MoveComponent.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveComponentReachEndPointSignature, bool, bIsEndPoint);

UCLASS(ClassGroup = (InTheShadows_01), meta = (BlueprintSpawnableComponent))
class INTHESHADOWS_01_API UMoveComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMoveComponent();

	// Expose functions to blueprint
	UFUNCTION(BlueprintCallable)
	void EnableMovement(bool bShouldMove);

	UFUNCTION(BlueprintCallable)
	void ResetMovement();

	UFUNCTION(BlueprintCallable)
	void SetMoveDirection(int Direction);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	friend class FMoveComponentVisualizer;

	// Offset to move
	UPROPERTY(EditAnywhere)
	FVector MoveOffset;

	// Speed
	UPROPERTY(EditAnywhere)
	float MoveSpeed = 0.1f;

	// Enable movement
	UPROPERTY(EditAnywhere)
	bool bEnableMovement = true;

	// On Extreme position
	UPROPERTY(BlueprintAssignable)
	FOnMoveComponentReachEndPointSignature OnEndpointReached;

	// Computed locations
	FVector StartRelativeLocation;
	FVector MoveOffsetNorm;
	float MaxDistance = 0.0f;
	float CurrentDistance = 0.0f;
	int MoveDirection = 1;
};