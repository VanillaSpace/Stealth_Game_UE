// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAIGaurd.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "FPSGameMode.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AFPSAIGaurd::AFPSAIGaurd()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));

	GaurdState = EAIState::Idle;
}

// Called when the game starts or when spawned
void AFPSAIGaurd::BeginPlay()
{
	Super::BeginPlay();

	PawnSensingComp->OnSeePawn.AddDynamic(this, &AFPSAIGaurd::OnPawnSeen);
	PawnSensingComp->OnHearNoise.AddDynamic(this, &AFPSAIGaurd::OnNoiseHeard);

	OriginalRotation = GetActorRotation();

	
}

void AFPSAIGaurd::OnPawnSeen(APawn* SeenPawn)
{
	if (SeenPawn == nullptr)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM)
	{
		//Failure of a missiong ->  False
		GM->CompleteMission(SeenPawn, false);
	}

	SetGaurdState(EAIState::Alerted);
}

void AFPSAIGaurd::OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume)
{
	if (GaurdState == EAIState::Alerted)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), Location, 32.0f, 12, FColor::Green, false, 10.0f);

	FVector Direction = Location - GetActorLocation();
	Direction.Normalize();

	FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();

	//we only want to change the Yaw, the rest stays zero
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;
	
	SetActorRotation(NewLookAt);

	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &AFPSAIGaurd::ResetOrientation, 3.0f);

	SetGaurdState(EAIState::Suspicious);
}


void AFPSAIGaurd::ResetOrientation()
{
	if (GaurdState == EAIState::Alerted)
	{
		return;
	}

	SetActorRotation(OriginalRotation);

	SetGaurdState(EAIState::Idle);
}

void AFPSAIGaurd::OnRep_GaurdState()
{
	OnStateChanged(GaurdState);


}

void AFPSAIGaurd::SetGaurdState(EAIState NewState)
{
	if (GaurdState == NewState)
	{
		return;
	}

	GaurdState = NewState;
	OnRep_GaurdState();
}



void AFPSAIGaurd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFPSAIGaurd::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFPSAIGaurd, GaurdState);
}

