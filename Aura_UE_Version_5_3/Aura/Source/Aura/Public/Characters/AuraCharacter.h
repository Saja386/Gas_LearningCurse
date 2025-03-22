// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public ABaseCharacter
{
	GENERATED_BODY()
	AAuraCharacter();
public:
	virtual void PossessedBy(AController* NewController) override;
	virtual void  OnRep_PlayerState() override;

private:
	virtual void SetInitInfo () override;
	
};
