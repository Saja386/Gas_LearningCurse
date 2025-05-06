// copy right druid mechanics


#include "Characters/BaseEnemy.h"

#include "Components/WidgetComponent.h"
#include "GAS/AuraAbilitySystemLiberary.h"
#include "GAS/PlayerAbilitySystemComponent.h"
#include "GAS/PlayerAttributeSet.h"
#include "UI/Widgets/AuraUserWidget.h"
#include "AuraGamePlayTags.h"
#include "AI/AuraEnemyAiController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


ABaseEnemy::ABaseEnemy()
{
	GetMesh()->SetCustomDepthStencilValue(250);
	Weapon->SetCustomDepthStencilValue(250);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility , ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UPlayerAbilitySystemComponent>("Ability System Component");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	
	AttributeSet = CreateDefaultSubobject<UPlayerAttributeSet>("Attribute Set");

	HealthBarComponent=CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBarComponent->SetupAttachment(GetRootComponent());
	
}

void ABaseEnemy::HitReactTagChanged(const FGameplayTag IncomingTag, int32 NewCount)
{
	BHitReacting = NewCount > 0;
	GetCharacterMovement()->MaxWalkSpeed = BHitReacting ? 0.f : BaseMaxWalkSpeed ;
	AuraAiController->GetBlackboardComponent()->SetValueAsBool(FName("HitReacting"), BHitReacting);

	
}

void ABaseEnemy::Die()
{
	SetLifeSpan(LifeSpan);
	Super::Die();
}

void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	SetInitInfo();
	GetCharacterMovement()->MaxWalkSpeed = BaseMaxWalkSpeed ;
	if (HasAuthority())
	{
		UAuraAbilitySystemLiberary::GiveStartUpAbilitys(this , AbilitySystemComponent);
	}

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

			GetAbilitySystemComponent()->RegisterGameplayTagEvent(FAuraGamePlayTags::Get().Effect_HitReact , EGameplayTagEventType::NewOrRemoved).AddUObject(this , &ABaseEnemy::HitReactTagChanged);
		}
	}
}

void ABaseEnemy::SetInitInfo()
{
	AbilitySystemComponent->InitAbilityActorInfo(this , this);
	Cast <UPlayerAbilitySystemComponent>(AbilitySystemComponent)->AbilityActorInfoSet();

	if(HasAuthority())
	{
		InitializeDefaultAttributes();
	}
	
}

void ABaseEnemy::InitializeDefaultAttributes() const
{
	UAuraAbilitySystemLiberary::InitializeDefaultAttributesbyClass(this , EnemyClass , Level , AbilitySystemComponent);
}

void ABaseEnemy::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if(!HasAuthority())return;
	AuraAiController = Cast<AAuraEnemyAiController>(NewController);
	AuraAiController->GetBlackboardComponent()->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	AuraAiController->RunBehaviorTree(BehaviorTree);
	AuraAiController->GetBlackboardComponent()->SetValueAsBool(FName("HitReacting"), false);
	if(EnemyClass==ECharacterClasses::Warrior)
	{
		AuraAiController->GetBlackboardComponent()->SetValueAsBool(FName("RangedAttack"), false);

	}
	else
	{
		AuraAiController->GetBlackboardComponent()->SetValueAsBool(FName("RangedAttack"), true);

	}
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
