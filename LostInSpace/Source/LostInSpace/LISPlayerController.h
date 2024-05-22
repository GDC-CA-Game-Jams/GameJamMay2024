#pragma once

#include "UI/BaseUI.h"
#include "LISPlayerController.generated.h"

UCLASS()
class LOSTINSPACE_API ALISPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UFUNCTION()
	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBaseUI> BaseUIClass;

	UPROPERTY(BlueprintReadWrite)
	UBaseUI* BaseUI;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UExtendedCommonActivatableWidget> HUDClass;

	UPROPERTY(BlueprintReadWrite)
	UExtendedCommonActivatableWidget* PlayerHud;
};
