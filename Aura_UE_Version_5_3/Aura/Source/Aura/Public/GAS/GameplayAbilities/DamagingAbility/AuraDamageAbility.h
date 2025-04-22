// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GAS/GameplayAbilities/AuraAbilities.h"
#include "AuraDamageAbility.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraDamageAbility : public UAuraAbilities
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly , Category="Effects")
	TSubclassOf<UGameplayEffect> DamageEffectClass;

	UPROPERTY(EditDefaultsOnly , Category="Damage" )
	TMap<FGameplayTag , FScalableFloat> DamageTagMap;

	
};
