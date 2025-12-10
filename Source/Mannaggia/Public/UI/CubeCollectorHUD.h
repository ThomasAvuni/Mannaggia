// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CubeCollectorHUD.generated.h"

/**
 * 
 */
UCLASS()
class MANNAGGIA_API ACubeCollectorHUD : public AHUD
{
	GENERATED_BODY()


	
protected:
	
virtual void BeginPlay() override;	

	UPROPERTY(EditDefaultsOnly, Category = "HUD")
	TSubclassOf<class UScoreWidget> ScoreWidgetClass;
	
	UPROPERTY()
	class UScoreWidget* ScoreWidget;

private:
	UFUNCTION()
	void HandleScoreUpdate(int32 NewScore);
};
