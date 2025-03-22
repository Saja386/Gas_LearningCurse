// copy right druid mechanics


#include "UI/WidgetControllers/OverlayWidgetController.h"

#include "GAS/PlayerAbilitySystemComponent.h"
#include "GAS/PlayerAttributeSet.h"
#include "Kismet/GameplayStatics.h"

void UOverlayWidgetController::BroadCastInitializedValues()
{
	const UPlayerAttributeSet* AuraAttributeSet = CastChecked<UPlayerAttributeSet>(AttributeSet);
	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
	OnManaChanged.Broadcast(AuraAttributeSet->GetMana());
	OnMaxManaChanged.Broadcast(AuraAttributeSet->GetMaxMana());

}

void UOverlayWidgetController::BindCallBacksToDependecies()
{
	const UPlayerAttributeSet* AuraAttributeSet = CastChecked<UPlayerAttributeSet>(AttributeSet);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetHealthAttribute()).AddLambda([this](const FOnAttributeChangeData& Data)
		{
			OnHealthChanged.Broadcast(Data.NewValue);
		});

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetMaxHealthAttribute()).AddLambda([this](const FOnAttributeChangeData& Data)
		{
			OnMaxHealthChanged.Broadcast(Data.NewValue);
		});

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetManaAttribute()).AddLambda([this](const FOnAttributeChangeData& Data)
		{
			OnManaChanged.Broadcast(Data.NewValue);
		});;

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	AuraAttributeSet->GetMaxManaAttribute()).AddLambda([this](const FOnAttributeChangeData& Data)
	{
		OnMaxManaChanged.Broadcast(Data.NewValue);
	});;

	
	Cast<UPlayerAbilitySystemComponent>(AbilitySystemComponent)->EffectAssetTag.AddLambda([this](const FGameplayTagContainer& Container)
	{
		for (const FGameplayTag& Tag : Container)
		{
			FGameplayTag MessageTag = FGameplayTag::RequestGameplayTag(FName("Message"));
			if (Tag.MatchesTag(MessageTag))
			{
				const FUIWidgetRow* Row = GetDataTableRowByTag<FUIWidgetRow>(MessageWidgetDataTable , Tag);
				MessageWidgetRowSignuture.Broadcast(*Row) ;
			}
		}
	});
}

