// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AuraEffectActor.generated.h"

class USphereComponent;

UCLASS()
class AURA_API AAuraEffectActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AAuraEffectActor();
	UFUNCTION()
	virtual void OnOverLap (UPrimitiveComponent* OverlappedComponent , AActor* OtherActor ,UPrimitiveComponent* OtherComp , int32 OtherBodyIndex , bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void EndOverLap (UPrimitiveComponent* OverLappedComponent , AActor* OtherActor ,UPrimitiveComponent* OtherComp , int32 OtherBodyIndex);
protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere)
	TObjectPtr<USphereComponent> SphereComponent;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> Mesh ; 
};
