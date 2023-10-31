// Fill out your copyright notice in the Description page of Project Settings.


#include "FoxAnimInstance.h"
#include "FoxCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

void UFoxAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	FoxCharacter = Cast<AFoxCharacter>(TryGetPawnOwner());
	if (FoxCharacter)
	{
		FoxCharacterMovement = FoxCharacter->GetCharacterMovement();
	}

}

void UFoxAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (FoxCharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(FoxCharacterMovement->Velocity);
		IsFalling = FoxCharacterMovement->IsFalling();
	}
}

