#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionStaticBoolParameter.h"
#include "MaterialExpressionStaticSwitchParameter.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter {
    GENERATED_BODY()
public:
    UMaterialExpressionStaticSwitchParameter();
};

