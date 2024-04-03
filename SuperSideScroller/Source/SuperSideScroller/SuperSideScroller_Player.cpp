// Fill out your copyright notice in the Description page of Project Settings.

#include "EnhancedInputComponent.h"
#include "SuperSideScroller_Player.h"

#include "EnhancedInputSubsystemInterface.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"

ASuperSideScroller_Player::ASuperSideScroller_Player()
{
	bIsSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}

void ASuperSideScroller_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	UEnhancedInputComponent *EnhancedPlayerInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if(EnhancedPlayerInput != nullptr)
	{
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		UEnhancedInputLocalPlayerSubsystem* EnhancedSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

		if(EnhancedSubsystem)
		{
			EnhancedSubsystem->AddMappingContext(IC_Character, 1);

			EnhancedPlayerInput->BindAction(IA_Sprint, ETriggerEvent::Triggered, this, &ASuperSideScroller_Player::Sprint);
			EnhancedPlayerInput->BindAction(IA_Sprint, ETriggerEvent::Completed, this, &ASuperSideScroller_Player::StopSprint);
			EnhancedPlayerInput->BindAction(IA_Throw, ETriggerEvent::Triggered, this, &ASuperSideScroller_Player::ThrowProjectile);
		}
	}
}

void ASuperSideScroller_Player::Sprint()
{
	if(!bIsSprinting)
	{
		bIsSprinting = true;
		GetCharacterMovement()->MaxWalkSpeed = 500.0f;
	}
}

void ASuperSideScroller_Player::StopSprint()
{
	if(bIsSprinting)
	{
		bIsSprinting = false;
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	}
}

void ASuperSideScroller_Player::ThrowProjectile()
{
	if(ThrowMontage)
	{
		bool bIsMontagePlaying = GetMesh()->GetAnimInstance()->Montage_IsPlaying(ThrowMontage);
		if(!bIsMontagePlaying)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(ThrowMontage, 1.0f);
		}
	}
}

void ASuperSideScroller_Player::IncrementNumberofCollectables(int32 Value)
{
	if(Value <= 0)
	{
		return;
	}
	else
	{
		NumberofCollectables += Value;
		UE_LOG(LogTemp, Warning, TEXT("%d"), NumberofCollectables);
	}
}
