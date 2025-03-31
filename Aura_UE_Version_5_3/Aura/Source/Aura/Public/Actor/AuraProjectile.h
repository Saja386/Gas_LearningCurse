// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameFramework/Actor.h"
#include "AuraProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UNiagaraSystem;

UCLASS()
class AURA_API AAuraProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AAuraProjectile();
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UProjectileMovementComponent> AuraProjectileMovementComponent;

	UPROPERTY(BlueprintReadWrite , meta = (ExposeOnSpawn = true))
	FGameplayEffectSpecHandle AuraEffectHandle;

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnSphereOverlap (UPrimitiveComponent* OverlapedComponent  , AActor* OtherActor , UPrimitiveComponent* OtherComponent , int32 OtherBodyIndex , bool bFromSweep , const FHitResult& SweepHitResult);
	virtual void Destroyed() override;
private:
	UPROPERTY(EditDefaultsOnly)
	float LifeSpan = 15 ; 
	bool BHit = false;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USphereComponent> SphereComponent;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UNiagaraSystem> ImpactEffect ;
	UPROPERTY(EditAnywhere)
	TObjectPtr<USoundBase> ImpactSound;
	UPROPERTY(EditAnywhere)
	TObjectPtr<USoundBase> LoopingSound;
	UPROPERTY()
	TObjectPtr<UAudioComponent> LoopingSoundComponent;
};
