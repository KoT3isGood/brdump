#include "PhysicsSettings.h"

UPhysicsSettings::UPhysicsSettings() {
    this->LockedAxis = ESettingsLockedAxis::Invalid;
    this->DefaultDegreesOfFreedom = ESettingsDOF::Full3D;
    this->bSuppressFaceRemapTable = true;
    this->bSupportUVFromHitResults = false;
    this->bDisableActiveActors = false;
    this->bDisableKinematicStaticPairs = true;
    this->bDisableKinematicKinematicPairs = true;
    this->bDisableCCD = false;
    this->bEnableEnhancedDeterminism = false;
    this->AnimPhysicsMinDeltaTime = 0.02f;
    this->bSimulateAnimPhysicsAfterReset = false;
    this->MaxPhysicsDeltaTime = 0.10f;
    this->bSubstepping = false;
    this->bSubsteppingAsync = false;
    this->MaxSubstepDeltaTime = 0.02f;
    this->MaxSubsteps = 2;
    this->SyncSceneSmoothingFactor = 0.00f;
    this->InitialAverageFrameRate = 0.02f;
    this->PhysXTreeRebuildRate = 10;
    this->PhysicalSurfaces.AddDefaulted(12);
    this->MinDeltaVelocityForHitEvents = 0.00f;
}

