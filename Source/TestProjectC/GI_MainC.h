#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GI_MainC.generated.h"

UCLASS()
class TESTPROJECTC_API UGI_MainC : public UGameInstance
{
	GENERATED_BODY()

	UGI_MainC();
	
public:
	UPROPERTY(BlueprintReadOnly)
	int CurrentPlayerCount;

	UFUNCTION(BlueprintCallable)
	bool SetCurrentPlayerCount(int PlayerCount);
};
