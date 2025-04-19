// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "AuraAbilitySystemGlobals.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraAbilitySystemGlobals : public UAbilitySystemGlobals
{
	GENERATED_BODY()
	//This function will decide what class should be used when you want to create an effect context for your gameplayeffect class 
	virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;
};
