// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AuraAbilities.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraAbilities : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly , Category="Abilities" )
	FGameplayTag StartUpInputTag ;
	
};
