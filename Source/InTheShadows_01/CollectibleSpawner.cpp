// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectibleSpawner.h"

// Sets default values
ACollectibleSpawner::ACollectibleSpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Setup members
	SpawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnBox"));
	RootComponent = SpawnBox;
}

// Called when the game starts or when spawned
void ACollectibleSpawner::BeginPlay()
{
	Super::BeginPlay();

	// Schedule the first spawn
	if (bShouldSpawn)
		ScheduleNextSpawn();
}

void ACollectibleSpawner::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// Clear the timer
	GetWorldTimerManager().ClearAllTimersForObject(this);
}

bool ACollectibleSpawner::SpawnActor()
{
	bool bSpawned = false;

	if (ActorToSpawn)
	{
		// Calculate the extent of the spawn box

		FBoxSphereBounds BoxBounds = SpawnBox->CalcBounds(GetActorTransform());

		// Compute a random point within the spawn box
		FVector SpawnOrigin = BoxBounds.Origin;
		SpawnOrigin.X += -BoxBounds.BoxExtent.X + 2 * BoxBounds.BoxExtent.X * FMath::FRand();
		SpawnOrigin.Y += -BoxBounds.BoxExtent.Y + 2 * BoxBounds.BoxExtent.Y * FMath::FRand();
		SpawnOrigin.Z += -BoxBounds.BoxExtent.Z + 2 * BoxBounds.BoxExtent.Z * FMath::FRand();

		// Spawn the actor
		bSpawned = GetWorld()->SpawnActor(ActorToSpawn, &SpawnOrigin) != nullptr;
	}

	return bSpawned;
}

void ACollectibleSpawner::EnableSpawning(bool bEnable)
{
	bShouldSpawn = bEnable;

	if (bShouldSpawn)
		ScheduleNextSpawn();
	else
		GetWorldTimerManager().ClearTimer(SpawnTimerHandle);
}

void ACollectibleSpawner::SpawnActorScheduled()
{
	if (SpawnActor())
	{
		if (bShouldSpawn)
			ScheduleNextSpawn();
	}
}

void ACollectibleSpawner::ScheduleNextSpawn()
{
	// Compute time offset to spawn the next actor
	float DeltaToNextSpawn = AverageSpawnDelay + (-RandomSpawnTimeOffset + 2 * RandomSpawnTimeOffset * FMath::FRand());
	// Schedule spawning
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ACollectibleSpawner::SpawnActorScheduled, DeltaToNextSpawn,
	                                false);
}
