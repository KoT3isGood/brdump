#pragma once
#include "CoreMinimal.h"
#include "AudioVolumeSubmixOverrideSettings.generated.h"

class USoundEffectSubmixPreset;
class USoundSubmix;

USTRUCT(BlueprintType)
struct FAudioVolumeSubmixOverrideSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* Submix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossfadeTime;
    
    ENGINE_API FAudioVolumeSubmixOverrideSettings();
};

