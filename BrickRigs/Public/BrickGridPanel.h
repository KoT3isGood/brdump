#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=GridPanel -FallbackName=GridPanel
#include "EBrickUISpacingStyle.h"
#include "BrickGridPanel.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickGridPanel : public UGridPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUISpacingStyle SlotSpacingStyle;
    
public:
    UBrickGridPanel();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacingStyle(EBrickUISpacingStyle NewStyle);
    
};

