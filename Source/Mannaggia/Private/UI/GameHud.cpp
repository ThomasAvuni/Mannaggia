// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameHud.h"
#include "UI/ScoreWidget.h"
#include "Blueprint/UserWidget.h"
#include "Framework/CubeCollectorGamemode.h"
#include "Kismet/GameplayStatics.h"

void AGameHud::BeginPlay()
{
	Super::BeginPlay();

	if (ScoreWidgetClass)
	{
		ScoreWidget = CreateWidget<UScoreWidget>(GetWorld(), ScoreWidgetClass);
		if (ScoreWidget) ScoreWidget->AddToViewport();
	}

	if (ACubeCollectorGamemode* Gamemode = Cast<ACubeCollectorGamemode>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		Gamemode->OnScoreUpdated.AddDynamic(this, &AGameHud::HandleScoreUptade);
	}
	
	
}

void AGameHud::HandleScoreUptade(int32 NewScore)
{
	if (ScoreWidget) ScoreWidget->UpdateScore(NewScore); 
}
