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
	//We Need to add a function tp make avariable Replicated
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps ) const override;
	

	virtual void PostGameplayEffectExecute(const  FGameplayEffectModCallbackData& Data) override;
	// primary attributes
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Strength ,Category="Primary Attributes")
	FGameplayAttributeData Strength ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Strength);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Intelligence ,Category="Primary Attributes")
	FGameplayAttributeData Intelligence ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Intelligence);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Resilience ,Category="Primary Attributes")
	FGameplayAttributeData Resilience ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Resilience);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Vigor ,Category="Primary Attributes")
	FGameplayAttributeData Vigor ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Vigor);


	// Secondary Attributes
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Armor ,Category="Secondary Attributes")
	FGameplayAttributeData Armor ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Armor);
	
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_ArmorPenetration ,Category="Secondary Attributes")
	FGameplayAttributeData ArmorPenetration ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,ArmorPenetration);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_BlockChance ,Category="Secondary Attributes")
	FGameplayAttributeData BlockChance ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,BlockChance);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_CriticalHitChance ,Category="Secondary Attributes")
	FGameplayAttributeData CriticalHitChance ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,CriticalHitChance);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_CriticalHitDamage ,Category="Secondary Attributes")
	FGameplayAttributeData CriticalHitDamage ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,CriticalHitDamage);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_CriticalHitResistance ,Category="Secondary Attributes")
	FGameplayAttributeData CriticalHitResistance ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,CriticalHitResistance);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_HealthRegeneration ,Category="Secondary Attributes")
	FGameplayAttributeData HealthRegeneration ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,HealthRegeneration);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_ManaRegeneration ,Category="Secondary Attributes")
	FGameplayAttributeData ManaRegeneration ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,ManaRegeneration);
	
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_MaxMana ,Category="Secondary Attributes")
	FGameplayAttributeData MaxMana ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,MaxMana);

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_MaxHealth ,Category="Secondary Attributes")
	FGameplayAttributeData MaxHealth ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,MaxHealth);
	// vital attributes 
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Health ,Category="Vital Attributes")
	FGameplayAttributeData Health ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Health);

	

	
	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_Mana ,Category="Vital Attributes")
	FGameplayAttributeData Mana ;
	ATTRIBUTE_ACCESSORS(UPlayerAttributeSet,Mana);


	

	//Then we need to notify the GAS That our variable has changed from the server .
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& CurrentHealth) const;

	UFUNCTION()
	void OnRep_MaxHealth (const FGameplayAttributeData& CurrentMaxHealth) const;

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& CurrentMana) const;

	UFUNCTION()
	void OnRep_MaxMana (const FGameplayAttributeData& CurrentMaxMana) const;

	UFUNCTION()
	void OnRep_Strength (const FGameplayAttributeData& CurrentStrength) const;

	UFUNCTION()
	void OnRep_Intelligence (const FGameplayAttributeData& CurrentIntelligence) const;

	UFUNCTION()
	void OnRep_Resilience (const FGameplayAttributeData& CurrentResilience) const;

	UFUNCTION()
	void OnRep_Vigor (const FGameplayAttributeData& CurrentVigor) const;

	UFUNCTION()
	void OnRep_Armor (const FGameplayAttributeData& CurrentArmor) const;

	UFUNCTION()
	void OnRep_ArmorPenetration (const FGameplayAttributeData& CurrentArmorPenetration) const;

	UFUNCTION()
	void OnRep_BlockChance (const FGameplayAttributeData& CurrentBlockChance) const;

	UFUNCTION()
	void OnRep_CriticalHitChance (const FGameplayAttributeData& CurrentCriticalHitChance) const;

	UFUNCTION()
	void OnRep_CriticalHitDamage (const FGameplayAttributeData& CurrentCriticalHitDamage) const;

	UFUNCTION()
	void OnRep_CriticalHitResistance (const FGameplayAttributeData& CurrentCriticalHitResistance) const;

	UFUNCTION()
	void OnRep_HealthRegeneration (const FGameplayAttributeData& CurrentHealthRegeneration) const;

	UFUNCTION()
	void OnRep_ManaRegeneration (const FGameplayAttributeData& CurrentManaRegeneration) const;
	


private:
	void SetEffectProperties (const FGameplayEffectModCallbackData& Data, FEffectGamePlayProperties& Proprties) const ;
};
