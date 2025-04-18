// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterDefaultClassInfo.generated.h"

class UGameplayEffect;
class UGameplayAbility;
UENUM(BlueprintType)
enum class ECharacterClasses :uint8
{
	Elementalist,
	Warrior,
	Ranger
};
USTRUCT(BlueprintType)
struct FCharacterDefaultClassInfo
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly , Category="Class Defaults")
	TSubclassOf<UGameplayEffect> PrimaryAttributes; 
	
};
/**
 * 
 */
UCLASS()
class AURA_API UCharacterClassInfo : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TSubclassOf<UGameplayEffect> SecondaryAttributes;
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TSubclassOf<UGameplayEffect> VitalAttributes;
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TMap<ECharacterClasses, FCharacterDefaultClassInfo> CharacterClassInformation;
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TArray<TSubclassOf<UGameplayAbility>> CommonGameplayAbilitys ;
	
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TObjectPtr<UCurveTable> DamageCoefficienseTable; 
	FCharacterDefaultClassInfo GetDefaultClassInfo(ECharacterClasses CharacterClass);
};
