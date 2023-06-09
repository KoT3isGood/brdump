#pragma once
#include "CoreMinimal.h"
#include "StreamingLevelsToConsider.generated.h"

class ULevelStreaming;

USTRUCT(BlueprintType)
struct FStreamingLevelsToConsider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> StreamingLevels;
    
public:
    ENGINE_API FStreamingLevelsToConsider();
};

