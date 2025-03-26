// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Interfaces/CombatInterface.h"
#include "BaseCharacter.generated.h"


class UGameplayAbility;
class UGameplayEffect;
class UAbilitySystemComponent ;
class UAttributeSet ;

UCLASS(Abstract)
class AURA_API ABaseCharacter : public ACharacter ,public  IAbilitySystemInterface , public ICombatInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const{return AttributeSet;};

protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere , Category = "Combat" )
	TObjectPtr<USkeletalMeshComponent> Weapon ; 

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent ;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet ;
	virtual void SetInitInfo ();

	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category = "Attributes" )
	TSubclassOf<UGameplayEffect> DefaultPrimaryAttributes ;

	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category = "Attributes" )
	TSubclassOf<UGameplayEffect> DefaultSecondaryAttributes ;
	
	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category = "Attributes" )
	TSubclassOf<UGameplayEffect> DefaultVitalAttributes ;
	
	void ApplyEffectToSelf (TSubclassOf<UGameplayEffect> GamePlayEffectClass , float Level) const;
	void InitializeDefaultAttributes() const;
	
	void AddAbilitiesToCharacter();
private:
	UPROPERTY(EditAnywhere,Category="Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartUpAbilities;
};
