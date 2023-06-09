#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BrickUIBrushStyle.generated.h"

USTRUCT(BlueprintType)
struct FBrickUIBrushStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brushes[13];
    
    BRICKRIGS_API FBrickUIBrushStyle();
};

