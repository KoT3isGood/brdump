#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandQuantization.h"
#include "QuartzPulseOverrideStep.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzPulseOverrideStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPulses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuartzCommandQuantization PulseDuration;
    
    FQuartzPulseOverrideStep();
};

