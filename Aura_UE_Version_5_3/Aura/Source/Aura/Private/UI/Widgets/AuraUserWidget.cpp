// copy right druid mechanics


#include "UI/Widgets/AuraUserWidget.h"

#include "UnrealWidgetFwd.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidget)
{
	WidgetController = InWidget;
	OnWidgetControllerSet();
}
