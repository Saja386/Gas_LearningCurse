// copy right druid mechanics


#include "UI/WidgetControllers/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams Struct)
{
	PlayerController = Struct.PlayerController;
	PlayerState = Struct.PlayerState;
	AbilitySystemComponent = Struct.AbilitySystemComponent;
	AttributeSet = Struct.AttributeSet;
}
