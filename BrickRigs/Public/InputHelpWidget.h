#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InputHelpWidget.generated.h"

class UGameOverlayWidget;
class UInputActionListWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputHelpWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputActionListWidget* ActionListWidget;
    
public:
    UInputHelpWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameOverlayWidget* GetGameOverlay() const;
    
};

