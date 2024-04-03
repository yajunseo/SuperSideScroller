// Fill out your copyright notice in the Description page of Project Settings.


#include "PickableActor_Base.h"

#include "SuperSideScroller_Player.h"
#include "Components/SphereComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickableActor_Base::APickableActor_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(30.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("OverlapAllDynamic");
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &APickableActor_Base::BeginOverlap);
	RootComponent = CollisionComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	RotationComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotationComp"));
	
}

// Called when the game starts or when spawned
void APickableActor_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

void APickableActor_Base::PlayerPickedUp(ASuperSideScroller_Player* Player)
{
	UWorld* World = GetWorld();
	if(World)
	{
		if(PickupSound)
		{
			UGameplayStatics::SpawnSoundAtLocation(World, PickupSound, GetActorLocation());
		}
	}
	Destroy();
}

void APickableActor_Base::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASuperSideScroller_Player* Player = Cast<ASuperSideScroller_Player>(OtherActor);
	if(Player)
	{
		PlayerPickedUp(Player);
	}
}
