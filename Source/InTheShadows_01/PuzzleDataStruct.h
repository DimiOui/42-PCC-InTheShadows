#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PuzzleDataStruct.generated.h"

USTRUCT()
struct FPuzzleData : public FTableRowBase
{
	GENERATED_BODY()

	FPuzzleData() : bIsCompleted(false) {}
	
	UPROPERTY(EditAnywhere, Category = "Puzzle Data")
	FName PuzzleID; // A unique identifier for the puzzle

	UPROPERTY(EditAnywhere, Category = "Puzzle Data")
	bool bIsCompleted; // The completion state of the puzzle
};