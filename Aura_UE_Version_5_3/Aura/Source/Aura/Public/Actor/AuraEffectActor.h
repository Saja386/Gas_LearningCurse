// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AuraEffectActor.generated.h"

class UGameplayEffect;

UCLASS()
class AURA_API AAuraEffectActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AAuraEffectActor();

protected:
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
	void ApplyEffectOnTarget (AActor* TargetActor, TSubclassOf<UGameplayEffect> EffectClass);
	
	UPROPERTY(EditAnywhere ,BlueprintReadOnly , Category="effects")
	TSubclassOf<UGameplayEffect>InstantGameplayEffectClass;
};
