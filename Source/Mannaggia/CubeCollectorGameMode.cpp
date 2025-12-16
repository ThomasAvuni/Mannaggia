// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeCollectorGameMode.h"

void ACubeCollectorGameMode::CubeCollected(ACubboCheCade* Cubo)
{
	if (!Cubo) return;

	CurrentScore += Cubo->GetScoreValue();
	OnScoreUpdated.Broadcast(CurrentScore);
}
