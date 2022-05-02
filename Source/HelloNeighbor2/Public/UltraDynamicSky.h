// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UltraDynamicSky.generated.h"

UCLASS()
class HELLONEIGHBOR2_API AUltraDynamicSky : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUltraDynamicSky();
	UPROPERTY(BlueprintReadWrite)
		AActor* Weather_BP;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
