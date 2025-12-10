// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/CubeCollectorGamemode.h"

void ACubeCollectorGamemode::CubeCollected(Acubbo* Cube)
{
	if (!Cube) return;

	CurrentScore += Cube->GetScoreValue();

	OnScoreUpdated.Broadcast(CurrentScore);
}
