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
	FGameplayEffectSpecHandle SpecHandle =TargetASC->MakeOutgoingSpec(EffectClass , 1.f , GameplayEffectContextHandle);
	TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

}
