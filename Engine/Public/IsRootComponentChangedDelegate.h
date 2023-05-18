#pragma once
#include "CoreMinimal.h"
#include "IsRootComponentChangedDelegate.generated.h"

class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FIsRootComponentChanged, USceneComponent*, UpdatedComponent, bool, bIsRootComponent);

