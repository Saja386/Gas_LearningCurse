// copy right druid mechanics


#include "GAS/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoByTag(const FGameplayTag& Tag, bool BlogNotFound) const
{
	for (const FAuraAttributeInfo& AttributeInfo : AttributeInfos)
	{
		if (AttributeInfo.AttributeTag == Tag)
		{
			return AttributeInfo;
		}
	}
	if (BlogNotFound)
	{
		UE_LOG(LogTemp, Error , TEXT("Can not find the info for the Attribute Tag"));
	}
	return FAuraAttributeInfo();
}
