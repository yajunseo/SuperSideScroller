// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SuperSideScrollerCharacter.h"
#include "SuperSideScroller_Player.generated.h"

/**
 * 
 */
UCLASS()
class SUPERSIDESCROLLER_API ASuperSideScroller_Player : public ASuperSideScrollerCharacter
{
	GENERATED_BODY()

	ASuperSideScroller_Player();

protected:
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void Sprint();
	void StopSprint();
	void ThrowProjectile();
	
	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputMappingContext* IC_Character;
	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* IA_Sprint;
	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* IA_Throw;

private:
	bool bIsSprinting;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* ThrowMontage;
	
	int32 NumberofCollectables;

public:
	UFUNCTION(BlueprintPure)
	int32 GetCurrentNumberofCollectables() {return NumberofCollectables;}

	void IncrementNumberofCollectables(int32 Value);
};
