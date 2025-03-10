// copy right druid mechanics


#include "Characters/BaseEnemy.h"

#include "GAS/PlayerAbilitySystemComponent.h"
#include "GAS/PlayerAttributeSet.h"


ABaseEnemy::ABaseEnemy()
{
	GetMesh()->SetCustomDepthStencilValue(250);
	Weapon->SetCustomDepthStencilValue(250);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility , ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UPlayerAbilitySystemComponent>("Ability System Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);


	AttributeSet = CreateDefaultSubobject<UPlayerAttributeSet>("Attribute Set");
	
}

void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	AbilitySystemComponent->InitAbilityActorInfo(this , this);
}

void ABaseEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	Weapon->SetRenderCustomDepth(true);
}

void ABaseEnemy::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
