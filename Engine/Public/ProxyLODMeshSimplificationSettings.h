#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ProxyLODMeshSimplificationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProxyLODMeshReductionModuleName;
    
    UProxyLODMeshSimplificationSettings();
};

