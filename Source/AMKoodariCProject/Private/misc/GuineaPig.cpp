// Fill out your copyright notice in the Description page of Project Settings.


#include "AMKoodariCProject/Public/misc/GuineaPig.h"
#include "Engine/Engine.h"
#include "Kismet/KismetSystemLibrary.h"

#define print(Text,Duration)if(GetWorld()){ UKismetSystemLibrary::PrintString(GetWorld(), Text, true, true, FColor::White, Duration);}
// Sets default values
AGuineaPig::AGuineaPig()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGuineaPig::BeginPlay()
{
	Super::BeginPlay();

	FString WordToPrint = Message + " By the way, the value is " + FString::FromInt(NumericValue);
	PrintToScreen(WordToPrint);
	print("Example text", 6)

	UE_LOG(LogTemp, Warning, TEXT("Hello! My name is %s "), *GetName());
}


// Called every frame
void AGuineaPig::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGuineaPig::PrintToScreen(FString TextToPrint) 
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, TextToPrint, true, FVector2D(2, 2));
	}
}