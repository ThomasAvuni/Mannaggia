// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnCubbo.generated.h"

UCLASS()
class MANNAGGIA_API ASpawnCubbo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpawnCubbo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class ACubbbo> Cubo; 

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
