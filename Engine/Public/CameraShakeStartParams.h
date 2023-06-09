#pragma once
#include "CoreMinimal.h"
#include "CameraShakeStartParams.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCameraShakeStartParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestarting;
    
    FCameraShakeStartParams();
};

