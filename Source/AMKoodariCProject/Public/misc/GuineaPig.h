// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GuineaPig.generated.h" // Always last include

UCLASS()
class AMKOODARICPROJECT_API AGuineaPig : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGuineaPig();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Hello World
	FString Message = "Learning C++ is so fun!";
	int32 NumericValue = 20;

	// Prints the given text to the screen.
	void PrintToScreen(FString TextToPrint);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
