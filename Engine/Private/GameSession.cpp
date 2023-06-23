#include "GameSession.h"

AGameSession::AGameSession() {
    this->MaxSpectators = 2;
    this->MaxPlayers = 128;
    this->MaxPartySize = -1;
    this->MaxSplitscreensPerConnection = 4;
    this->bRequiresPushToTalk = true;
}

