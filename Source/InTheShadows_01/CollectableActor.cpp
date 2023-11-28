// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableActor.h"

// Sets default values
ACollectableActor::ACollectableActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the (root) static mesh component
	CollectableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectableMesh"));
	RootComponent = CollectableMesh;

	// Create the box collider
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(CollectableMesh);
}

// Called when the game starts or when spawned
void ACollectableActor::BeginPlay()
{
	Super::BeginPlay();

	// Setup per instance OnComponentOverlap event
	FScriptDelegate DelegateSubscriber;
	DelegateSubscriber.BindUFunction(this, "OnComponentBeginOverlap");
	BoxCollider->OnComponentBeginOverlap.Add(DelegateSubscriber);

	// Ticking required after launching only
	SetActorTickEnabled(false);
}

// Jumping function
void ACollectableActor::Jump(float Velocity)
{
	// make sure jump is only called once
	if (!IsLaunched)
	{
		// Add velocity to the mesh 
		CollectableMesh->AddImpulse(FVector(0, 0, Velocity * 500.f), NAME_None, true);

		// Initiate object destruction
		SetActorTickEnabled(true);
		IsLaunched = true;
	}
}

void ACollectableActor::OnComponentBeginOverlap(class UBoxComponent* Component, class AActor* OtherActor,
                                                class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                                                bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsLaunched && OtherActor->IsA(TriggerClass))
	{
		OnJumpTrigger.Broadcast(OtherActor, Component);
	}
}

// Called every frame
void ACollectableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsLaunched)
	{
		// Decrement Lifetime
		Lifetime -= DeltaTime;

		if (Lifetime <= 0.f)
		{
			// Destroy the object
			Destroy();
		}
	}
}
