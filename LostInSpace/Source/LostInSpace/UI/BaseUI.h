#pragma once

#pragma once

#include "ExtendedCommonActivatableWidget.h"
#include "BaseUI.generated.h"

UCLASS(BlueprintType)
class LOSTINSPACE_API UBaseUI : public UExtendedCommonActivatableWidget
{
	
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	UExtendedCommonActivatableWidget* PushHUD(TSubclassOf<UExtendedCommonActivatableWidget> HUDClass);
	virtual UExtendedCommonActivatableWidget* PushHUD_Implementation(TSubclassOf<UExtendedCommonActivatableWidget> HUDClass);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	UExtendedCommonActivatableWidget* PushMenu(TSubclassOf<UExtendedCommonActivatableWidget> MenuClass);
	virtual UExtendedCommonActivatableWidget* PushMenu_Implementation(TSubclassOf<UExtendedCommonActivatableWidget> HUDClass);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	UExtendedCommonActivatableWidget* PushPopup(TSubclassOf<UExtendedCommonActivatableWidget> PopupClass);
	virtual UExtendedCommonActivatableWidget* PushPopup_Implementation(TSubclassOf<UExtendedCommonActivatableWidget> HUDClass);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void ShowLoadingScreen();
	virtual void ShowLoadingScreen_Implementation();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void HideLoadingScreen();
	virtual void HideLoadingScreen_Implementation();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void ShowPauseOverlay();
	virtual void ShowPauseOverlay_Implementation();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void HidePauseOverlay();
	virtual void HidePauseOverlay_Implementation();
};