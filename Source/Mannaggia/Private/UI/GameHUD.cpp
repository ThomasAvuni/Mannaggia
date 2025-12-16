// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameHUD.h"

#include "CubeCollectorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "UI/CubeCollectorUserWidget.h"

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GameWidgetClass)
	{
		GameWidget = CreateWidget<UCubeCollectorUserWidget>(GetWorld(), GameWidgetClass);
		if (GameWidget)
		{
			GameWidget->AddToViewport();
		}
	}

	if (ACubeCollectorGameMode *GameMode = Cast<ACubeCollectorGameMode>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		GameMode->OnScoreUpdated.AddDynamic(this, &AGameHUD::HandleScoreUpdate);
	}
	
}

void AGameHUD::HandleScoreUpdate(int32 NewScore)
{
	if (GameWidget)
	{
		GameWidget->UpdateScore(NewScore);
	}
}
