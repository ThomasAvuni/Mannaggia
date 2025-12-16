// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class MANNAGGIA_API AGameHUD : public AHUD
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "HUD")
	TSubclassOf<class UCubeCollectorUserWidget> GameWidgetClass;

	UPROPERTY()
	class UCubeCollectorUserWidget* GameWidget;

private:
	UFUNCTION() void HandleScoreUpdate(int32 NewScore);
};
