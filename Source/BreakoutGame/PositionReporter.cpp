// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReporter.h"


// Sets default values
APositionReporter::APositionReporter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APositionReporter::BeginPlay()
{
	Super::BeginPlay();
	
	//FString ActorName = GetOwner()->GetName();
	//UE_LOG(LogTemp, Warning, TEXT("Position Report Reporting for %s!!!"), *ActorName);

}

// Called every frame
void APositionReporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

