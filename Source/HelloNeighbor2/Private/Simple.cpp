// Fill out your copyright notice in the Description page of Project Settings.


#include "Simple.h"

// Sets default values
ASimple::ASimple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASimple::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASimple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

