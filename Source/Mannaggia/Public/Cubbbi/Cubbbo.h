// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubbbo.generated.h"

UCLASS()
class MANNAGGIA_API ACubbbo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACubbbo();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class UStaticMeshComponent> CubeMesh;


	int32 GetScoreValue() const {return ScoreValue;}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Punti")
	int32 ScoreValue = 10;
};
