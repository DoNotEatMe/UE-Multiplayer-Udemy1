// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);
	UStaticMesh* CubeMesh = LoadObject<UStaticMesh>(nullptr,TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_Cube.SM_Cube'"));
	GetStaticMeshComponent()->SetStaticMesh(CubeMesh);
	
}

void AMovingPlatform::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	

	if (HasAuthority())
	{
		Location += FVector(Speed * DeltaSeconds,0,0);
		SetActorLocation(Location);
	}
	
}


void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	Location = GetActorLocation();

	if (HasAuthority()){
		SetReplicates(true);
		SetReplicateMovement(true);
	}
	
}




