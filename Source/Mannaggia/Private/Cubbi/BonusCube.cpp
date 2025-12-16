// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubbi/BonusCube.h"


// Sets default values
ABonusCube::ABonusCube()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ScoreValue = 50;
}

// Called when the game starts or when spawned
void ABonusCube::BeginPlay()
{
	Super::BeginPlay();
	
}
