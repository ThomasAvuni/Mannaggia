// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/CubeCollectorGamemode.h"
#include "Public/Cubbbi/Cubbbo.h"

ACubeCollectorGamemode::ACubeCollectorGamemode()
{
}

void ACubeCollectorGamemode::CubeCollected(ACubbbo* Cube)
{
	if (!Cube) return;
	ScoreValue +=Cube->GetScoreValue();

	OnScoreUpdated.Broadcast(ScoreValue);
	
}
