// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCore/FPSCoreSampleCharacter.h"


// Sets default values
AFPSCoreSampleCharacter::AFPSCoreSampleCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFPSCoreSampleCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCoreSampleCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFPSCoreSampleCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

