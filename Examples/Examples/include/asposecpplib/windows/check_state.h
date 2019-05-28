/// @file windows/check_state.h
#ifndef _aspose_system_windows_forms_check_state_h_
#define _aspose_system_windows_forms_check_state_h_

namespace System { namespace Windows { namespace Forms {

/// State of checkable control (e. g. checkbox).
enum class CheckState
{
    /// Unchecked.
    Unchecked = 0,
    /// Checked.
    Checked = 1,
    /// Transition state which is most commonly depicted as shaded.
    Indeterminate = 2
};

} } }

#endif
