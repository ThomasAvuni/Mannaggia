// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHud.generated.h"

/**
 * 
 */
UCLASS()
class MANNAGGIA_API AGameHud : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "HUD");
	TSubclassOf<class UScoreWidget> ScoreWidgetClass;

	UScoreWidget* ScoreWidget;

private:
	UFUNCTION()
	void HandleScoreUptade(int32 NewScore);
	
};
