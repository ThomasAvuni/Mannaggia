// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CollectibleInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UCollectibleInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MANNAGGIA_API ICollectibleInterface
{
	GENERATED_BODY()

public:

	virtual void OnCollected(ACharacter* Collector) = 0;
};
