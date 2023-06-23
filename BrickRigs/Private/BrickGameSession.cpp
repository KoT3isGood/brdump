#include "BrickGameSession.h"

ABrickGameSession::ABrickGameSession() {
    this->AdminPassword = TEXT("sojdbjaz");
    this->ChatMessages.AddDefaulted(19);
    this->MaxAdminLoginAttempts = 3;
    this->FailedAdminLoginKickDuration = 600;
}

