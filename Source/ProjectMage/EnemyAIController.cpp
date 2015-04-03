// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectMage.h"
#include "EnemyAIController.h"
#include "EnemyCharacter.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

AEnemyAIController::AEnemyAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	BlackboardComp = ObjectInitializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackBoardComp"));

	BehaviourComp = ObjectInitializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorTreeComp"));
}

void AEnemyAIController::Possess(class APawn* InPawn)
{
	Super::Possess(InPawn);

	AEnemyCharacter* Character = Cast<AEnemyCharacter>(InPawn);

	if (Character && Character->EnemyBehavior) 
	{
		BlackboardComp->InitializeBlackboard(*Character->EnemyBehavior->BlackboardAsset);

		EnemyKeyID = BlackboardComp->GetKeyID("Enemy");
		EnemyLocID = BlackboardComp->GetKeyID("Destination");

		BehaviourComp->StartTree(*Character->EnemyBehavior);
	}
}

void AEnemyAIController::SearchForEnemy()
{
	APawn* pawn = GetPawn();

	if (pawn == NULL) return;

	const FVector location = pawn->GetActorLocation();

	AProjectMageCharacter* ClosestPlayer = NULL;
	float lastDistance = 0;


	for (FConstPawnIterator Iterator = GetWorld()->GetPawnIterator(); Iterator; Iterator++) {
		AProjectMageCharacter* IterationCharacter = Cast<AProjectMageCharacter>(*Iterator);

		if (IterationCharacter->IsA(APlayerCharacter::StaticClass())) {
			const float distance = FVector::Dist(IterationCharacter->GetActorLocation(), location);

			if (ClosestPlayer == NULL || distance < lastDistance) {
				ClosestPlayer = IterationCharacter;
				lastDistance = distance;
			}
		}
	}

	if (ClosestPlayer) {
		SetEnemy(ClosestPlayer);
	}
}

void AEnemyAIController::SetEnemy(class APawn* InPawn)
{
	BlackboardComp->SetValue<UBlackboardKeyType_Object>(EnemyKeyID, InPawn);
	BlackboardComp->SetValue<UBlackboardKeyType_Vector>(EnemyLocID, InPawn->GetActorLocation());
}