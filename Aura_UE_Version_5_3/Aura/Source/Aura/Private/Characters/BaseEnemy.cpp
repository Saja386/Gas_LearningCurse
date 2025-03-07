// copy right druid mechanics


#include "Characters/BaseEnemy.h"


ABaseEnemy::ABaseEnemy()
{
	GetMesh()->SetCustomDepthStencilValue(250);
	Weapon->SetCustomDepthStencilValue(250);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility , ECR_Block);
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
