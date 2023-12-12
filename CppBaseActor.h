#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_CppBase.generated.h"

UCLASS()
class YOURPROJECT_API A_CppBase : public AActor
{
    GENERATED_BODY()

public:
    A_CppBase();

    virtual void BeginPlay() override;

    virtual void Tick(float DeltaTime) override;

    void ShowActorInformation();

    UPROPERTY(EditAnywhere, Category = "Custom Variables")
    FString InstanceName;

    UPROPERTY(EditAnywhere, Category = "Custom Variables")
    int32 EnemyNum;

    UPROPERTY(EditAnywhere, Category = "Custom Variables")
    bool IsAlive;
};