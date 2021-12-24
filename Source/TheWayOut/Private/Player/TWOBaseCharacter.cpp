// The Way Out game. All Right Reserved.


#include "Player/TWOBaseCharacter.h"

// Sets default values
ATWOBaseCharacter::ATWOBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATWOBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATWOBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATWOBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

