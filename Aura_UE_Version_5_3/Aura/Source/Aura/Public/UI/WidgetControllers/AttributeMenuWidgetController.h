// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetControllers/AuraWidgetController.h"
#include "AttributeMenuWidgetController.generated.h"

class UAttributeInfo;
struct FAuraAttributeInfo;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttributeMenueStructSigneture,const FAuraAttributeInfo& , AttributeInfo);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UAttributeMenuWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()
public:
	virtual void BroadCastInitializedValues() override;
	virtual void BindCallBacksToDependecies() override;
	
	UPROPERTY(BlueprintAssignable , Category = "GAS")
	FAttributeMenueStructSigneture AttributeInfoDelegate;
	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly)
	TObjectPtr<UAttributeInfo> AttributeInfo ; 
};
