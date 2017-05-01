// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTurret.h"


void UTankTurret::Rotate(float ReativeSpeed)
{
	ReativeSpeed = FMath::Clamp<float>
		(
			ReativeSpeed,
			-1,
			1
			);
	auto RotationChange = ReativeSpeed * MaxDregressPerSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));
}

