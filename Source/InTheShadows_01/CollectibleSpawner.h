// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "CollectibleSpawner.generated.h"

UCLASS()
class INTHESHADOWS_01_API ACollectibleSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectibleSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the actor stops playing
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Actor class to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorToSpawn;

	// Average time between spawns
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageSpawnDelay = 5.f;

	// Random +/- offset to the spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomSpawnTimeOffset = 1.f;

public:	
	// Will spawn an actor if the spawn box is valid
	UFUNCTION(BlueprintCallable)
	bool SpawnActor();

	// Change if actors are spawned
	UFUNCTION(BlueprintCallable)
	void EnableSpawning(bool bEnable);

private:
	// Box component to specify the spawn area
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent *SpawnBox;

	UFUNCTION()
	void SpawnActorScheduled();

	// Will schedule the next spawn
	void ScheduleNextSpawn();

	UPROPERTY(EditAnywhere)
	bool bShouldSpawn = true;

	//Helper for timing
	FTimerHandle SpawnTimerHandle;
};
