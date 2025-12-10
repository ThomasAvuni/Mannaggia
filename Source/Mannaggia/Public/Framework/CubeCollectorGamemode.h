// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "cubbi/cubbo.h"
#include "GameFramework/GameModeBase.h"
#include "CubeCollectorGamemode.generated.h"

/**
 * 
 */
UCLASS()
class MANNAGGIA_API ACubeCollectorGamemode : public AGameModeBase
{
	GENERATED_BODY()


public:
	void CubeCollected(Acubbo* Cube);

	int32 GetCurrentScore(){return CurrentScore;}

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreUpdated, int32, NewScore);

	FOnScoreUpdated OnScoreUpdated;
	
private:
	UPROPERTY(VisibleAnywhere)
	int32 CurrentScore;
	
};
