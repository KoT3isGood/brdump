#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=VerticalBox -FallbackName=VerticalBox
#include "EBrickUISpacingStyle.h"
#include "BrickVerticalBox.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickVerticalBox : public UVerticalBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUISpacingStyle SlotSpacingStyle;
    
public:
    UBrickVerticalBox();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacingStyle(EBrickUISpacingStyle NewStyle);
    
};

