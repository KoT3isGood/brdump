#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerInput -FallbackName=PlayerInput
#include "BrickPlayerInput.generated.h"

class UInputComponent;

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UBrickPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputComponent*> LastInputStack;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputMethodChanged OnInputMethodChangedDelegate;
    
    UBrickPlayerInput();
};

