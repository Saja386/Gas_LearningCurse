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
protected:
	void EffectApplied (UAbilitySystemComponent* ASC  , const FGameplayEffectSpec& Spec , FActiveGameplayEffectHandle GameplayEffectHandle); 
};
