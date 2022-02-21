// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMusic.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

#define OUT

// Sets default values for this component's properties
UPlayMusic::UPlayMusic()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayMusic::BeginPlay()
{
	Super::BeginPlay();

	
	
}


// Called every frame
void UPlayMusic::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckPressurePlateOverlaps();
	
}

void UPlayMusic::CheckPressurePlateOverlaps()
{
	if (!PressurePlate) { return; }
	TArray<AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);
	for (AActor* Actor : OverlappingActors)
	{
		if (Actor)
		{
			UE_LOG(LogTemp, Warning, TEXT("AActor found"));

		}
	}
}



