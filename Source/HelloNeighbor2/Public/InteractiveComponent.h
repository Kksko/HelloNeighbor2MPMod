// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseInventoryComponent.h"
#include "InteractiveComponent.generated.h"




USTRUCT(BlueprintType)
struct FPitchRange
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		float Min;
	UPROPERTY(BlueprintReadWrite)
		float Max;




};
UENUM(BlueprintType)
enum ESoundCategory
{
	FSC_Silent,
	FSC_Danger,
	MaxIndex
	
};
USTRUCT(BlueprintType)
struct FSoundMessage
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		UObject* Tags;
	UPROPERTY(BlueprintReadWrite)
		UObject* BotObjective;
	UPROPERTY(BlueprintReadWrite)
		TArray<UObject*> MemoryItems;



};
USTRUCT(BlueprintType)
struct FSound
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		UObject* AkAudioEvent;
	UPROPERTY(BlueprintReadWrite)
		FString SwitchGroup;
	UPROPERTY(BlueprintReadWrite)
		FString SwitchState;
	UPROPERTY(BlueprintReadWrite)
		TEnumAsByte<ESoundCategory> Category;
	UPROPERTY(BlueprintReadWrite)
		float HearingDistance;
	UPROPERTY(BlueprintReadWrite)
		FSoundMessage SoundMessage;




};
USTRUCT(BlueprintType)
struct FHoldData
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		FName Socket;
	UPROPERTY(BlueprintReadWrite)
		FSound PutDownSound;
	UPROPERTY(BlueprintReadWrite)
		FPitchRange StandHandPitch;
	UPROPERTY(BlueprintReadWrite)
		FPitchRange CrouchHandPitch;
	UPROPERTY(BlueprintReadWrite)
		TMap<ACharacter*, UObject*> HoldAnimations;
	UPROPERTY(BlueprintReadWrite)
		bool bUseSockets;
	UPROPERTY(BlueprintReadWrite)
		FString RightHandSocket;
	UPROPERTY(BlueprintReadWrite)
		bool bTwoHands;
		UPROPERTY(BlueprintReadWrite)
		FString LeftHandSocket;



};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMulticastInlineDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HELLONEIGHBOR2_API UInteractiveComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractiveComponent();
	UPROPERTY(BlueprintReadWrite)
		FHoldData HoldData;
	UPROPERTY(BlueprintAssignable)
		FMulticastInlineDelegate OnPickedUp;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
