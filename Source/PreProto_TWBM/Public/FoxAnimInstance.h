// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FoxAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PREPROTO_TWBM_API UFoxAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	class AFoxCharacter* FoxCharacter;

	UPROPERTY(BlueprintReadWrite, Category = Movement)
	class UCharacterMovementComponent* FoxCharacterMovement;

	UPROPERTY(BlueprintReadWrite, Category = Movement)
	float GroundSpeed;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsFalling;
};
