// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/GameSetting/Stage1Potal.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AStage1Potal::AStage1Potal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> DOOR_MESH(
		TEXT("StaticMesh'/Game/InfinityBladeGrassLands/Environments/Misc/Exo_Deco02/StaticMesh/SM_Exo_Decos_Door02'"));

	if (DOOR_MESH.Succeeded())
	{
		MeshComponent->SetStaticMesh(DOOR_MESH.Object);
	}



	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetBoxExtent(FVector(100.f, 100.f, 300.f));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetRelativeLocation(FVector(70.f, 0.f, 250.f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AStage1Potal::OnOverlapBegin);

	ActivePotal1.AddLambda([this]()->void
		{
			ActivePotal();
		});
}

// Called when the game starts or when spawned
void AStage1Potal::BeginPlay()
{
	Super::BeginPlay();

	DisablePotal();
	
}

// Called every frame
void AStage1Potal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStage1Potal::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	if (OtherActor && (OtherActor != this))
	{
		// 플레이어가 콜리전 박스에 진입했을 때 레벨 이동
		UGameplayStatics::OpenLevel(GetWorld(), "TitleScene");
	}
}

void AStage1Potal::ActivePotal()
{
	CollisionBox->SetCollisionProfileName(TEXT("OverlapOnlyPlayer"));
	
}

void AStage1Potal::DisablePotal()
{
	CollisionBox->SetCollisionProfileName(TEXT("NoCollision"));
}

