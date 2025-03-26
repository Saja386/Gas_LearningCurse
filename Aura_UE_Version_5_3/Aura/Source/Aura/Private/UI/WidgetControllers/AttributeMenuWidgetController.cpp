// copy right druid mechanics


#include "UI/WidgetControllers/AttributeMenuWidgetController.h"

#include "AuraGamePlayTags.h"
#include "GAS/PlayerAttributeSet.h"
#include "GAS/Data/AttributeInfo.h"
#include "Kismet/GameplayStatics.h"

void UAttributeMenuWidgetController::BroadCastInitializedValues()
{
	UPlayerAttributeSet* AS = CastChecked<UPlayerAttributeSet>(AttributeSet);
	check(AttributeInfo);
	for(auto& Pair : AS->TagsToAttributes)
	{
		FAuraAttributeInfo Info = AttributeInfo->FindAttributeInfoByTag(Pair.Key) ;
		FGameplayAttribute Atr = Pair.Value();
		Info.AttributeValue = Atr.GetNumericValue(AS) ;
		AttributeInfoDelegate.Broadcast(Info);
	}
}

void UAttributeMenuWidgetController::BindCallBacksToDependecies()
{
	UPlayerAttributeSet* AS = CastChecked<UPlayerAttributeSet>(AttributeSet);
	for(auto& Pair : AS->TagsToAttributes)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Pair.Value()).AddLambda(
			[this , Pair , AS](const FOnAttributeChangeData& Data)
			{
				FAuraAttributeInfo Info = AttributeInfo->FindAttributeInfoByTag(Pair.Key) ;
				Info.AttributeValue = Pair.Value().GetNumericValue(AS);
				AttributeInfoDelegate.Broadcast(Info);
			});		
	}
}
