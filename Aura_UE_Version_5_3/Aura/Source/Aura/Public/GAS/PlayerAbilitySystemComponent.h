// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "PlayerAbilitySystemComponent.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE_OneParam(FEffectAssetTag , const FGameplayTagContainer&)
UCLASS()
class AURA_API UPlayerAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	void AbilityActorInfoSet ();
	FEffectAssetTag EffectAssetTag;
	void AddCharacterAbilities (const TArray<TSubclassOf<UGameplayAbility>>& StartUpAbilities);

	void AbilityInputTagHeld (const FGameplayTag& InputTags);
	void AbilityInputTagReleased (const FGameplayTag& InputTags);
protected:
	UFUNCTION(Client , Reliable)
	void ClientEffectApplied (UAbilitySystemComponent* ASC  , const FGameplayEffectSpec& Spec , FActiveGameplayEffectHandle GameplayEffectHandle); 
};
