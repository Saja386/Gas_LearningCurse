// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"


struct FInputActionValue;
class UInputMappingContext ;
class UInputAction ; 

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
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
};
