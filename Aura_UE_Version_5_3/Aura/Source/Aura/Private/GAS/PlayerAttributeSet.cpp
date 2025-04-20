// copy right druid mechanics


#include "GAS/PlayerAttributeSet.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/Character.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "AuraGamePlayTags.h"
#include "Controllers/AuraPlayerController.h"
#include "GAS/AuraAbilitySystemLiberary.h"
#include "Interfaces/CombatInterface.h"
#include "Kismet/GameplayStatics.h"


UPlayerAttributeSet::UPlayerAttributeSet()
{
	const FAuraGamePlayTags& GamePlayTags = FAuraGamePlayTags::Get();
	//Primary Attributes 
	TagsToAttributes.Add(GamePlayTags.Attribute_Primary_Strength , GetStrengthAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Primary_Intelligence , GetIntelligenceAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Primary_Vigor , GetVigorAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Primary_Resilience , GetResilienceAttribute);

	//Secondary Attributes
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_Armor , GetArmorAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_ArmorPenetration , GetArmorPenetrationAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_BlockChance , GetBlockChanceAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_CriticalHitChance , GetCriticalHitChanceAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_CriticalHitResistance , GetCriticalHitResistanceAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_CriticalHitDamage , GetCriticalHitDamageAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_HealthRegeneration , GetHealthRegenerationAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_ManaRegeneration , GetManaRegenerationAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_MaxHealth , GetMaxHealthAttribute);
	TagsToAttributes.Add(GamePlayTags.Attribute_Secondary_MaxMana , GetMaxManaAttribute);



	
}

void UPlayerAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Strength , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Intelligence , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Resilience , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Vigor , COND_None , REPNOTIFY_Always) ;

	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , Armor , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , ArmorPenetration , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , BlockChance , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , CriticalHitChance , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , CriticalHitDamage , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , CriticalHitResistance , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , HealthRegeneration , COND_None , REPNOTIFY_Always) ;
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttributeSet , ManaRegeneration , COND_None , REPNOTIFY_Always) ;

	
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
		UE_LOG(LogTemp , Warning , TEXT("Actor %s Took %f Damage") , *props.TargetAvatarActor->GetName() ,GetHealth());
	}
	if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(),0.f , GetMaxMana()));
	}
	if (Data.EvaluatedData.Attribute == GetIncomingDamageAttribute())
	{
		const float LocalIncomingDamage = GetIncomingDamage();
		SetIncomingDamage(0);
		if (LocalIncomingDamage > 0)
		{
			const float LocalHealth = GetHealth() - LocalIncomingDamage;
			SetHealth(FMath::Clamp(LocalHealth,0.f , GetMaxHealth()));
			const bool BFatal = LocalHealth <= 0.f ;
			if (!BFatal)
			{
				FGameplayTagContainer TagContainer;
				TagContainer.AddTag(FAuraGamePlayTags::Get().Effect_HitReact);
				props.TargetASC->TryActivateAbilitiesByTag(TagContainer);
			}
			else
			{
				ICombatInterface* CombatInterface = Cast<ICombatInterface>(props.TargetAvatarActor);
				if (CombatInterface)
				{
					CombatInterface->Die();
				}
			}


			const  bool BBlocked = UAuraAbilitySystemLiberary::IsBlockHit(props.EffectContextHandle);
			const bool BCritical = UAuraAbilitySystemLiberary::IsCriticalHit(props.EffectContextHandle);
			
			if (props.SourceCharacter != props.TargetCharacter)
			{
				if(AAuraPlayerController* PlayerController = Cast<AAuraPlayerController>(UGameplayStatics::GetPlayerController(props.SourceCharacter , 0)))
				{
					PlayerController->ShowTextDamage(LocalIncomingDamage,  props.TargetCharacter , BBlocked , BCritical);
				}
			}
		}
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

void UPlayerAttributeSet::OnRep_Strength(const FGameplayAttributeData& CurrentStrength) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , Strength , CurrentStrength) ;
}

void UPlayerAttributeSet::OnRep_Intelligence(const FGameplayAttributeData& CurrentIntelligence) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , Intelligence , CurrentIntelligence) ;
}

void UPlayerAttributeSet::OnRep_Resilience(const FGameplayAttributeData& CurrentResilience) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , Resilience , CurrentResilience) ;
}

void UPlayerAttributeSet::OnRep_Vigor(const FGameplayAttributeData& CurrentVigor) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , Vigor , CurrentVigor) ;
}

void UPlayerAttributeSet::OnRep_Armor(const FGameplayAttributeData& CurrentArmor) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , Armor , CurrentArmor) ;
}

void UPlayerAttributeSet::OnRep_ArmorPenetration(const FGameplayAttributeData& CurrentArmorPenetration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , ArmorPenetration , CurrentArmorPenetration) ;
}

void UPlayerAttributeSet::OnRep_BlockChance(const FGameplayAttributeData& CurrentBlockChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , BlockChance , CurrentBlockChance) ;
}

void UPlayerAttributeSet::OnRep_CriticalHitChance(const FGameplayAttributeData& CurrentCriticalHitChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , CriticalHitChance , CurrentCriticalHitChance) ;
}

void UPlayerAttributeSet::OnRep_CriticalHitDamage(const FGameplayAttributeData& CurrentCriticalHitDamage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , CriticalHitDamage , CurrentCriticalHitDamage) ;
}

void UPlayerAttributeSet::OnRep_CriticalHitResistance(const FGameplayAttributeData& CurrentCriticalHitResistance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , CriticalHitResistance , CurrentCriticalHitResistance) ;
}

void UPlayerAttributeSet::OnRep_HealthRegeneration(const FGameplayAttributeData& CurrentHealthRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , HealthRegeneration , CurrentHealthRegeneration) ;
}

void UPlayerAttributeSet::OnRep_ManaRegeneration(const FGameplayAttributeData& CurrentManaRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerAttributeSet , ManaRegeneration , CurrentManaRegeneration) ;
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
			Proprties.SourceCharacter = Cast <ACharacter>(Proprties.SourceController->GetCharacter());
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
