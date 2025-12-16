// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubbi/CubboCheCade.h"

#include "CubeCollectorGameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACubboCheCade::ACubboCheCade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("PatrizioKianese");
	RootComponent = CubeMesh;
	
	CubeMesh->SetSimulatePhysics(true);
	CubeMesh->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	CubeMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	CubeMesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ACubboCheCade::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACubboCheCade::OnCollected(ACharacter* Collector)
{
	if (ACubeCollectorGameMode* GameMode = Cast<ACubeCollectorGameMode>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		GameMode->CubeCollected(this);
	}

	if (CollectionSound)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), CollectionSound, 0.7);
	}
	
	Destroy();
}

