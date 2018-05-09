// Fill out your copyright notice in the Description page of Project Settings.

#include "HMD_Detector_Actor.h"
#include "Engine.h"
#include "HeadMountedDisplayTypes.h"
#include "IXRTrackingSystem.h"

// Sets default values
AHMD_Detector_Actor::AHMD_Detector_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHMD_Detector_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHMD_Detector_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AHMD_Detector_Actor::GetDeviceName()
{
	//GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Red, "debug msg", true, FVector2D(1000.f,1000.f));
	UE_LOG(LogTemp, Warning, TEXT("--Begin get device name"));
	
	if (GEngine->XRSystem.IsValid()) //check pointer is valid
	{
		
		//EHMDDeviceType::Type  device = 
		IHeadMountedDisplay* device = GEngine->XRSystem->GetHMDDevice();
		

			/*
		if (result == EHMDDeviceType::DT_OculusRift) UE_LOG(LogTemp, Warning, TEXT("Device is Rift"));
		else if (result == EHMDDeviceType::DT_GearVR) UE_LOG(LogTemp, Warning, TEXT("Device is GearVR"));
		else UE_LOG(LogTemp, Warning, TEXT("Device is Other"));*/

	}
	else UE_LOG(LogTemp, Error, TEXT("No device found!"));

	UE_LOG(LogTemp, Warning, TEXT("--End get device name"));
	//UGameplayStatics::OpenLevel()
}

