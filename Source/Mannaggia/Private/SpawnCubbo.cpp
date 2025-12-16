// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnCubbo.h"

#include "Cubbbi/Cubbbo.h"


// Sets default values
ASpawnCubbo::ASpawnCubbo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASpawnCubbo::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle TimerSpawn;

	GetWorldTimerManager().SetTimer(TimerSpawn, [this]()
	{
		FVector Location = GetActorLocation() + FVector(FMath::RandRange(-1000,1000), FMath::RandRange(-1000,1000), 0);
		GetWorld()->SpawnActor<ACubbbo>(Cubo, Location, FRotator::ZeroRotator);
	},
	2.5f, true);
	
	
}

// Called every frame
void ASpawnCubbo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
