// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class UDEMYMULTIPLAYER1_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()

	public:
	AMovingPlatform();
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)	
	FVector Location;

	UPROPERTY(EditAnywhere)
	float Speed = 20.f;
	

protected:
	virtual void BeginPlay() override;
	
};
