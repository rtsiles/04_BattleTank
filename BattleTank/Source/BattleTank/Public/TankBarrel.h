// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);
	
private:
	UPROPERTY(EditAnyWhere, Category = Setup)
	float MaxDregressPerSecond = 20;

	UPROPERTY(EditAnyWhere, Category = Setup)
	float MaxElevationDegrees = 40; // TODO Set

	UPROPERTY(EditAnyWhere, Category = Setup)
	float MinElevationDegrees = 0; // TODO Set
};
