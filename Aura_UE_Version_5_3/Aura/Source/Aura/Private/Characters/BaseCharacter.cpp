// copy right druid mechanics


#include "Characters/BaseCharacter.h"
#include "AbilitySystemComponent.h"	
#include "Components/CapsuleComponent.h"
#include "GAS/PlayerAbilitySystemComponent.h"
#include "GAS/PlayerAttributeSet.h"


ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetGenerateOverlapEvents(false);
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseCharacter::SetInitInfo()
{
}

FVector ABaseCharacter::GetCombatSucetLocation()
{
	check(Weapon);
	return Weapon->GetSocketLocation(WeaponSucketName);
}

void ABaseCharacter::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GamePlayEffectClass, float Level) const
{
	check(IsValid(GetAbilitySystemComponent()));
	check(GamePlayEffectClass) ; 
	FGameplayEffectContextHandle EffectContextHandle = GetAbilitySystemComponent()->MakeEffectContext() ;
	EffectContextHandle.AddSourceObject(this);
	const FGameplayEffectSpecHandle SpecHandle =  GetAbilitySystemComponent()->MakeOutgoingSpec(GamePlayEffectClass , Level, EffectContextHandle);
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get() , GetAbilitySystemComponent());

}

void ABaseCharacter::InitializeDefaultAttributes() const
{
	ApplyEffectToSelf(DefaultPrimaryAttributes , 1.0f) ;
	ApplyEffectToSelf(DefaultSecondaryAttributes , 1.0f) ;
	ApplyEffectToSelf(DefaultVitalAttributes , 1.0f) ;
}

void ABaseCharacter::AddAbilitiesToCharacter()
{
	UPlayerAbilitySystemComponent* ASC = CastChecked<UPlayerAbilitySystemComponent>(AbilitySystemComponent);
	if(!HasAuthority()){return;}
	ASC->AddCharacterAbilities(StartUpAbilities);
	
}

