// copy right druid mechanics


#include "GAS/PlayerAttributeSet.h"
#include "Net/UnrealNetwork.h"

UPlayerAttributeSet::UPlayerAttributeSet()
{
	InitHealth(100.f );
	InitMana(200.f);
	InitMaxHealth(30.f);
	InitMaxMana(30.f);
}

void UPlayerAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Health , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , MaxHealth , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Mana , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , MaxMana , COND_None , REPNOTIFY_Always) ;

}

void UPlayerAttributeSet::OnRep_Health(const FGameplayAttributeData& CurrentHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , Health , CurrentHealth) ;
}

void UPlayerAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& CurrentMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , MaxHealth , CurrentMaxHealth) ;
}

void UPlayerAttributeSet::OnRep_Mana(const FGameplayAttributeData& CurrentMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , Mana , CurrentMana) ;

}

void UPlayerAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& CurrentMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , MaxMana , CurrentMaxMana) ;

}
