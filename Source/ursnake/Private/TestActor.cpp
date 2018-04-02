// Fill out your copyright notice in the Description page of Project Settings.

#include "TestActor.h"

#include <cstdint>

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
  static uint32_t counter = 0; 
  UE_LOG(LogTemp, Warning, TEXT("%dth logs."), counter++);
}

