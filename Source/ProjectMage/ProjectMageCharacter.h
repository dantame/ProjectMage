// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "UnrealNetwork.h"
#include "ProjectMageCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AProjectMageCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AProjectMageCharacter(const FObjectInitializer& ObjectInitializer);

	int UUID;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	UPROPERTY(ReplicatedUsing = OnHitpointsReplicated)
	float Hitpoints = 100.0f;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY(Category = TextRenderActor, VisibleAnywhere, BlueprintReadOnly, Replicated)
	TSubobjectPtr<class UTextRenderComponent> TextRender;

	void SetHitpoints(float hp);

	UFUNCTION(reliable, server, WithValidation)
	void ServerSetHitpoints(float hp);
	virtual void ServerSetHitpoints_Implementation(float hp);
	virtual bool ServerSetHitpoints_Validate(float hp);

	UFUNCTION()
	void OnHitpointsReplicated();

protected:

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

};

