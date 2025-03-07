// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "Interfaces/EnemyInterface.h"
#include "BaseEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API ABaseEnemy : public ABaseCharacter ,public IEnemyInterface
{
	GENERATED_BODY()
public:
	
	virtual void HighlightActor () override;
	virtual void UnHighlightActor () override;
	ABaseEnemy();
};
