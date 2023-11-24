// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create components
	CameraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// Setup camera
	Camera->FieldOfView = 90.0f;
	Camera->SetupAttachment(CameraMesh);
	Camera->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

// Move the character left or right
void AGameCharacter::MoveLr(float MovementDelta)
{
	FVector NewLocation = GetActorLocation();
	NewLocation += GetActorRightVector() * MovementDelta * MovementSpeed;
	SetActorLocation(NewLocation);
}

// Move the character forward or backwards
void AGameCharacter::MoveFb(float MovementDelta)
{
	FVector NewLocation = GetActorLocation();
	NewLocation += GetActorForwardVector() * MovementDelta * MovementSpeed;
	SetActorLocation(NewLocation);
}

// Rotate the character
void AGameCharacter::Rotate(float MovementDelta)
{
	auto NewRotation = GetActorRotation();
	NewRotation.Yaw += MovementDelta * RotationSpeed;
	SetActorRotation(NewRotation);
}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Register input
	PlayerInputComponent->BindAxis((TEXT("MoveLR")), this, &AGameCharacter::MoveLr);
	PlayerInputComponent->BindAxis((TEXT("MoveFB")), this, &AGameCharacter::MoveFb);
	PlayerInputComponent->BindAxis((TEXT("Rotate")), this, &AGameCharacter::Rotate);
}