// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterDefaultClassInfo.generated.h"

class UGameplayEffect;

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
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TSubclassOf<UGameplayEffect> SecondaryAttributes;
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TSubclassOf<UGameplayEffect> VitalAttributes;
	UPROPERTY(EditDefaultsOnly , Category="Common Class Defaults")
	TMap<ECharacterClasses, FCharacterDefaultClassInfo> CharacterClassInformation;

	FCharacterDefaultClassInfo GetDefaultClassInfo(ECharacterClasses CharacterClass);
};
