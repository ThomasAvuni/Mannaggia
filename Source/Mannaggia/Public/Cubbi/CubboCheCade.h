// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectibleInterface.h"
#include "GameFramework/Actor.h"
#include "CubboCheCade.generated.h"

UCLASS()
class MANNAGGIA_API ACubboCheCade : public AActor, public ICollectibleInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubboCheCade();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<class UStaticMeshComponent> CubeMesh;

	int32 GetScoreValue() const {return ScoreValue;}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnCollected(ACharacter* Collector) override;

	UPROPERTY(EditAnywhere, Category = "Punti")	
	int32 ScoreValue = 10;

	
	UPROPERTY(EditDefaultsOnly)
	class USoundBase* CollectionSound;
	
};
