// Fill out your copyright notice in the Description page of Project Settings.


#include "GravittCustomComponent.h"

void UGravittCustomComponent::UpdateGravityDirection(const FVector& NewGravityDir)
{
	SetGravityDirection(NewGravityDir);
}
