#pragma once
#include "CoreMinimal.h"
#include "EAudioComponentPlayState.h"
#include "OnAudioPlayStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioPlayStateChanged, EAudioComponentPlayState, PlayState);

