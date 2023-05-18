#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(32);
    this->DefaultChannelResponses.AddDefaulted(10);
    this->EditProfiles.AddDefaulted(19);
    this->ProfileRedirects.AddDefaulted(5);
    this->CollisionChannelRedirects.AddDefaulted(4);
}

