// copy right druid mechanics


#include "Characters/BaseEnemy.h"

#include "Components/WidgetComponent.h"
#include "GAS/AuraAbilitySystemLiberary.h"
#include "GAS/PlayerAbilitySystemComponent.h"
#include "GAS/PlayerAttributeSet.h"
#include "UI/Widgets/AuraUserWidget.h"


ABaseEnemy::ABaseEnemy()
{
	GetMesh()->SetCustomDepthStencilValue(250);
	Weapon->SetCustomDepthStencilValue(250);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility , ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UPlayerAbilitySystemComponent>("Ability System Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	
	AttributeSet = CreateDefaultSubobject<UPlayerAttributeSet>("Attribute Set");

	HealthBarComponent=CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBarComponent->SetupAttachment(GetRootComponent());
	
}

void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	SetInitInfo();
	
	if(UAuraUserWidget* AuraUserWidget = Cast<UAuraUserWidget>(HealthBarComponent->GetUserWidgetObject()))
	{
		AuraUserWidget->SetWidgetController(this);
	}
	
	if(UPlayerAttributeSet* AS = CastChecked<UPlayerAttributeSet>(AttributeSet))
	{
		if(AS)
		{
			GetAbilitySystemComponent()->GetGameplayAttributeValueChangeDelegate(AS->GetHealthAttribute()).AddLambda(
				[this](const FOnAttributeChangeData& Data)
				{
					OnHealthChanged.Broadcast(Data.NewValue);
				});
			GetAbilitySystemComponent()->GetGameplayAttributeValueChangeDelegate(AS->GetMaxHealthAttribute()).AddLambda(
				[this](const FOnAttributeChangeData& Data)
				{
					OnMaxHealthChanged.Broadcast(Data.NewValue);
				}
				);
			OnHealthChanged.Broadcast(AS->GetHealth());
			OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
		}
	}
}

void ABaseEnemy::SetInitInfo()
{
	AbilitySystemComponent->InitAbilityActorInfo(this , this);
	Cast <UPlayerAbilitySystemComponent>(AbilitySystemComponent)->AbilityActorInfoSet();
	InitializeDefaultAttributes();
	
}

void ABaseEnemy::InitializeDefaultAttributes() const
{
	UAuraAbilitySystemLiberary::InitializeDefaultAttributesbyClass(this , EnemyClass , Level , AbilitySystemComponent);
}

int32 ABaseEnemy::GetPlayerLevel()
{
	return Level;
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
