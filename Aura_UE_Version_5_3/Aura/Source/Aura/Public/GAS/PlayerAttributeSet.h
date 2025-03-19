// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "PlayerAttributeSet.generated.h"

/**
 * 
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
USTRUCT()
struct FEffectGamePlayProperties
{
	GENERATED_BODY()
	FEffectGamePlayProperties(){}

	FGameplayEffectContextHandle EffectContextHandle;
	UPROPERTY()
	UAbilitySystemComponent* SourceASC  = nullptr;
	
	UPROPERTY()
	AActor* SourceAvatarActor = nullptr;
	
	UPROPERTY()
	AController* SourceController = nullptr;
	
	UPROPERTY()
	ACharacter* SourceCharacter = nullptr;

	UPROPERTY()
	UAbilitySystemComponent* TargetASC  = nullptr;
	
	UPROPERTY()
	AActor* TargetAvatarActor = nullptr;
	
	UPROPERTY()
	AController* TargetController = nullptr;
	
	UPROPERTY()
	ACharacter* TargetCharacter = nullptr;
	
};

UCLASS()
class AURA_API UPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPlayerAttributeSet();
	//We Need to add a function tp make avariable Replicated
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps ) const override;
	
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void PostGameplayEffectExecute(const  FGameplayEffectModCallbackData& Data) override;
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Health ,Category="Health")
	FGameplayAttributeData Health ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Health);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_MaxHealth ,Category="Health")
	FGameplayAttributeData MaxHealth ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,MaxHealth);

	
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Mana ,Category="Health")
	FGameplayAttributeData Mana ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Mana);


	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_MaxMana ,Category="Health")
	FGameplayAttributeData MaxMana ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,MaxMana);

	//Then we need to notify the GAS That our variable has changed from the server .
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& CurrentHealth) const;

	UFUNCTION()
	void OnRep_MaxHealth (const FGameplayAttributeData& CurrentMaxHealth) const;

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& CurrentMana) const;

	UFUNCTION()
	void OnRep_MaxMana (const FGameplayAttributeData& CurrentMaxMana) const;

private:
	void SetEffectProperties (const FGameplayEffectModCallbackData& Data, FEffectGamePlayProperties& Proprties) const ;
};
