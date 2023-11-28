// Fill out your copyright notice in the Description page of Project Settings.


#include "MinimalLevelGameMode.h"

AMinimalLevelGameMode::AMinimalLevelGameMode()
{
	if (DefaultPawnClass == ADefaultPawn::StaticClass() || !DefaultPawnClass)
		DefaultPawnClass = AGameCharacter::StaticClass();
}
