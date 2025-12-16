// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CubeCollectorGamemode.generated.h"

class ACubbbo;
/**
 * 
 */
UCLASS()
class MANNAGGIA_API ACubeCollectorGamemode : public AGameModeBase
{
	GENERATED_BODY()

	int32 ScoreValue = 0;

public:

	ACubeCollectorGamemode();
	void CubeCollected(ACubbbo* Cube);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreUpdated, int32, NewScore);
	UPROPERTY(BlueprintAssignable)
	FOnScoreUpdated OnScoreUpdated;
	
};
