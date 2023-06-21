// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlapActor.h"


// Sets default values
AOverlapActor::AOverlapActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	RootComponent = BoxComp;

	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AOverlapActor::BeginOverlaps);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StatMesh"));
	StaticMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AOverlapActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOverlapActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOverlapActor::BeginOverlaps(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Display, TEXT("bum"));
}

