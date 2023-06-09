#include "PagedListWidget.h"



void UPagedListWidget::SetCurrentPage(int32 InPage) {
}

void UPagedListWidget::RefreshEntries() {
}

void UPagedListWidget::OnPageChanged(int32 NewPage) {
}

void UPagedListWidget::OnEntriesLoaded(int32 InTotalNumEntries, int32 InMaxPages) {
}

void UPagedListWidget::InitializePropertiesPanel(UObject* Container) {
}

UPagedListEntryWidget* UPagedListWidget::GetSelectedEntryWidget() const {
    return NULL;
}

int32 UPagedListWidget::GetCurrentPage() const {
    return 0;
}

bool UPagedListWidget::ClearSelectedEntryWidget() {
    return false;
}

UPagedListWidget::UPagedListWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ScrollBox = NULL;
    this->PageSelector = NULL;
    this->EntriesPanel = NULL;
    this->PropertiesPanel = NULL;
    this->SelectedEntryHeaderWidget = NULL;
    this->EntryWidgetClass = NULL;
    this->NumEntriesPerRow = 1;
    this->NumEntriesPerPage = 30;
    this->bUseAbsoluteEntryIndices = false;
}

