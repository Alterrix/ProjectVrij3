// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GravittCustomComponent.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTVRIJ3_API UGravittCustomComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void UpdateGravityDirection(const FVector& NewGravityDir);
	
};
