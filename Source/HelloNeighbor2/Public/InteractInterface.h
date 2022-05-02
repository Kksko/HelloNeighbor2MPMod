// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "InteractInterface.generated.h"
UENUM(BlueprintType)
enum ECursorType
{
	Crosshair,
	CrosshairActive,
	NoMoney,
	CanProgress,
	Progress,
	BadAction,
	CartFull,
	InventoryFull,
	BatteryUse,
	CanisterUse,
	PickUp,
	WindowProgress,
	Lock,
	Lockpick,
	Crowbar

};
UENUM(BlueprintType)
enum EActionPress
{
	Click,
	Hold

};
USTRUCT(BlueprintType)
struct FCursorInfo
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
		TEnumAsByte<ECursorType> Cursor;
	UPROPERTY(BlueprintReadWrite)
		float ShowDuration;
	UPROPERTY(BlueprintReadWrite)
		float Progress;
	UPROPERTY(BlueprintReadWrite)
		FName Info;


};

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};


/**
 * 
 */
class HELLONEIGHBOR2_API IInteractInterface
{
	GENERATED_BODY()
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
		UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OnBeginAction(UObject* Character, FHitResult& Hit, EActionPress TypePress, UObject* Connection, FCursorInfo& CursorInfo, FGameplayTag& ActionTag);
		UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
			void OnEndAction(UObject* Character, FHitResult& Hit, EActionPress TypePresswa);
};
