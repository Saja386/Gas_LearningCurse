// copy right druid mechanics


#include "GAS/Data/CharacterDefaultClassInfo.h"

FCharacterDefaultClassInfo UCharacterClassInfo::GetDefaultClassInfo(ECharacterClasses CharacterClass)
{
	return CharacterClassInformation.FindChecked(CharacterClass);
}
