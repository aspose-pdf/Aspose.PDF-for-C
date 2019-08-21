/// @file windows/i_button_control.h
#ifndef _aspose_system_windows_forms_i_button_control_h_
#define _aspose_system_windows_forms_i_button_control_h_

#include <system/object.h>
#include <windows/dialog_result.h>

namespace System { namespace Windows { namespace Forms {

/// Dummy class to make ported code that uses IButtonControl interface compilable.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS IButtonControl : public virtual System::Object
{
public:
    /// Gets dialog result associated with button.
    virtual ASPOSECPP_SHARED_API DialogResult get_DialogResult() = 0;
    /// Sets dialog result associated with button.
    virtual ASPOSECPP_SHARED_API void set_DialogResult(DialogResult value) = 0;

    /// Makes control default or non-default.
    virtual ASPOSECPP_SHARED_API void NotifyDefault(bool value) = 0;
    /// Performs click on the button.
    virtual ASPOSECPP_SHARED_API void PerformClick() = 0;
};

} } }

#endif
