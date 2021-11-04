#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MonsterActorC.generated.h"

UCLASS()
class TESTPROJECTC_API AMonsterActorC : public AActor
{
	GENERATED_BODY()
	
public:	
	AMonsterActorC();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	int Health;


	UFUNCTION(BlueprintCallable)
	bool SetHealth(int CurrentHealth);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CheckIsAndroid();
};
