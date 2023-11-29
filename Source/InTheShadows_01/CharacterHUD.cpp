// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterHUD.h"
#include "MainMenu.h"
#include "InteractionWidget.h"

ACharacterHUD::ACharacterHUD()
{
}

void ACharacterHUD::BeginPlay()
{
	Super::BeginPlay();

	if (MainMenuClass)
	{
		MainMenuWidget = CreateWidget<UMainMenu>(GetWorld(), MainMenuClass);
		MainMenuWidget->AddToViewport(1);
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed); // Collapsed > Hidden performance-wise
	}

	if (InteractionWidgetClass)
	{
		InteractionWidget = CreateWidget<UInteractionWidget>(GetWorld(), InteractionWidgetClass);
		InteractionWidget->AddToViewport(0);
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed); // Collapsed > Hidden performance-wise
	}
}

void ACharacterHUD::DisplayMenu()
{
	if (MainMenuWidget)
	{
		bIsMenuDisplayed = true;
		MainMenuWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void ACharacterHUD::HideMenu()
{
	if (MainMenuWidget)
	{
		bIsMenuDisplayed = false;
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void ACharacterHUD::ShowInteractionWidget() const
{
	if (InteractionWidget)
		InteractionWidget->SetVisibility(ESlateVisibility::Visible);
}

void ACharacterHUD::HideInteractionWidget() const
{
	if (InteractionWidget)
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed);
}

void ACharacterHUD::UpdateInteractionWidget(const FInteractableData* InteractableData) const
{
	if (InteractionWidget)
	{
		if (InteractionWidget->GetVisibility() == ESlateVisibility::Collapsed)
			InteractionWidget->SetVisibility(ESlateVisibility::Visible);

		InteractionWidget->UpdateWidget(InteractableData);
	}
}
