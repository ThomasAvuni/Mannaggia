// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CubeCollectorUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MANNAGGIA_API UCubeCollectorUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "HUD")
	void UpdateScore(int32 NewScore);
};
