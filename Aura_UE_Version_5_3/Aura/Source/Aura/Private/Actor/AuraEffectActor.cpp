// copy right druid mechanics


#include "Actor/AuraEffectActor.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"


AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;
	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("Root")));
}


void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();

}

void AAuraEffectActor::ApplyEffectOnTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> EffectClass)
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	if (TargetASC == nullptr)return ;

	check (EffectClass);
	//This is the way of creating Game Play Effect this structure can handle related things to the game play effect context .
	FGameplayEffectContextHandle GameplayEffectContextHandle =TargetASC-> MakeEffectContext();
	GameplayEffectContextHandle.AddSourceObject(this);
	//This is a holder of that effect spec and the thing that is holed is Data And that data is an smort pointer of the effect spec 
	FGameplayEffectSpecHandle SpecHandle =TargetASC->MakeOutgoingSpec(EffectClass , ActorLevel , GameplayEffectContextHandle);
	const FActiveGameplayEffectHandle ActiveGameplayEffectHandle = TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	
	const bool BIsInfinite = SpecHandle.Data.Get()->Def.Get()->DurationPolicy == EGameplayEffectDurationType::Infinite;

	if (BIsInfinite && InfiniteRemovalPolicy == ERemovalPolicy::RemoveOnEndOverlap)
	{
		EffectsHandle.Add (ActiveGameplayEffectHandle , TargetASC);
	}
}

void AAuraEffectActor::OnOverlap(AActor* OtherActor)
{
	if (InfiniteApplucationPolicy == EApplicationPolicy::ApplyOverlap)
	{
		ApplyEffectOnTarget(OtherActor, InfiniteGameplayEffectClass) ;
	}
}

void AAuraEffectActor::OnEndOverlap(AActor* OtherActor)
{
	if (InfiniteApplucationPolicy == EApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectOnTarget(OtherActor, InfiniteGameplayEffectClass) ;
	}
	if (InfiniteRemovalPolicy==ERemovalPolicy::RemoveOnEndOverlap)
	{
		UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor);
		if(!IsValid(TargetASC)) return ;
		TArray<FActiveGameplayEffectHandle> HandlesToremove ; 
		for (TTuple<FActiveGameplayEffectHandle , UAbilitySystemComponent*> HandlePair : EffectsHandle)
		{
			if(TargetASC ==  HandlePair.Value)
			{
				TargetASC->RemoveActiveGameplayEffect(HandlePair.Key ,1);
				HandlesToremove.Add(HandlePair.Key);
			}
		}
		for (FActiveGameplayEffectHandle& Handle : HandlesToremove)
		{
			EffectsHandle.FindAndRemoveChecked(Handle);
		}
	}
}
