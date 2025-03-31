// copy right druid mechanics


#include "GAS/PlayerAbilitySystemComponent.h"

#include "GAS/GameplayAbilities/AuraAbilities.h"

void UPlayerAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this , &UPlayerAbilitySystemComponent::ClientEffectApplied);
}

void UPlayerAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartUpAbilities)
{
	for (TSubclassOf<UGameplayAbility> Ability : StartUpAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability  , 1);
		if (const UAuraAbilities* AuraAbility = Cast<UAuraAbilities>(AbilitySpec.Ability))
		{
			AbilitySpec.DynamicAbilityTags.AddTag(AuraAbility->StartUpInputTag);
			GiveAbility(AbilitySpec);
		}
	}
}

void UPlayerAbilitySystemComponent::AbilityInputTagHeld(const FGameplayTag& InputTags)
{
	if (!InputTags.IsValid()) return;
	for (auto& AbilitySpecs : GetActivatableAbilities())
	{
		//Tell the ability system component that one ability is pressed 
		if(AbilitySpecs.DynamicAbilityTags.HasTagExact(InputTags))
		{
			AbilitySpecInputPressed(AbilitySpecs);
			if(!AbilitySpecs.IsActive())
			{
				TryActivateAbility(AbilitySpecs.Handle);
			}
		}
	}
	
}

void UPlayerAbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag& InputTags)
{
	if (!InputTags.IsValid()) return;
	for (auto& AbilitySpecs : GetActivatableAbilities())
	{
		//Tell the ability system component that one ability is pressed 
		if(AbilitySpecs.DynamicAbilityTags.HasTagExact(InputTags))
		{
			AbilitySpecInputReleased(AbilitySpecs);
		}
	}
}

void UPlayerAbilitySystemComponent::ClientEffectApplied_Implementation(UAbilitySystemComponent* ASC, const FGameplayEffectSpec& Spec,
                                                  FActiveGameplayEffectHandle GameplayEffectHandle)
{
	FGameplayTagContainer TagsContainer;
	Spec.GetAllAssetTags(TagsContainer);
	EffectAssetTag.Broadcast(TagsContainer);
	
}
