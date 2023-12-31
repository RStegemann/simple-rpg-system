// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CPP_HexPawn.generated.h"

class ACPP_Action;

USTRUCT()
struct FCharacterStats
{
	GENERATED_BODY()
	int Speed;
	int ActionPoints;
	int Health;
	int Mana;
};

UCLASS()
class SIMPLE_RPG_SYSTEM_API ACPP_HexPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_HexPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	TArray<ACPP_Action*> Actions;
	FVector2d* Position;
	FCharacterStats* Stats;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginTargetting(ACPP_Action* Action);
	virtual void MoveTo(FVector2d TargetPosition);
};
