// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "FloatingPuzzle.generated.h"


class USphereComponent;
class UStaticMeshComponent;
class URotatingMovementComponent;
class UTimelineComponent;

UCLASS(Blueprintable)
class INTHESHADOWS_01_API AFloatingPuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingPuzzle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Components
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

	// Overlap Events
	UFUNCTION()
	void OnSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	bool bIsFloating = false;
	float StartLocation;

};