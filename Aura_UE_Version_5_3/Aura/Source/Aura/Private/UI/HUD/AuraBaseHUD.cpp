// copy right druid mechanics


#include "UI/HUD/AuraBaseHUD.h"

#include "Blueprint/UserWidget.h"
#include "UI/WidgetControllers/OverlayWidgetController.h"
#include "UI/Widgets/AuraUserWidget.h"


UOverlayWidgetController* AAuraBaseHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverlayWidgetController == nullptr)
	{
		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
		OverlayWidgetController->SetWidgetControllerParams(WCParams);
		OverlayWidgetController->BindCallBacksToDependecies();
		return OverlayWidgetController;
	}
	return OverlayWidgetController ; 
}

void AAuraBaseHUD::InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	checkf(OverlayWidgetControllerClass , TEXT("Overlay Widget controller Has not been set"));
	checkf(OverLayWidgetClass , TEXT("Overlay Widget class has not been set"));
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverLayWidgetClass);
	OverLayWidget = Cast <UAuraUserWidget>(Widget);

	FWidgetControllerParams WidgetParams (PC , PS , ASC, AS);
	UOverlayWidgetController* WidgetController = GetOverlayWidgetController(WidgetParams);

	OverLayWidget->SetWidgetController(OverlayWidgetController);
	WidgetController->BroadCastInitializedValues();
	Widget->AddToViewport();
}

