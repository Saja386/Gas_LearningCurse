// copy right druid mechanics

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "AuraInputConf.h"
#include "AuraInputCpmponent.generated.h"
/**
 * 
 */
UCLASS()
class AURA_API UAuraInputCpmponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	template<class UserClass, typename FuncPressedTyped , typename ReleasedFuncType , typename HeldFuncType>
	void BindAbilityActions(const UAuraInputConf* InputConf , UserClass* Object , FuncPressedTyped FuncPressed , ReleasedFuncType ReleasedFunc , HeldFuncType HeldFunc);
};

template <class UserClass, typename FuncPressedTyped, typename ReleasedFuncType, typename HeldFuncType>
void UAuraInputCpmponent::BindAbilityActions(const UAuraInputConf* InputConf, UserClass* Object,
	FuncPressedTyped FuncPressed, ReleasedFuncType ReleasedFunc, HeldFuncType HeldFunc)
{
	check(InputConf);
	for(const FAuraInputConfStruct& InputAction : InputConf->AbilityInputActionConf)
	{
		if (InputAction.InputAction && InputAction.InputGameplayTag.IsValid())
		{
			if(FuncPressed)
			{
				BindAction(InputAction.InputAction, ETriggerEvent::Started , Object ,  FuncPressed , InputAction.InputGameplayTag); 	
			}
			if(ReleasedFunc)
			{
				BindAction(InputAction.InputAction , ETriggerEvent::Completed , Object , ReleasedFunc , InputAction.InputGameplayTag);
			}
			if (HeldFunc)
			{
				BindAction(InputAction.InputAction , ETriggerEvent::Triggered , Object , HeldFunc , InputAction.InputGameplayTag);
			}	
		}
	}
}
