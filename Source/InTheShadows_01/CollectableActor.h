// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "CollectableActor.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJumpTriggerSignature, AActor*, OtherActor, UPrimitiveComponent*,
                                             OtherComp);

UCLASS()
class INTHESHADOWS_01_API ACollectableActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACollectableActor();

	UFUNCTION(BlueprintCallable)
	void Jump(float Velocity);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Reference to the character blueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* TriggerClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lifetime = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JumpVelocity = 4.0f;

	// Called when an actor overlaps with the box collider
	UFUNCTION()
	void OnComponentBeginOverlap(class UBoxComponent* Component, class AActor* OtherActor,
	                             class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	                             const FHitResult& SweepResult);

private:
	// Static Mesh for rendering
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* CollectableMesh;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* BoxCollider;


	UPROPERTY(BlueprintAssignable)
	FOnJumpTriggerSignature OnJumpTrigger;

	bool IsLaunched = false;
};
