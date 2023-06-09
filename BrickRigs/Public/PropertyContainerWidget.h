#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "BrickUserWidget.h"
#include "PropertyContainerWidget.generated.h"

class UBrickTextBlock;
class UPropertyWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPropertyContainerWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPropertyWidget* PropertyWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* NameTextBlock;
    
public:
    UPropertyContainerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOrientation(TEnumAsByte<EOrientation> InOrientation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsReadOnly(bool bInReadOnly);
    
    UFUNCTION(BlueprintCallable)
    bool OpenContextMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPropertyWidget(UPropertyWidget* Widget, TEnumAsByte<EOrientation> InOrientation);
    
};

