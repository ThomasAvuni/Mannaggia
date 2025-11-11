// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/cubbi/cubbo.h"


// Sets default values
Acubbo::Acubbo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("mimmo")
	RootComponent = CubeMesh;
	
	CubeMesh -> SetSimulatePhysics(true)
	CubeMesh -> SetCollisionProfileName()
	CubeMesh -> SetCollisionResponseToChannel();
	CubeMesh -> SetGenerateOverlapEvents(true)
}

// Called when the game starts or when spawned
void Acubbo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acubbo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

