#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDistanceFieldsRenderingSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionDistanceFieldsRenderingSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Yes;
    
    UMaterialExpressionDistanceFieldsRenderingSwitch();
};

