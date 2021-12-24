// The Way Out game. All Right Reserved.

#include "TWOGameModeBase.h"
#include "Player/TWOBaseCharacter.h"
#include "Player/TWOPlayerController.h"

ATWOGameModeBase::ATWOGameModeBase()
{
    DefaultPawnClass = ATWOBaseCharacter::StaticClass();
    PlayerControllerClass = ATWOPlayerController::StaticClass();
}
