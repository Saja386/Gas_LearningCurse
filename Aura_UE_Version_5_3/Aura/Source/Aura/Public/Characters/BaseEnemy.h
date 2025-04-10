// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "Interfaces/EnemyInterface.h"
#include "UI/WidgetControllers/OverlayWidgetController.h"
#include "GAS/Data/CharacterDefaultClassInfo.h"
#include "BaseEnemy.generated.h"


class UWidgetComponent;
/**
 * 
 */
UCLASS()
class AURA_API ABaseEnemy : public ABaseCharacter ,public IEnemyInterface
{
	GENERATED_BODY()
public:
	virtual int32 GetPlayerLevel() override;
	virtual void HighlightActor () override;
	virtual void UnHighlightActor () override;
	ABaseEnemy();

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignuture OnHealthChanged ;

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignuture OnMaxHealthChanged ;

	UPROPERTY(BlueprintReadOnly , Category = "CombatStates")
	bool BHitReacting = false ;

	UPROPERTY(BlueprintReadOnly , Category = "Movement")
	float BaseMaxWalkSpeed = 400.f ;

	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category = "Movement")
	float LifeSpan = 5.f ;
	void HitReactTagChanged (const FGameplayTag IncomingTag , int32 NewCount);

	virtual void Die() override;
protected:
	virtual void BeginPlay() override;
	virtual void SetInitInfo() override;
	UPROPERTY(EditAnywhere , BlueprintReadOnly, Category = "CharacterClassDefaults")
	int32 Level = 1;
	UPROPERTY(EditAnywhere , BlueprintReadOnly, Category = "CharacterClassDefaults")
	ECharacterClasses EnemyClass = ECharacterClasses::Warrior;

	UPROPERTY(VisibleAnywhere , BlueprintReadOnly)
	TObjectPtr<UWidgetComponent> HealthBarComponent;

	void InitializeDefaultAttributes() const override;


	
};
