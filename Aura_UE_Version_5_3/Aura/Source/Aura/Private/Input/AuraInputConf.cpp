// copy right druid mechanics


#include "Input/AuraInputConf.h"

const UInputAction* UAuraInputConf::FindInputActionByTag(const FGameplayTag& Tag, bool BlogNoFound) const
{
	for(const FAuraInputConfStruct& Pair : AbilityInputActionConf)
	{
		if(Pair.InputGameplayTag == Tag && Pair.InputAction)
		{
			return Pair.InputAction;
		}
	}
	if(BlogNoFound)
	{
		UE_LOG(LogTemp, Warning , TEXT("No input action found"));
	}
	return nullptr;
}
