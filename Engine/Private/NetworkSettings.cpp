#include "NetworkSettings.h"

UNetworkSettings::UNetworkSettings() {
    this->bVerifyPeer = false;
    this->bEnableMultiplayerWorldOriginRebasing = false;
    this->MaxRepArraySize = 65535;
    this->MaxRepArrayMemory = 1000000;
    this->NetworkEmulationProfiles.AddDefaulted(2);
}

