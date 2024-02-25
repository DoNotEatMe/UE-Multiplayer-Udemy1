// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformsGameInstance.h"

UPuzzlePlatformsGameInstance::UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer)
{
	//UE_LOG(LogTemp,Warning,TEXT("Game Instance constructor"));
}

void UPuzzlePlatformsGameInstance::Init()
{
	Super::Init();
	//UE_LOG(LogTemp,Warning,TEXT("Game Instance init"));
}

void UPuzzlePlatformsGameInstance::Host()
{
	GEngine->AddOnScreenDebugMessage(-1,10,FColor::Green,TEXT("Hosting"));
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	World->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void UPuzzlePlatformsGameInstance::Join(const FString& Address)
{
	GEngine->AddOnScreenDebugMessage(-1,10,FColor::Green,FString::Printf(TEXT("Joining %s"), *Address ));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	//"192.168.1.67:7777"
	PlayerController->ClientTravel(Address,TRAVEL_Absolute);
	
	
}

