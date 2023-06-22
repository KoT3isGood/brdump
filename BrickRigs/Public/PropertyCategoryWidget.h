#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "PropertyListInterface.h"
#include "PropertyCategoryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPropertyCategoryWidget : public UUserWidget, public IPropertyListInterface {
    GENERATED_BODY()
public:
    UPropertyCategoryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCategory(const FText& DisplayName);
    
    
    // Fix for true pure virtual functions not being implemented
};

