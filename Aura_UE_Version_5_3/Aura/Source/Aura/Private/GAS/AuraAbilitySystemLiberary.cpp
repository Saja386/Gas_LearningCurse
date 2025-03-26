// copy right druid mechanics


#include "GAS/AuraAbilitySystemLiberary.h"
#include "UI/WidgetControllers/AuraWidgetController.h"
#include "Kismet/GameplayStatics.h"
#include "States/AuraPlayerState.h"
#include "UI/HUD/AuraBaseHUD.h"

UOverlayWidgetController* UAuraAbilitySystemLiberary::GetOverlayWidgetController(const UObject* WorldContextObject)
{
	if(APlayerController* PC =  UGameplayStatics::GetPlayerController(WorldContextObject , 0))
	{
		if(AAuraBaseHUD* PlayerHUD = Cast<AAuraBaseHUD>(PC->GetHUD()))
		{
			AAuraPlayerState* PS = PC->GetPlayerState<AAuraPlayerState>();
			UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
			UAttributeSet* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WidgetParams = FWidgetControllerParams(PC , PS , ASC , AS);
			return  PlayerHUD->GetOverlayWidgetController(WidgetParams);
		} 
	}
	return nullptr;
}

UAttributeMenuWidgetController* UAuraAbilitySystemLiberary::GetAttributeMenuWidgetController(
	const UObject* WorldContextObject)
{
	if (APlayerController* PC = UGameplayStatics::GetPlayerController(WorldContextObject , 0))
	{
		UE_LOG(LogTemp, Display, TEXT("GetAttributeMenuWidgetController"));
		if(AAuraBaseHUD* PlayerHUD = Cast<AAuraBaseHUD>(PC->GetHUD()))
		{
			AAuraPlayerState* PS = PC->GetPlayerState<AAuraPlayerState>();
			UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
			UAttributeSet* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WidgetParams = FWidgetControllerParams(PC , PS , ASC , AS);
			return PlayerHUD->GetAttributeMenuWidgetController(WidgetParams);
		}
	}
	return nullptr;
}

