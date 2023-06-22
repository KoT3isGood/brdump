#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "VerticalBox.generated.h"

class UVerticalBoxSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UVerticalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotSpacing;
    
    UVerticalBox();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacing(float InSpacing);
    
    UFUNCTION(BlueprintCallable)
    UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
    
};

