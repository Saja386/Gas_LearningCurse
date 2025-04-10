// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Data/CharacterDefaultClassInfo.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AuraAbilitySystemLiberary.generated.h"

class UAbilitySystemComponent;
class UAttributeMenuWidgetController;
class UOverlayWidgetController;
/**
 * 
 */
UCLASS()
class AURA_API UAuraAbilitySystemLiberary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure , Category = "Aura Ability System|OverLayWidgetController ")
	static UOverlayWidgetController* GetOverlayWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure , Category = "Aura Ability System|AttributeWidgetController")
	static UAttributeMenuWidgetController* GetAttributeMenuWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable , Category = "Aura Ability System|AttributeWidgetController")
	static void InitializeDefaultAttributesbyClass (const UObject* WorldContextObject ,ECharacterClasses CharacterClasses , float Level , UAbilitySystemComponent* ASC);

	UFUNCTION(BlueprintCallable , Category = "Aura Ability System|AttributeWidgetController")
	static void GiveStartUpAbilitys (const UObject* WorldContextObject , UAbilitySystemComponent* ASC);
};
