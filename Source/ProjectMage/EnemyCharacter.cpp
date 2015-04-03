//

#include "ProjectMage.h"
#include "EnemyAIController.h"
#include "EnemyCharacter.h"

AEnemyCharacter::AEnemyCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AIControllerClass = AEnemyAIController::StaticClass();
}