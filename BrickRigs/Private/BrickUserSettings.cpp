#include "BrickUserSettings.h"

UBrickUserSettings* UBrickUserSettings::GetUserSettings() {
    return NULL;
}

UBrickUserSettings::UBrickUserSettings() {
    this->HoldKeyTime = 0.30f;
    this->MouseTapTime = 0.10f;
    this->HostServerType = EHostServerType::None;
    this->bApplyMatchSettings = true;
    this->bFadeMatchSettings = true;
    this->GamepadCursorSpeed = 1.00f;
    this->hudvisibility = EHUDVisibility::Full;
    this->MeasurementSystem = EMeasurementSystem::Metric;
    this->ChatContext = EChatContext::Team;
    this->MasterVolume = 0.50f;
    this->MusicVolume = 0.00f;
    this->FieldOfView = 90.00f;
    this->FOVAxisConstraint = AspectRatio_MaintainXFOV;
    this->CameraMode = ECameraMode::Orbital;
    this->TransmissionMode = ETransmissionMode::Automatic;
    this->bAutoCounterSteering = false;
    this->MouseSensitivity = 1.00f;
    this->GamepadSensitivity = 1.00f;
    this->bInvertViewPitch = false;
    this->bToggleAim = false;
    this->bToggleSprint = false;
    this->bToggleCrouch = false;
    this->bEnableDepthOfField = true;
    this->MotionBlurScale = 1.00f;
    this->AntiAliasingMethod = AAM_TemporalAA;
    this->EditorMirrorMode = EBrickEditorMirrorMode::Y;
    this->EditorViewMode = EBrickEditorViewMode::Default;
    this->EditorMouseMoveSensitivity = 0.50f;
    this->EditorGridSnappingDistance = 10.00f;
    this->EditorGridSnappingAngle = 15.00f;
    this->EditorBrickSnappingDistance = 10.00f;
    this->EditorBrickSnappingAngle = 5.00f;
    this->bEditorSnappingEnabled = true;
    this->bEditorGizmoWorldSpace = false;
    this->EditorZoomRatio = 0.05f;
    this->EditorCameraSpeedRatio = 0.14f;
    this->FreeCamSpeedRatio = 0.06f;
    this->FreeCamShiftSpeedRatio = 1.00f;
    this->ProjectileCamZoomRatio = 0.25f;
}

