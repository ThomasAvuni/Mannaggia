// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubi/SpownCuboCadente.h"

#include "cubbi/cubbo.h"


// Sets default values
ASpownCuboCadente::ASpownCuboCadente()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ASpownCuboCadente::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, [this]()
	{
		FVector locazione =  GetActorLocation() + FVector(FMath::RandRange(-1000 , 1000),FMath::RandRange(-1000 , 1000), 10);
		GetWorld()->SpawnActor<Acubbo>(pomelo, locazione, FRotator::ZeroRotator);
	},5.f, true);
	
	
	
}
