// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetControllers/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"

struct FOnAttributeChangeData;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSignuture, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChangedSignuture , float , NewMaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaChangedSignuture, float, NewMana);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxManaChangedSignuture , float , NewMaxMana);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()
public:
	virtual void  BroadCastInitializedValues() override;
	virtual void BindCallBacksToDependecies() override;

	
	UPROPERTY(BlueprintAssignable , Category="GAS")
	FOnHealthChangedSignuture OnHealthChanged;
	UPROPERTY(BlueprintAssignable , Category="GAS")
	FOnMaxHealthChangedSignuture OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable , Category="GAS")
	FOnManaChangedSignuture OnManaChanged;
	UPROPERTY(BlueprintAssignable , Category="GAS")
	FOnMaxManaChangedSignuture OnMaxManaChanged;

	void HealthChanged(const FOnAttributeChangeData& Data) const;
	void MaxHealthChanged(const FOnAttributeChangeData& Data)const;
	void ManaChanged(const FOnAttributeChangeData& Data) const;
	void MaxManaChanged(const FOnAttributeChangeData& Data)const;
};
