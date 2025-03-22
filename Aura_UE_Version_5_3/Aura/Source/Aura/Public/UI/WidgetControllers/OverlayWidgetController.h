// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UI/WidgetControllers/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"

class UAuraUserWidget;
struct FOnAttributeChangeData;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeChangedSignuture , float , NewMaxHealth);

USTRUCT(BlueprintType)
struct FUIWidgetRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag MassageTag = FGameplayTag();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText MassageText = FText();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UAuraUserWidget> MassageWidget ;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* MassageTexture = nullptr ;
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMessageWidgetRowSignuture , FUIWidgetRow , Row);



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
	FOnAttributeChangedSignuture OnHealthChanged;
	
	UPROPERTY(BlueprintAssignable , Category="GAS")
	FOnAttributeChangedSignuture OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable , Category="GAS")
	FOnAttributeChangedSignuture OnManaChanged;
	
	UPROPERTY(BlueprintAssignable , Category="GAS")
	FOnAttributeChangedSignuture OnMaxManaChanged;

	UPROPERTY(BlueprintAssignable , Category="GAS")
	FMessageWidgetRowSignuture MessageWidgetRowSignuture ;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="GAS")
	TObjectPtr<UDataTable> MessageWidgetDataTable;
	
	

	template<typename T>
	T* GetDataTableRowByTag(UDataTable* DataTable , const FGameplayTag& Tag);
};

template <typename T>
T* UOverlayWidgetController::GetDataTableRowByTag(UDataTable* DataTable, const FGameplayTag& Tag)
{
	return DataTable->FindRow<T>(Tag.GetTagName(), TEXT(""));
}
