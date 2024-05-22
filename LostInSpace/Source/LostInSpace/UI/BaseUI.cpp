#include "BaseUI.h"

UExtendedCommonActivatableWidget* UBaseUI::PushHUD_Implementation(
	TSubclassOf<UExtendedCommonActivatableWidget> HUDClass)
{
	return nullptr;
}

UExtendedCommonActivatableWidget* UBaseUI::PushMenu_Implementation(
	TSubclassOf<UExtendedCommonActivatableWidget> MenuClass)
{
	return nullptr;
}

UExtendedCommonActivatableWidget* UBaseUI::PushPopup_Implementation(
	TSubclassOf<UExtendedCommonActivatableWidget> PopupClass)
{
	return nullptr;
}

void UBaseUI::ShowLoadingScreen_Implementation(){}

void UBaseUI::HideLoadingScreen_Implementation(){}

void UBaseUI::ShowPauseOverlay_Implementation(){}

void UBaseUI::HidePauseOverlay_Implementation(){}
