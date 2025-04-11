// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "AuraPlayerController.generated.h"


class UDamageTextComp;
class UAuraInputConf;
struct FInputActionValue;
class UInputMappingContext ;
class UInputAction ;
class IEnemyInterface;
class UPlayerAbilitySystemComponent ;
class USplineComponent ;
/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Reliable , Client)
	void ShowTextDamage(float DamageAmount , ACharacter* DamageTarget);
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	
public:
	AAuraPlayerController();
private:
	UPROPERTY(EditAnywhere , Category = "Input")
	TObjectPtr<UInputMappingContext> AuraMappingContext ;
	UPROPERTY(EditAnywhere , Category = "Input")
	TObjectPtr<UInputAction> MoveAction ;
	void Move (const FInputActionValue& MoveInputAction);
	UPROPERTY(EditAnywhere , Category = "Input")
	TObjectPtr<UInputAction> ShiftAction;

	void ShiftPressed(){ BShiftPressed = true;};
	void ShiftReleased(){BShiftPressed = false;};
	bool BShiftPressed = false ; 

	void CorsurTrace();

	TScriptInterface<IEnemyInterface> LastActor ;
	TScriptInterface<IEnemyInterface> ThisActor ;
	FHitResult CursorHit ;

	void AbilityInputTagPressed (FGameplayTag InputTag);
	void AbilityInputTagReleased (FGameplayTag InputTag);
	void AbilityInputTagHeld (FGameplayTag InputTag);

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UAuraInputConf> InputConf ;
	
	TObjectPtr<UPlayerAbilitySystemComponent> AbilitySystemComponent;
	UPlayerAbilitySystemComponent* GetASC ();

	FVector CashedDestination = FVector::ZeroVector;
	float FollowTime = 0.0f ;
	float ShortPressTime = 0.5f ;
	bool BAutoRunning = false;
	bool BTargeting = false;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	float AutoRunAcceptanceRadius = 50.0f ;

	UPROPERTY(VisibleAnywhere, Category = "Input")
	TObjectPtr<USplineComponent> Spline;

	void AutoRun();
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTextComp> DamageTextCompo;
};
