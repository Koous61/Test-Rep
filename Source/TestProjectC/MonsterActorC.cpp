#include "MonsterActorC.h"

AMonsterActorC::AMonsterActorC()
{
	PrimaryActorTick.bCanEverTick = true;
	Health = 100;
}

void AMonsterActorC::BeginPlay()
{
	Super::BeginPlay();
}

void AMonsterActorC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AMonsterActorC::SetHealth(int CurrentHealth)
{
	return false;
}

bool AMonsterActorC::CheckIsAndroid()
{
#if PLATFORM_ANDROID
	return true;
#endif
	return false;
}

