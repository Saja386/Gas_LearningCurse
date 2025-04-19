#pragma once
#include "GameplayEffectTypes.h"
#include "AuraAbilitiesTypes.generated.h"

USTRUCT(BlueprintType)
struct FAuraGamePlayEffectContextStruct : public FGameplayEffectContext
{
	GENERATED_BODY()
public:
	virtual UScriptStruct* GetScriptStruct() const override
	{
		return StaticStruct();
	}

	virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess) override;

	void SetBIsBlock(bool bBIsBlock)
	{
		BIsBlock = bBIsBlock;
	}

	void SetBIsCriticalHit(bool bBIsCriticalHit)
	{
		BIsCriticalHit = bBIsCriticalHit;
	}
	bool GetBIsBlock() const
	{
		return BIsBlock;
	}

	bool GetBIsCriticalHit() const
	{
		return BIsCriticalHit;
	}

	virtual FAuraGamePlayEffectContextStruct* Duplicate() const
	{
		FAuraGamePlayEffectContextStruct* NewContext = new FAuraGamePlayEffectContextStruct();
		*NewContext = *this;
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		return NewContext;
	}

protected:
	UPROPERTY()
	bool BIsBlock = false;
	UPROPERTY()
	bool BIsCriticalHit = false;

public:

};
// That is something that let the gameplay effect context to handle things related to the serialization you can go to declration and usages to see more detail about it
template<>
struct TStructOpsTypeTraits<FAuraGamePlayEffectContextStruct> : public TStructOpsTypeTraitsBase2<FAuraGamePlayEffectContextStruct>
{
	enum
	{
		WithNetSerializer = true ,
		WithCopy = true ,
	};
};