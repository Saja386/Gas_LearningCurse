// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
/**
 * 
 */
struct FAuraGamePlayTags
{
public:
	static const FAuraGamePlayTags& Get (){return GamePlayTags;};
	static void initializeNativeGamePlayTags();
	//Primary Attributes
	FGameplayTag Attribute_Primary_Strength ;
	FGameplayTag Attribute_Primary_Intelligence ;
	FGameplayTag Attribute_Primary_Vigor ;
	FGameplayTag Attribute_Primary_Resilience ;




	//Secondary Attributes
	FGameplayTag Attribute_Secondary_Armor ;
	FGameplayTag Attribute_Secondary_ArmorPenetration ;
	FGameplayTag Attribute_Secondary_BlockChance ;
	FGameplayTag Attribute_Secondary_CriticalHitChance ;
	FGameplayTag Attribute_Secondary_CriticalHitDamage ;
	FGameplayTag Attribute_Secondary_CriticalHitResistance ;
	FGameplayTag Attribute_Secondary_HealthRegeneration ;
	FGameplayTag Attribute_Secondary_ManaRegeneration ;
	FGameplayTag Attribute_Secondary_MaxHealth;
	FGameplayTag Attribute_Secondary_MaxMana;


	FGameplayTag Attribute_Resitances_Fire;
	FGameplayTag Attribute_Resitances_Lightning ;
	FGameplayTag Attribute_Resitances_Arcane;
	FGameplayTag Attribute_Resitances_Physical;

	//InputAction GameplayTag :
	FGameplayTag InputTag_LMB ;
	FGameplayTag InputTag_RMB ;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;
	FGameplayTag Damage;
	FGameplayTag Damage_Fire;
	FGameplayTag Damage_Lightning;
	FGameplayTag Damage_Arcane;
	FGameplayTag Damage_Physical;

	TMap<FGameplayTag , FGameplayTag> DamageToResistance ;


	//Effect GameplayTags 
	FGameplayTag Effect_HitReact ;
protected:

private:
  static FAuraGamePlayTags GamePlayTags; 
};
