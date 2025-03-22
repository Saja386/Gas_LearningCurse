// copy right druid mechanics


#include "GAS/PlayerAbilitySystemComponent.h"

void UPlayerAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this , &UPlayerAbilitySystemComponent::EffectApplied);
}

void UPlayerAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* ASC, const FGameplayEffectSpec& Spec,
                                                  FActiveGameplayEffectHandle GameplayEffectHandle)
{
	FGameplayTagContainer TagsContainer;
	Spec.GetAllAssetTags(TagsContainer);
	EffectAssetTag.Broadcast(TagsContainer);
	
}
