// copy right druid mechanics


#include "GAS/PlayerAbilitySystemComponent.h"

void UPlayerAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this , &UPlayerAbilitySystemComponent::EffectApplied);
}

void UPlayerAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartUpAbilities)
{
	for (TSubclassOf<UGameplayAbility> Ability : StartUpAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability  , 1);
		//GiveAbility(AbilitySpec);
		GiveAbilityAndActivateOnce(AbilitySpec);
	}
}

void UPlayerAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* ASC, const FGameplayEffectSpec& Spec,
                                                  FActiveGameplayEffectHandle GameplayEffectHandle)
{
	FGameplayTagContainer TagsContainer;
	Spec.GetAllAssetTags(TagsContainer);
	EffectAssetTag.Broadcast(TagsContainer);
	
}
