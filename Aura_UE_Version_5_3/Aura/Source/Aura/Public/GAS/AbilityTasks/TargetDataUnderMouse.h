// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "TargetDataUnderMouse.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMouseTargetDataSignature, const FGameplayAbilityTargetDataHandle& , Data);
/**
 * 
 */
UCLASS()
class AURA_API UTargetDataUnderMouse : public UAbilityTask
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable , Category="Ability|Tasks|TargetData" , meta = (HidePin = "OwningAbility" , DefaultToSelf = "OwningAbility" , BlueprintInternalUseOnly = true))
	static UTargetDataUnderMouse* CreateTargetDataUnderMouse(UGameplayAbility* OwningAbility);

	UPROPERTY(BlueprintAssignable, Category="Ability|Task")
	FMouseTargetDataSignature ValidData ;

private:
	virtual void Activate() override;
	void SendDataUnderMouseCoruserHit ();
	void OnTargetDataReplicateCallback(const FGameplayAbilityTargetDataHandle& DataHandle , FGameplayTag GameplayTag);
};
