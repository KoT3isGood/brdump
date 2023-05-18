#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SplineMetadata.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API USplineMetadata : public UObject {
    GENERATED_BODY()
public:
    USplineMetadata();
};

