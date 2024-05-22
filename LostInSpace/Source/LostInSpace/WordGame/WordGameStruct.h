#pragma once

#include "WordGameStruct.generated.h"

UENUM(BlueprintType)
enum WordDifficulty : uint8
{
	Easy  UMETA(DisplayName = "Easy"),
	Medium  UMETA(DisplayName = "Medium"),
	Hard  UMETA(DisplayName = "Hard")
};

USTRUCT(BlueprintType)
struct FWordToGuessRow : public FTableRowBase
{
	
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Word;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Hint;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<WordDifficulty> Difficulty;
	
};