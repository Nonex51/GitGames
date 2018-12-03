// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"




void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//AimTowardCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("Player Controller ticking"));
}


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"));
	}
	UE_LOG(LogTemp, Warning, TEXT ("PlayerController possessing: %s"),*(ControlledTank->GetName()));
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
