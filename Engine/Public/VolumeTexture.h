#pragma once
#include "CoreMinimal.h"
#include "Texture.h"
#include "VolumeTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVolumeTexture : public UTexture {
    GENERATED_BODY()
public:
    UVolumeTexture();
};

