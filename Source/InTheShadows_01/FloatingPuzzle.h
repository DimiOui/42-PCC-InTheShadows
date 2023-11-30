// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "InteractionInterface.h"
#include "FloatingPuzzle.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class URotatingMovementComponent;
class UTimelineComponent;

class UDataTable;
class UItemBase;

UCLASS(Blueprintable)
class INTHESHADOWS_01_API AFloatingPuzzle : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFloatingPuzzle();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Test
	FORCEINLINE UItemBase* GetPuzzleReference() const { return PuzzleReference; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Test
	UPROPERTY(EditIstanceOnly, Category = "Puzzle | Data")
	UDataTable* PuzzleDataTable;

	UPROPERTY(EditIstanceOnly, Category = "Puzzle | Data")
	FName DesiredPuzzleID;

	UPROPERTY(VisibleIstanceOnly, Category = "Puzzle | Data")
	UItemBase* PuzzleReference;

	// Components
	UPROPERTY(VisibleInstanceOnly, Category = "Interactable")
	FInteractableData InstanceInteractableData;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	USphereComponent* SphereCollider;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	URotatingMovementComponent* RotatingMovement;

	UPROPERTY(EditAnywhere)
	UTimelineComponent* Timeline;

	UPROPERTY(EditAnywhere)
	UTimelineComponent* FloatingAnimation;

	// Timeline Events
	FTimeline FloatingTimeline;

	// Curve to control Z position during timeline
	UPROPERTY(EditAnywhere, Category = "Floating Animation")
	UCurveFloat* FloatingCurve;

	// Function to update Z position during timeline
	UFUNCTION()
	void HandleFloatingTimelineProgress(float Value);

	// Interface Override
	UFUNCTION(BlueprintCallable)
	virtual void BeginFocus() override;
	UFUNCTION(BlueprintCallable)
	virtual void EndFocus() override;
	UFUNCTION(BlueprintCallable)
	virtual void BeginInteract() override;
	UFUNCTION(BlueprintCallable)
	virtual void EndInteract() override;
	UFUNCTION(BlueprintCallable)
	virtual void Interact(AGameCharacterTwo* GameCharacterTwo) override;

	// Overlap Events
	// UFUNCTION()
	// void OnSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor,
	//                           class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	//                           const FHitResult& SweepResult);
	//
	// UFUNCTION()
	// void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	//                         UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
private:
	bool bIsFloating = false;
	float StartLocation;
};
