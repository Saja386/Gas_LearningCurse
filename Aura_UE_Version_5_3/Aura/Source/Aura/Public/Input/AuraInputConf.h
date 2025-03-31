// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "AuraInputConf.generated.h"

USTRUCT(BlueprintType)
struct FAuraInputConfStruct
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	const class UInputAction* InputAction = nullptr;
	
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputGameplayTag = FGameplayTag();
	
};

/**
 * 
 */
UCLASS()
class AURA_API UAuraInputConf : public UDataAsset
{
	GENERATED_BODY()

public:
	const UInputAction* FindInputActionByTag(const FGameplayTag& Tag ,bool  BlogNoFound = false) const;
	
	UPROPERTY(EditDefaultsOnly ,BlueprintReadOnly, Category = "Aura Input")
	TArray<FAuraInputConfStruct> AbilityInputActionConf;
	
};
