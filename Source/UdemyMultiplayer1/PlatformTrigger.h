// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformTrigger.generated.h"

class UBoxComponent;
class AMovingPlatform;

UCLASS()
class UDEMYMULTIPLAYER1_API APlatformTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* TriggerVolume;

	UPROPERTY(EditAnywhere)
	TArray<AMovingPlatform*> PlatformsToTrigger;
	
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
									 class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
									 const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	

	
};
