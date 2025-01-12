// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoType.generated.h"

/**
 * 
 */
UCLASS()
class FPSCORE_API UAmmoType : public UObject
{
	GENERATED_BODY()

public:

	TMap<FName, FName> GetAmmoData() const { return AmmoData; }

	UTexture2D* GetDisplayIcon() const { return Icon; }

private:

	UPROPERTY(EditDefaultsOnly, Category = "Ammo Type")
	TMap<FName, FName> AmmoData;

	UPROPERTY(EditDefaultsOnly, Category = "Ammo Type")
	UTexture2D* Icon;	
};
