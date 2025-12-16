// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/Cubbbi/Cubbbo.h"


// Sets default values
ACubbbo::ACubbbo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("FabioGay");

	RootComponent = CubeMesh;

	CubeMesh->SetSimulatePhysics(true);

	CubeMesh->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);

	CubeMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	
	CubeMesh->SetGenerateOverlapEvents(true);
	
}

// Called when the game starts or when spawned
void ACubbbo::BeginPlay()
{
	Super::BeginPlay();
	
}

