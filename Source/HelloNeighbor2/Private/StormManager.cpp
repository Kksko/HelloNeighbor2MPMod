// Fill out your copyright notice in the Description page of Project Settings.


#include "StormManager.h"
#include "..\Public\StormManager.h"

// Sets default values
AStormManager::AStormManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStormManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStormManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStormManager::StartStorm()
{
	bool g = true;
}

void AStormManager::StopStorm()
{
	bool g = true;
}

void AStormManager::EnableStormSounds()
{
	bool g = true;
}

void AStormManager::DisableStormSounds()
{
	bool g = true;
}

