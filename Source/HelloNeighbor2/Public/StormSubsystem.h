// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "StormSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class HELLONEIGHBOR2_API UStormSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		void StopStormEvent();
	UFUNCTION(BlueprintCallable)
		void StartStormEvent();
};
