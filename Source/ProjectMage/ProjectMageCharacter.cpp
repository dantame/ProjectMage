// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjectMage.h"
#include "ProjectMageCharacter.h"
#include "UnrealNetwork.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AProjectMageCharacter

AProjectMageCharacter::AProjectMageCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	TextRender = ObjectInitializer.CreateDefaultSubobject<UTextRenderComponent>(this, TEXT("HitpointsText"));
	TextRender->AttachTo(RootComponent);
	TextRender->SetNetAddressable();
	TextRender->SetIsReplicated(true);
	TextRender->AddLocalOffset(FVector(0.0, 25.0, 110.0), true);
	TextRender->SetText(FString::SanitizeFloat(Hitpoints));
}

void AProjectMageCharacter::SetHitpoints(float hp)
{
	if (Role < ROLE_Authority)
	{
		ServerSetHitpoints(hp);
	}
	else
	{
		Hitpoints = hp;
	}
}

bool AProjectMageCharacter::ServerSetHitpoints_Validate(float hp)
{
	return true;
}

void AProjectMageCharacter::ServerSetHitpoints_Implementation(float hp)
{
	SetHitpoints(hp);
}

void AProjectMageCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AProjectMageCharacter, Hitpoints);
}

void AProjectMageCharacter::OnHitpointsReplicated()
{
	UE_LOG(LogTemp, Warning, TEXT("Hitpoints replicated %f"), Hitpoints);
	TextRender->SetText(FString::SanitizeFloat(Hitpoints));
}

void AProjectMageCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AProjectMageCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AProjectMageCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AProjectMageCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
