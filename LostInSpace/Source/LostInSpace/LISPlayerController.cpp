#include "LISPlayerController.h"

void ALISPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

    if(!BaseUIClass)
    {
        UE_LOG(LogTemp, Error, TEXT("No BaseUIClass set in player controller"));
        return;
    }
	BaseUI = CreateWidget<UBaseUI>(GetGameInstance(),BaseUIClass);
	BaseUI->AddToViewport(0);

    if(!HUDClass)
    {
        UE_LOG(LogTemp, Error, TEXT("No Hud Class set in player controller"));
        return;
    }
	PlayerHud = BaseUI->PushHUD(HUDClass);
}
