// Copyright Trevor Gardner 2017

#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();

}

void UOpenDoor::OpenDoor()
{
	//Get the Owner of this component.
	auto Owner = GetOwner();
	
	//Make a rotator to rotate the component.  In this case a door.
	FRotator DoorRotator = FRotator(0.0f, -(OpenAngle), 0.0f);

	//Open the door.
	Owner->SetActorRotation(DoorRotator);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Poll the trigger volume.
	//If the volume is entered. ActorThatOpens.
	if (PressurePlate->IsOverlappingActor(ActorThatOpens)) {
		//Then open door.
		OpenDoor();
	}

}

