#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BrickPropertyReflectionFilter.generated.h"

USTRUCT(BlueprintType)
struct FBrickPropertyReflectionFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    BRICKRIGS_API FBrickPropertyReflectionFilter();
};

