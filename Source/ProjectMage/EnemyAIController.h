// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAGE_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AEnemyAIController(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(transient)
	class UBlackboardComponent* BlackboardComp;

	UPROPERTY(transient)
	class UBehaviorTreeComponent* BehaviourComp;

	virtual void Possess(class APawn *IntPawn);

	void SetEnemy(class APawn *InPawn);

	UFUNCTION(BlueprintCallable, Category = Behavior)
	void SearchForEnemy();

protected:
	uint8 EnemyKeyID;
	uint8 EnemyLocID;
};
