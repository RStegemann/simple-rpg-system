// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_HexPawn.h"

// Sets default values
ACPP_HexPawn::ACPP_HexPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_HexPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_HexPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_HexPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

