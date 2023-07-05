#include "WindowManagerWidget.h"

void UWindowManagerWidget::OnIntroSequenceFinished() {
}


UWindowManagerWidget::UWindowManagerWidget() {
    this->MenuAnchorWidget = NULL;
    this->CurrentTooltipWidget = NULL;
    this->MainCanvasPanel = NULL;
    this->PopupContainerClass = NULL;
    this->ContextMenuWidgetClass = NULL;
    this->TooltipWidgetClass = NULL;
    this->TooltipOffset = 0.00f;
    this->TooltipDelay = 0.50f;
}

