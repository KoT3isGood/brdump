#pragma once
#include "CoreMinimal.h"
#include "CameraShakeStopParams.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCameraShakeStopParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediately;
    
    FCameraShakeStopParams();
};

