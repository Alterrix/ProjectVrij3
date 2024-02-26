// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterMovementComponent.h"

void UMyCharacterMovementComponent::UpdateGravityDirection(const FVector& NewGravityDir)
{
	SetGravityDirection(NewGravityDir);
}
