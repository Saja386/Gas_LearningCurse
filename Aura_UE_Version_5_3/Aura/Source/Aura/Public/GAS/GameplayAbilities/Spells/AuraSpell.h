// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GAS/GameplayAbilities/AuraAbilities.h"
#include "GAS/GameplayAbilities/DamagingAbility/AuraDamageAbility.h"
#include "AuraSpell.generated.h"

class AAuraProjectile;
class UGameplayEffect;
/**
 * 
 */
UCLASS()
class AURA_API UAuraSpell : public UAuraDamageAbility
{
	GENERATED_BODY()
protected:
	//virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	UPROPERTY(EditAnywhere , BlueprintReadOnly)
	TSubclassOf<AAuraProjectile> ProjectileClass ;

	UFUNCTION(BlueprintCallable)
	void SpawnProjectile (const FVector& TargetLocation);

	
	
};
