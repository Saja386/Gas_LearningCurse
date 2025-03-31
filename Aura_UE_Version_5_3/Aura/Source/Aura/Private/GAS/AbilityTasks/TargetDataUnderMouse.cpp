// copy right druid mechanics


#include "GAS/AbilityTasks/TargetDataUnderMouse.h"
#	include "AbilitySystemComponent.h"

UTargetDataUnderMouse* UTargetDataUnderMouse::CreateTargetDataUnderMouse(UGameplayAbility* OwningAbility)
{
	UTargetDataUnderMouse* MyObject = NewAbilityTask<UTargetDataUnderMouse>(OwningAbility);
	return MyObject;
}

void UTargetDataUnderMouse::Activate()
{
	const bool IsLocalyControlled = Ability->GetCurrentActorInfo()->IsLocallyControlled();
	if (IsLocalyControlled)
	{
		SendDataUnderMouseCoruserHit();
	}
	else
	{
		const FGameplayAbilitySpecHandle SpecHandle = GetAbilitySpecHandle();
		const FPredictionKey ActivationPredictionKey = GetActivationPredictionKey();
		AbilitySystemComponent.Get()->AbilityTargetDataSetDelegate(SpecHandle , ActivationPredictionKey).AddUObject(this , &UTargetDataUnderMouse::OnTargetDataReplicateCallback);

		
		const bool bCalledDelegate = AbilitySystemComponent.Get()->CallReplicatedTargetDataDelegatesIfSet(SpecHandle, ActivationPredictionKey);
		if (!bCalledDelegate)
		{
			SetWaitingOnRemotePlayerData();
		}
	}
	
	
}

void UTargetDataUnderMouse::SendDataUnderMouseCoruserHit()
{
	FScopedPredictionWindow ScopedPredictionWindow (AbilitySystemComponent.Get());
	FGameplayAbilityTargetData_SingleTargetHit* HitData = new FGameplayAbilityTargetData_SingleTargetHit();
	FGameplayAbilityTargetDataHandle TargetData ; 

	APlayerController* PC = Ability->GetCurrentActorInfo()->PlayerController.Get();
	FHitResult Hit ;
	PC->GetHitResultUnderCursor(ECC_Visibility , false, Hit);
	HitData->HitResult = Hit;
	TargetData.Add(HitData);
	
	AbilitySystemComponent->ServerSetReplicatedTargetData(GetAbilitySpecHandle() ,
		GetActivationPredictionKey() ,
		TargetData ,
		FGameplayTag() ,
		AbilitySystemComponent->ScopedPredictionKey);

	if(ShouldBroadcastAbilityTaskDelegates())
	{
		ValidData.Broadcast(TargetData);
		
	}
}

void UTargetDataUnderMouse::OnTargetDataReplicateCallback(const FGameplayAbilityTargetDataHandle& DataHandle,
	FGameplayTag GameplayTag)
{
	AbilitySystemComponent->ConsumeClientReplicatedTargetData(GetAbilitySpecHandle(), GetActivationPredictionKey());
	if(ShouldBroadcastAbilityTaskDelegates())
	{
		ValidData.Broadcast(DataHandle);
	}
}
