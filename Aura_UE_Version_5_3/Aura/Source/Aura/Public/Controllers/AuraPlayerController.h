// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"


struct FInputActionValue;
class UInputMappingContext ;
class UInputAction ;
class IEnemyInterface;

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
	virtual void Tick(float DeltaTime) override;
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

	void CorsurTrace();

	TScriptInterface<IEnemyInterface> LastActor ;
	TScriptInterface<IEnemyInterface> ThisActor ;
};
