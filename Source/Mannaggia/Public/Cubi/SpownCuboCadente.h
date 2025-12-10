// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpownCuboCadente.generated.h"

UCLASS()
class MANNAGGIA_API ASpownCuboCadente : public AActor
{
	GENERATED_BODY()
	// [X Y Z] - Acubbo
	
public:
	// Sets default values for this actor's properties
	ASpownCuboCadente();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class Acubbo> pomelo;
};
