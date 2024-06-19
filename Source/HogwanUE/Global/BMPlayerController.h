// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BMPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HOGWANUE_API ABMPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;
	
public:
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* InputContext;
};
