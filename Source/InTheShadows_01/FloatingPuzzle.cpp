// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingPuzzle.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/RotatingMovementComponent.h"


// Sets default values
AFloatingPuzzle::AFloatingPuzzle()
{
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	RootComponent = StaticMesh;

	SphereCollider = CreateDefaultSubobject<USphereComponent>("Sphere");
	SphereCollider->SetupAttachment(RootComponent);
	SphereCollider->InitSphereRadius(64.f);
	SphereCollider->SetCollisionProfileName(TEXT("Trigger"));
	// SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &AFloatingPuzzle::OnSphereBeginOverlap);
	// SphereCollider->OnComponentEndOverlap.AddDynamic(this, &AFloatingPuzzle::OnSphereEndOverlap);

	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>("RotatingMovement");

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bIsFloating = true;
}

// Called when the game starts or when spawned
void AFloatingPuzzle::BeginPlay()
{
	Super::BeginPlay();

	InteractableData = InstanceInteractableData;
	
	if (FloatingCurve && bIsFloating)
	{
		StartLocation = GetActorLocation().Z;

		FOnTimelineFloat ProgressFunction;
		ProgressFunction.BindUFunction(this, FName("HandleFloatingTimelineProgress"));
		FloatingTimeline.AddInterpFloat(FloatingCurve, ProgressFunction);

		FloatingTimeline.SetLooping(true);
		FloatingTimeline.PlayFromStart();
	}
}

// void AFloatingPuzzle::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
//                                            UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
//                                            const FHitResult& SweepResult)
// {
// 	if (AGameCharacterTwo* GameCharacter = Cast<AGameCharacterTwo>(OtherActor))
// 	{
// 	}
// }

// void AFloatingPuzzle::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
//                                          UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
// {
// }

void AFloatingPuzzle::BeginFocus()
{
	if (StaticMesh)
		StaticMesh->SetRenderCustomDepth(true);
}

void AFloatingPuzzle::EndFocus()
{
	if (StaticMesh)
		StaticMesh->SetRenderCustomDepth(false);
}

void AFloatingPuzzle::BeginInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("Calling BeginInteract override on FloatingPuzzle actor"));
}

void AFloatingPuzzle::EndInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("Calling EndInteract override on FloatingPuzzle actor"));
}

void AFloatingPuzzle::Interact(AGameCharacterTwo* GameCharacterTwo)
{
	UE_LOG(LogTemp, Warning, TEXT("Calling Interact override on FloatingPuzzle actor"));
}

void AFloatingPuzzle::HandleFloatingTimelineProgress(float Value)
{
	FVector NewLocation = GetActorLocation();
	NewLocation.Z = StartLocation + Value;
	SetActorLocation(NewLocation);
}

// Called every frame
void AFloatingPuzzle::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	FloatingTimeline.TickTimeline(DeltaTime);
}
