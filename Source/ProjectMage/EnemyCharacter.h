// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProjectMageCharacter.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAGE_API AEnemyCharacter : public AProjectMageCharacter
{
	GENERATED_BODY()

public:
	AEnemyCharacter(const FObjectInitializer& ObjectInitializer);
	
	UPROPERTY(EditAnywhere, Category = Behavior)
	class UBehaviorTree* EnemyBehavior;
	
};
