// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameFramework/Actor.h"
#include "AuraEffectActor.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;
UENUM(BlueprintType)
enum class EApplicationPolicy : uint8
{
	ApplyOverlap ,
	ApplyOnEndOverlap ,
	DoNotApply 
};
UENUM(BlueprintType)
enum class ERemovalPolicy : uint8
{
	RemoveOnEndOverlap ,
	DoNotRemove
};
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
	bool ShouldBeDestroyed = false ;
	UPROPERTY(EditAnywhere ,BlueprintReadOnly , Category="effects")
	bool ShouldEffectEnemy = false ;
	UFUNCTION(BlueprintCallable)
	void OnOverlap (AActor* OtherActor);
	UFUNCTION(BlueprintCallable)
	void OnEndOverlap(AActor* OtherActor);
	
	UPROPERTY(EditAnywhere ,BlueprintReadOnly , Category="effects")
	TSubclassOf<UGameplayEffect>InstantGameplayEffectClass;
	UPROPERTY(EditAnywhere ,BlueprintReadOnly , Category="effects")
	TSubclassOf<UGameplayEffect>InfiniteGameplayEffectClass;
	UPROPERTY(EditAnywhere ,BlueprintReadOnly , Category="effects")
	EApplicationPolicy InfiniteApplucationPolicy  = EApplicationPolicy::DoNotApply;
	UPROPERTY(EditAnywhere ,BlueprintReadOnly , Category="effects")
	ERemovalPolicy InfiniteRemovalPolicy = ERemovalPolicy::RemoveOnEndOverlap ;

	TMap<FActiveGameplayEffectHandle , UAbilitySystemComponent*> EffectsHandle ;
	UPROPERTY(EditAnywhere ,BlueprintReadOnly , Category="effects")
	float ActorLevel = 1.0f;
	
};
