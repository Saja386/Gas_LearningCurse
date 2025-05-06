// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AuraEnemyAiController.generated.h"

class UBehaviorTreeComponent;
class UBlackboardComponent;
/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemyAiController : public AAIController
{
	GENERATED_BODY()
public:
	AAuraEnemyAiController();

protected:
	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComp;
};
