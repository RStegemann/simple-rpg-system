// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Action.h"

// Sets default values
ACPP_Action::ACPP_Action()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Action::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Action::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_Action::UseAt(ACPP_HexPawn* User, FVector2d TargetHex)
{
}

