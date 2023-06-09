#pragma once
#include "CoreMinimal.h"
#include "MenuPageWidget.h"
#include "PlayersMenuWidget.generated.h"

class UScoreboardWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPlayersMenuWidget : public UMenuPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoreboardWidget* Scoreboard;
    
public:
    UPlayersMenuWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanShowPlayerProfile(bool bCanShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanKickPlayer(bool bCanKick);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer();
    
};

