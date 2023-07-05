#include "BrickGameSession.h"

ABrickGameSession::ABrickGameSession() {
    this->AdminPassword = TEXT("sojdbjaz");
    this->ChatMessages.AddDefaulted(2);
    this->MaxAdminLoginAttempts = 3;
    this->FailedAdminLoginKickDuration = 600;
}

