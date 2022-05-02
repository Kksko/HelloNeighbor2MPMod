// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StormManager.generated.h"

UCLASS()
class HELLONEIGHBOR2_API AStormManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStormManager();
	UPROPERTY(BlueprintReadWrite)
		AActor* WeatherActor;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
		void StartStorm();
	UFUNCTION(BlueprintCallable)
		void StopStorm();
	UFUNCTION(BlueprintCallable)
		void EnableStormSounds();
	UFUNCTION(BlueprintCallable)
		void DisableStormSounds();
};
