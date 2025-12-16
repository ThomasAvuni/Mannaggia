// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubbi/CubeSpawner.h"

#include "Cubbi/CubboCheCade.h"


// Sets default values
ACubeSpawner::ACubeSpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACubeSpawner::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle t;
	GetWorldTimerManager().SetTimer(t, this, &ACubeSpawner::SpawnCube, 2.5f, true);
	
}

void ACubeSpawner::SpawnCube()
{
	FVector SpawnLoc = GetActorLocation() + FVector(FMath::RandRange(-1000, 1000), FMath::RandRange(-1000, 1000), 0);
	GetWorld()->SpawnActor<ACubboCheCade>(CubeClass, SpawnLoc, FRotator::ZeroRotator);
}

// Called every frame
void ACubeSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

