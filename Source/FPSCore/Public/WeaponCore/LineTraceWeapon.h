// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponInterface.h"
#include "Helpers/Debugs.h"
#include "WeaponCore/WeaponData.h"
#include "LineTraceWeapon.generated.h"

UCLASS()
class FPSCORE_API ALineTraceWeapon : public AActor, public IWeaponInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALineTraceWeapon();

	/** Local interface function definitions */
	virtual void Attack() override;
	virtual void StopAttack() override;
	virtual bool Reload() override;
	virtual void Inspect() override;

	/** Handles spawning the line trace and other actions related to firing the gun */
	void Fire();

	void StartRecoil();

	FFPSCoreAnimations Animations;

	FRequiredWeaponData WeaponData;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bCanFire;

	bool bShowDebug;

	FTimerHandle ShotDelay;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
