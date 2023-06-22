#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=HorizontalBox -FallbackName=HorizontalBox
#include "EBrickUISpacingStyle.h"
#include "BrickHorizontalBox.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickHorizontalBox : public UHorizontalBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUISpacingStyle SlotSpacingStyle;
    
public:
    UBrickHorizontalBox();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacingStyle(EBrickUISpacingStyle NewStyle);
    
};

