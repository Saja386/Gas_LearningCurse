// copy right druid mechanics


#include "GAS/AuraAbilitySystemLiberary.h"

#include "AbilitySystemComponent.h"
#include "AuraAbilitiesTypes.h"
#include "Game/AuraGameModeBase.h"
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

void UAuraAbilitySystemLiberary::InitializeDefaultAttributesbyClass(const UObject* WorldContextObject ,ECharacterClasses CharacterClasses, float Level ,UAbilitySystemComponent* ASC)
{
	 AAuraGameModeBase* AuraGameModeBase = Cast<AAuraGameModeBase>(UGameplayStatics::GetGameMode(WorldContextObject));
	if(AuraGameModeBase==nullptr) return;
	AActor* AvatarActor = ASC->GetAvatarActor();
	
	UCharacterClassInfo* ClassDefaultInfo = AuraGameModeBase->CharacterClassInfo;
	
	FCharacterDefaultClassInfo ClassInfo = ClassDefaultInfo->GetDefaultClassInfo(CharacterClasses);


	
	FGameplayEffectContextHandle PrimaryContextHandle =  ASC->MakeEffectContext();
	PrimaryContextHandle.AddSourceObject(AvatarActor);
	FGameplayEffectSpecHandle PrimaryEspec = ASC->MakeOutgoingSpec(ClassInfo.PrimaryAttributes , Level , PrimaryContextHandle);
	ASC->ApplyGameplayEffectSpecToSelf(*PrimaryEspec.Data.Get());

	
	FGameplayEffectContextHandle SecondaryContextHandle =  ASC->MakeEffectContext();
	SecondaryContextHandle.AddSourceObject(AvatarActor);
	FGameplayEffectSpecHandle SecondarySpec = ASC->MakeOutgoingSpec(ClassDefaultInfo->SecondaryAttributes , Level , SecondaryContextHandle);
	ASC->ApplyGameplayEffectSpecToSelf(*SecondarySpec.Data.Get());

	
	FGameplayEffectContextHandle VitalContextHandle =  ASC->MakeEffectContext();
	VitalContextHandle.AddSourceObject(AvatarActor);
	FGameplayEffectSpecHandle VitalSpec = ASC->MakeOutgoingSpec(ClassDefaultInfo->VitalAttributes , Level , VitalContextHandle);
	ASC->ApplyGameplayEffectSpecToSelf(*VitalSpec.Data.Get());

	
}

void UAuraAbilitySystemLiberary::GiveStartUpAbilitys(const UObject* WorldContextObject, UAbilitySystemComponent* ASC)
{
	AAuraGameModeBase* AuraGameModeBase = Cast<AAuraGameModeBase>(UGameplayStatics::GetGameMode(WorldContextObject));
	if(AuraGameModeBase==nullptr) return;
	UCharacterClassInfo* ClassDefaultInfo = AuraGameModeBase->CharacterClassInfo;
	for (TSubclassOf<UGameplayAbility> abilityclass : ClassDefaultInfo->CommonGameplayAbilitys)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(abilityclass , 1);
		ASC->GiveAbility(AbilitySpec);
	}
}

UCharacterClassInfo* UAuraAbilitySystemLiberary::GetCharacterClassInfo(const UObject* WorldContextObject)
{
	AAuraGameModeBase* AuraGameModeBase = Cast<AAuraGameModeBase>(UGameplayStatics::GetGameMode(WorldContextObject));
	if(AuraGameModeBase==nullptr) return nullptr;
	return  AuraGameModeBase->CharacterClassInfo;
}

bool UAuraAbilitySystemLiberary::IsBlockHit(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if(const FAuraGamePlayEffectContextStruct* AuraEffectContext = static_cast<const FAuraGamePlayEffectContextStruct*>(EffectContextHandle.Get()))
	{
		return AuraEffectContext->GetBIsBlock();
	}
	return false;
}

bool UAuraAbilitySystemLiberary::IsCriticalHit(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if(const FAuraGamePlayEffectContextStruct* AuraEffectContext = static_cast<const FAuraGamePlayEffectContextStruct*>(EffectContextHandle.Get()))
	{
		return AuraEffectContext->GetBIsCriticalHit();
	}
	return false;
}

void UAuraAbilitySystemLiberary::SetIsBlockHit(FGameplayEffectContextHandle& EffectContextHandle, bool IsBlockedHit)
{
	if(FAuraGamePlayEffectContextStruct* AuraEffectContext = static_cast<FAuraGamePlayEffectContextStruct*>(EffectContextHandle.Get()))
	{
		AuraEffectContext->SetBIsBlock(IsBlockedHit);
	}
}

void UAuraAbilitySystemLiberary::SetIsCritical(FGameplayEffectContextHandle& EffectContextHandle, bool IsCritical)
{
	if(FAuraGamePlayEffectContextStruct* AuraEffectContext = static_cast<FAuraGamePlayEffectContextStruct*>(EffectContextHandle.Get()))
	{
		AuraEffectContext->SetBIsCriticalHit(IsCritical);
	}
}


