// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cubbi/CubboCheCade.h"
#include "GameFramework/GameModeBase.h"

#include "CubeCollectorGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MANNAGGIA_API ACubeCollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void CubeCollected(ACubboCheCade* Cubo);

	const int32& GetCurrentScore() const {return CurrentScore;}

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreUpdated, int32, NewScore);
	UPROPERTY(BlueprintAssignable)
	FOnScoreUpdated OnScoreUpdated;
	
private:
	int32 CurrentScore = 0;
};
