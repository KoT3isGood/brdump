#include "InputSettings.h"

void UInputSettings::SaveKeyMappings() {
}

void UInputSettings::RemoveAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}

void UInputSettings::RemoveActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}

UInputSettings* UInputSettings::GetInputSettings() {
    return NULL;
}

void UInputSettings::GetAxisNames(TArray<FName>& AxisNames) const {
}

void UInputSettings::GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) const {
}

void UInputSettings::GetActionNames(TArray<FName>& ActionNames) const {
}

void UInputSettings::GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) const {
}

void UInputSettings::ForceRebuildKeymaps() {
}

void UInputSettings::ClearAxisMappings(bool bForceRebuildKeymaps) {
}

void UInputSettings::ClearActionMappings(bool bForceRebuildKeymaps) {
}

void UInputSettings::AddAxisMappings(const TArray<FInputAxisKeyMapping>& KeyMappings, bool bForceRebuildKeymaps) {
}

void UInputSettings::AddAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}

void UInputSettings::AddActionMappings(const TArray<FInputActionKeyMapping>& KeyMappings, bool bForceRebuildKeymaps) {
}

void UInputSettings::AddActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}

UInputSettings::UInputSettings() {
    this->AxisConfig.AddDefaulted(87);
    this->bAltEnterTogglesFullscreen = true;
    this->bF11TogglesFullscreen = true;
    this->bUseMouseForTouch = false;
    this->bEnableMouseSmoothing = false;
    this->bEnableFOVScaling = false;
    this->bCaptureMouseOnLaunch = false;
    this->bDefaultViewportMouseLock = false;
    this->bAlwaysShowTouchInterface = false;
    this->bShowConsoleOnFourFingerTap = true;
    this->bEnableGestureRecognizer = false;
    this->bUseAutocorrect = false;
    this->DefaultViewportMouseCaptureMode = EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown;
    this->DefaultViewportMouseLockMode = EMouseLockMode::LockOnCapture;
    this->FOVScale = 0.01f;
    this->DoubleClickTime = 0.20f;
    this->ActionMappings.AddDefaulted(18);
    this->AxisMappings.AddDefaulted(2);
    this->ConsoleKeys.AddDefaulted(3);
}

