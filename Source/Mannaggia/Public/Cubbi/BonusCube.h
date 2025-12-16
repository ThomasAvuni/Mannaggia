// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CubboCheCade.h"
#include "BonusCube.generated.h"

UCLASS()
class MANNAGGIA_API ABonusCube : public ACubboCheCade
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABonusCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
