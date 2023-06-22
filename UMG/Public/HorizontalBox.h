#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "HorizontalBox.generated.h"

class UHorizontalBoxSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UHorizontalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotSpacing;
    
    UHorizontalBox();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacing(float InSpacing);
    
    UFUNCTION(BlueprintCallable)
    UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
    
};

