// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "BraveMan.generated.h"

UCLASS()
class HOGWANUE_API ABraveMan : public ACharacter
{
	GENERATED_BODY()

public:
	ABraveMan();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* MoveAction;

protected:
	virtual void BeginPlay() override;

private:
	void Move(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* ViewCamera;
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	


};
