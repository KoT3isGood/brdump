#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "RendererOverrideSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, ProjectUserConfig)
class ENGINE_API URendererOverrideSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportAllShaderPermutations: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceRecomputeTangents: 1;
    
    URendererOverrideSettings();
};

