#include "A_CppBase.h"
#include "Logging/LogMacros.h"

A_CppBase::A_CppBase()
{
    PrimaryActorTick.bCanEverTick = true;
    EnemyNum = 0;
    IsAlive = true;
}

void A_CppBase::BeginPlay()
{
    Super::BeginPlay();

    ShowActorInformation();
}

void A_CppBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void A_CppBase::ShowActorInformation()
{
    UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *InstanceName);
    UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyNum);
    UE_LOG(LogTemp, Display, TEXT("IsAlive: %d"), IsAlive);
}