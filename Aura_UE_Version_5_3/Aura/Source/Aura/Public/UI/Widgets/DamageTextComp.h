// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "DamageTextComp.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UDamageTextComp : public UWidgetComponent
{
	GENERATED_BODY()
public :
	UFUNCTION(BlueprintImplementableEvent , BlueprintCallable)
	void SetDamageText(float damageText);
};
