/// @file windows/dialog_result.h
#ifndef _aspose_system_windows_forms_dialog_result_h_
#define _aspose_system_windows_forms_dialog_result_h_

namespace System { namespace Windows { namespace Forms {

/// Result of dialog interaction with user.
enum class DialogResult
{
    /// Still running.
    None = 0,
    /// OK button pressed.
    OK = 1,
    /// Cancel button pressed.
    Cancel = 2,
    /// Abort button pressed.
    Abort = 3,
    /// Retry button pressed.
    Retry = 4,
    /// Ignore button pressed.
    Ignore = 5,
    /// Yes button pressed.
    Yes = 6,
    /// No button pressed.
    No = 7
};

} } }

#endif
