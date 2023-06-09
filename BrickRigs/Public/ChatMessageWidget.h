#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickUIColorStyle.h"
#include "ChatMessageWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UChatMessageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UChatMessageWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMessageText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateColorStyle(EBrickUIColorStyle NewColorStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanKickPlayer(bool bNewCanKick);
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanKickPlayer() const;
    
};

