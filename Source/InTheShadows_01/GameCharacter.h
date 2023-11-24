// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameCharacter.generated.h"

UCLASS()
class INTHESHADOWS_01_API AGameCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGameCharacter();

	// Delta movement
	void MoveLr(float MovementDelta);
	void MoveFb(float MovementDelta);
	void Rotate(float MovementDelta);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Main Pawn camera
	UPROPERTY(EditAnywhere);
	UCameraComponent* Camera;

	// Pawn mesh
	UPROPERTY(EditAnywhere);
	UStaticMeshComponent* CameraMesh;

	UPROPERTY(EditAnywhere, Category = "Character Settings");
	float RotationSpeed = 1.0f;

	// Movement speed
	UPROPERTY(EditAnywhere, Category = "Character Settings");
	float MovementSpeed = 10.0f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};