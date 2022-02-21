// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Components/AudioComponent.h"
#include "MyGameInstance.generated.h"

UENUM(BlueprintType)
enum class EMusicType : uint8
{
	E_Default			UMETA(DisplayName = "DEFAULT"),
	E_Normal			UMETA(DisplayName = "NORMAL"),
	E_Battle			UMETA(DisplayName = "BATTLE")
};

UCLASS()
class TPTEST_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// Music Type that is currently playing or last played
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Music References")
	EMusicType MusicType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Music References")
	UAudioComponent* MusicReference = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Reference")
	UMyGameInstance* GameReference = nullptr;


	
};
