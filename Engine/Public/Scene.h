#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Scene.generated.h"

UCLASS(Blueprintable)
class UScene : public UObject {
    GENERATED_BODY()
public:
    UScene();
};

