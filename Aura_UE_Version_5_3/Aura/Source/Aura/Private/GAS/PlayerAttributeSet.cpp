// copy right druid mechanics


#include "GAS/PlayerAttributeSet.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/Character.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

UPlayerAttributeSet::UPlayerAttributeSet()
{
	InitHealth(100.f );
	InitMana(200.f);
	InitMaxHealth(300.f);
	InitMaxMana(300.f);
}

void UPlayerAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Health , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , MaxHealth , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Mana , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , MaxMana , COND_None , REPNOTIFY_Always) ;

}


void UPlayerAttributeSet::PostGameplayEffectExecute(const  FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	FEffectGamePlayProperties props ;
	SetEffectProperties(Data , props);
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(),0.f , GetMaxHealth()));
	}
	if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetHealth(FMath::Clamp(GetMana(),0.f , GetMaxMana()));
	}
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

void UPlayerAttributeSet::SetEffectProperties(const FGameplayEffectModCallbackData& Data,
	FEffectGamePlayProperties& Proprties) const 
{
	Proprties.EffectContextHandle =Data.EffectSpec.GetContext();
	Proprties.SourceASC=  Proprties.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();
	if(IsValid(Proprties.SourceASC) && Proprties.SourceASC->AbilityActorInfo.IsValid() && Proprties.SourceASC->AbilityActorInfo->AvatarActor.IsValid())
	{
		Proprties.SourceAvatarActor = Proprties.SourceASC->AbilityActorInfo->AvatarActor.Get(); 
		Proprties.SourceController = Proprties.SourceASC->AbilityActorInfo->PlayerController.Get();
		if(Proprties.SourceController == nullptr && Proprties.SourceAvatarActor != nullptr)
		{
			if (const APawn* pawn = Cast <APawn>(Proprties.SourceAvatarActor))
			{
				Proprties.SourceController = pawn->GetController();
			}
		}
		if(Proprties.SourceController)
		{
			ACharacter* SourceCharacter = Cast <ACharacter>(Proprties.SourceController->GetCharacter());
		}
	}
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		Proprties.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		Proprties.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		Proprties.TargetCharacter = Cast <ACharacter>(Proprties.TargetAvatarActor);
		Proprties.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Proprties.TargetAvatarActor);
	}
}
