// copy right druid mechanics


#include "Actor/AuraProjectile.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Aura/Aura.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAuraProjectile::AAuraProjectile()
{
	PrimaryActorTick.bCanEverTick = false ;
	bReplicates = true;
	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SetRootComponent(SphereComponent);
	SphereComponent->SetCollisionObjectType(ECC_Projectile);
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComponent->SetCollisionResponseToChannel(ECC_WorldDynamic , ECR_Overlap);
	SphereComponent->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Overlap);
	SphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	AuraProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("AuraProjectileMovementComponent");
	AuraProjectileMovementComponent->InitialSpeed = 550.0f ;
	AuraProjectileMovementComponent->MaxSpeed = 550.0f ;
	AuraProjectileMovementComponent->ProjectileGravityScale = 0.0f ;
	
}

void AAuraProjectile::BeginPlay()
{
	Super::BeginPlay();
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this , &AAuraProjectile::OnSphereOverlap);
	LoopingSoundComponent = UGameplayStatics::SpawnSoundAttached(LoopingSound , GetRootComponent());
	SetLifeSpan(LifeSpan);
}

void AAuraProjectile::OnSphereOverlap(UPrimitiveComponent* OverlapedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
	UGameplayStatics::PlaySoundAtLocation(this , ImpactSound , GetActorLocation() , FRotator::ZeroRotator );
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this , ImpactEffect , GetActorLocation() , FRotator::ZeroRotator );
	LoopingSoundComponent->Stop();
	if(HasAuthority())
	{
		Destroy();
	}
	else
	{
		BHit = true; 
	}
	
}

void AAuraProjectile::Destroyed()
{
	
	if(!BHit && !HasAuthority())
	{
		UGameplayStatics::PlaySoundAtLocation(this , ImpactSound , GetActorLocation() , FRotator::ZeroRotator );
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this , ImpactEffect , GetActorLocation() , FRotator::ZeroRotator );
		LoopingSoundComponent->Stop();
	}
	Super::Destroyed();
}
