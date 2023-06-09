#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "EBrickUISpacingStyle.h"
#include "BrickScrollBox.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUISpacingStyle SlotSpacingStyle;
    
public:
    UBrickScrollBox();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacingStyle(EBrickUISpacingStyle NewStyle);
    
};

