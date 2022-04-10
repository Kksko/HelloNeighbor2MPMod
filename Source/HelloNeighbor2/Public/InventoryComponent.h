// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseInventoryComponent.h"
#include "InteractiveComponent.h"
#include "InventoryComponent.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum ETypeActor
{
	Actor,
	BaseActor,
	BaseCharacter,
	Pawn
};

UENUM(BlueprintType)
enum EItemOwnerType
{
	None,
	ObjectPlace,
	InventoryOwner
};

USTRUCT(BlueprintType)
struct FObjectStateData
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		int32 StateFlags;
	UPROPERTY(BlueprintReadWrite)
	TSoftObjectPtr<UObject> Owner;
	UPROPERTY(BlueprintReadWrite)
		TEnumAsByte<EItemOwnerType> OwnerType;




};
USTRUCT(BlueprintType)
struct FActorProxy
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
	AActor* Actor;
	UPROPERTY(BlueprintReadWrite)
	UInteractiveComponent* InteractiveComponent;
	UPROPERTY(BlueprintReadWrite)
		TEnumAsByte<ETypeActor> TypeActor;
	UPROPERTY(BlueprintReadWrite)
	FString Name;
	UPROPERTY(BlueprintReadWrite)
	TSoftClassPtr<UObject> Class;
	UPROPERTY(BlueprintReadWrite)
	TSoftObjectPtr<AActor> StartSoftObjectPtr;
	UPROPERTY(BlueprintReadWrite)
	TArray<UObject*> Data;
	UPROPERTY(BlueprintReadWrite)
	FObjectStateData ObjectNormalData;


};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class HELLONEIGHBOR2_API UInventoryComponent : public UBaseInventoryComponent
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		TArray<FActorProxy> GetItems();


	UFUNCTION(BlueprintCallable)
	FActorProxy GetCurrentItem();
};
