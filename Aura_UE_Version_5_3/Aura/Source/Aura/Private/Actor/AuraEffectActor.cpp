// copy right druid mechanics


#include "Actor/AuraEffectActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Components/SphereComponent.h"
#include "GAS/PlayerAttributeSet.h"

AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;
	SphereComponent = CreateDefaultSubobject<USphereComponent>("Sphere");
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	SphereComponent->SetupAttachment(GetRootComponent());

}

void AAuraEffectActor::OnOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IAbilitySystemInterface* ASCInterFace = Cast<IAbilitySystemInterface>(OtherActor))
	{
		const UPlayerAttributeSet* AttributeSet =   Cast <UPlayerAttributeSet> ( ASCInterFace->GetAbilitySystemComponent()->GetAttributeSet(UPlayerAttributeSet::StaticClass()));
		UPlayerAttributeSet* MutableAttributeSet = const_cast<UPlayerAttributeSet*>(AttributeSet);
		MutableAttributeSet->SetHealth(AttributeSet->GetHealth() + 20.f);
		Destroy();
	}
}

void AAuraEffectActor::EndOverLap(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}

void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this , &AAuraEffectActor::OnOverLap );
	SphereComponent->OnComponentEndOverlap.AddDynamic(this , &AAuraEffectActor::EndOverLap );
}
