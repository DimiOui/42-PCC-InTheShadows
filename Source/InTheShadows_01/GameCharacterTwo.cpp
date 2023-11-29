// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacterTwo.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"
#include "CharacterHUD.h"

// Sets default values
AGameCharacterTwo::AGameCharacterTwo()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it
	PrimaryActorTick.bCanEverTick = true;

	// Setup component hierarchy
	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	PlayerMesh->SetupAttachment(GetCapsuleComponent());

	//Setup camera and camera boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetCapsuleComponent());
	CameraBoom->TargetArmLength = 0.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Setup Interaction
	InteractionCheckFrequency = 0.1f;
	InteractionCheckDistance = 225.0f; // Tweak this value
	BaseEyeHeight = 30.0f; // Tweak this value
}

// Called when the game starts or when spawned
void AGameCharacterTwo::BeginPlay()
{
	Super::BeginPlay();

	HUD = Cast<ACharacterHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<
			UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(BaseMappingContext, 0);
		}
	}
}

// Movement

// Setup example for a float 1D axis for forward/backward movement

/*const float AxisValue = Value.Get<float>();
if (Controller && AxisValue != 0.0f)
{
	AddMovementInput(GetActorForwardVector(), AxisValue);
}*/

void AGameCharacterTwo::Move(const FInputActionValue& Value)
{
	const FVector2D MoveAxisValue = Value.Get<FVector2D>();
	if (GetController() && !MoveAxisValue.IsZero())
	{
		AddMovementInput(GetActorForwardVector(), MoveAxisValue.Y);
		AddMovementInput(GetActorRightVector(), MoveAxisValue.X);
	}
}

void AGameCharacterTwo::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisValue = Value.Get<FVector2D>();
	if (GetController())
	{
		AddControllerYawInput(LookAxisValue.X);
		AddControllerPitchInput(LookAxisValue.Y);
	}
}

// Interaction
void AGameCharacterTwo::PerformInteractionCheck()
{
	InteractionData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();

	FVector TraceStart{GetPawnViewLocation()};
	FVector TraceEnd{TraceStart + GetViewRotation().Vector() * InteractionCheckDistance};

	DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Red, false, 1.0f);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	FHitResult HitResult;

	if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
	{
		if (HitResult.GetActor()->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()))
		{
			if (HitResult.GetActor() != InteractionData.CurrentInteractable)
			{
				FoundInteractable(HitResult.GetActor());
				return;
			}

			if (HitResult.GetActor() == InteractionData.CurrentInteractable)
				return;
		}
	}

	LostInteractable();
}

void AGameCharacterTwo::FoundInteractable(AActor* NewInteractable)
{
	if (IsInteracting())
		EndInteract();

	if (InteractionData.CurrentInteractable)
	{
		// End the previous interactable focus
		TargetInteractable = InteractionData.CurrentInteractable;
		TargetInteractable->EndFocus();
	}

	InteractionData.CurrentInteractable = NewInteractable;
	TargetInteractable = NewInteractable;

	HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);

	TargetInteractable->BeginFocus();
}

void AGameCharacterTwo::LostInteractable()
{
	if (IsInteracting())
		GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if (InteractionData.CurrentInteractable)
	{
		if (IsValid(TargetInteractable.GetObject()))
			TargetInteractable->EndFocus();

		HUD->HideInteractionWidget();

		InteractionData.CurrentInteractable = nullptr;
		TargetInteractable = nullptr;
	}
}

void AGameCharacterTwo::BeginInteract()
{
	// Verify nothing has changed with the interactable state since beginning of the interaction
	PerformInteractionCheck();

	if (InteractionData.CurrentInteractable)
	{
		if (IsValid(TargetInteractable.GetObject()))
		{
			TargetInteractable->BeginInteract();

			if (FMath::IsNearlyZero(TargetInteractable->InteractableData.InteractionDuration, 0.1f)) // Tweak this
				Interact();
			else
				GetWorldTimerManager().SetTimer(TimerHandle_Interaction,
				                                this, &AGameCharacterTwo::Interact,
				                                TargetInteractable->InteractableData.InteractionDuration,
				                                false);
		}
	}
}

void AGameCharacterTwo::EndInteract()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if (IsValid(TargetInteractable.GetObject()))
		TargetInteractable->EndInteract();
}

void AGameCharacterTwo::Interact()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if (IsValid(TargetInteractable.GetObject()))
		TargetInteractable->Interact(this);
}

// Called every frame
void AGameCharacterTwo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime) >= InteractionCheckFrequency)
		PerformInteractionCheck();
}

// Called to bind functionality to input
void AGameCharacterTwo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind input
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Movement
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGameCharacterTwo::Move);

		// Look
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGameCharacterTwo::Look);

		// Interact
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this,
		                                   &AGameCharacterTwo::BeginInteract);

		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this,
		                                   &AGameCharacterTwo::EndInteract);
	}
}
