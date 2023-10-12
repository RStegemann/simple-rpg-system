// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Action.generated.h"

class ACPP_HexPawn;

UCLASS()
class SIMPLE_RPG_SYSTEM_API ACPP_Action : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Action();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Range;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int AreaOfEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Cooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ManaCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ActionPointCost;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void UseAt(ACPP_HexPawn* User, FVector2d TargetHex);
};
