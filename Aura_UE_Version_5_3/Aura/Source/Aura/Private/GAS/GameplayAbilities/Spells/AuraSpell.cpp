// copy right druid mechanics


#include "GAS/GameplayAbilities/Spells/AuraSpell.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Actor/AuraProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Interfaces/CombatInterface.h"
#include "Kismet/KismetSystemLibrary.h"

/*void UAuraSpell::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                 const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	if(HasAuthority(&ActivationInfo))
	{
		ICombatInterface* CombatInterface= Cast<ICombatInterface>(GetAvatarActorFromActorInfo());
		if(CombatInterface)
		{
			const FVector SocketLocation = CombatInterface->GetCombatSucetLocation();
			FTransform SpawnTransform;
			SpawnTransform.SetLocation(SocketLocation);
			AAuraProjectile* Projectile = GetWorld()->SpawnActorDeferred<AAuraProjectile>(ProjectileClass, SpawnTransform , GetOwningActorFromActorInfo(), Cast<APawn>(GetOwningActorFromActorInfo()), ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

			Projectile -> FinishSpawning(SpawnTransform);
		}
	}
}*/

void UAuraSpell::SpawnProjectile(const FVector& TargetLocation)
{
	if(GetAvatarActorFromActorInfo()->HasAuthority())
	{
		ICombatInterface* CombatInterface= Cast<ICombatInterface>(GetAvatarActorFromActorInfo());
		if(CombatInterface)
		{
			const FVector SocketLocation = CombatInterface->GetCombatSucetLocation();
			FRotator SpawnRotation = (TargetLocation-SocketLocation).Rotation();
			SpawnRotation.Pitch =  0.0f;
			FTransform SpawnTransform;
			SpawnTransform.SetLocation(SocketLocation);
			SpawnTransform.SetRotation(SpawnRotation.Quaternion());
			AAuraProjectile* Projectile = GetWorld()->SpawnActorDeferred<AAuraProjectile>(ProjectileClass, SpawnTransform , GetOwningActorFromActorInfo(), Cast<APawn>(GetOwningActorFromActorInfo()), ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

			const UAbilitySystemComponent* SourceAsc = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetAvatarActorFromActorInfo());

			const FGameplayEffectSpecHandle DamageSpec = SourceAsc->MakeOutgoingSpec(DamageEffectClass , GetAbilityLevel() ,	SourceAsc->MakeEffectContext());

			Projectile->AuraEffectHandle = DamageSpec;
				

			
			Projectile -> FinishSpawning(SpawnTransform);
		
		}
		
	}
}
