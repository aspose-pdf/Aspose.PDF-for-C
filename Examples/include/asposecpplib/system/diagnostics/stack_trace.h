/// @file system/diagnostics/stack_trace.h
#ifndef _aspose_system_diagnostics_stack_trace_h_
#define _aspose_system_diagnostics_stack_trace_h_

#include <system/object.h>
#include "system/shared_ptr.h"

namespace System { namespace Diagnostics {

namespace _StackTrace_private
{
    /// Stack trace pointer implementation.
    class Pimpl;
}

class StackFrame;

/// Collection of stack frames.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StackTrace : public System::Object
{
public:
    /// Creates stack trace describing current stack state.
    ASPOSECPP_SHARED_API StackTrace();
    /// Creates stack trace describing current stack state.
    /// @param isFileInfoNeeded True to capture the file name, line number, and column number; otherwise, false
    ASPOSECPP_SHARED_API StackTrace(bool isFileInfoNeeded);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~StackTrace();

    /// No copying.
    StackTrace(const StackTrace&) = delete;
    /// No assignment.
    const StackTrace& operator=(const StackTrace&) const = delete;

    /// Gets stack frame.
    /// @param index Stack frame index, must be between 0 and FrameCount-1.
    /// @return Available stack frames.
    virtual ASPOSECPP_SHARED_API SharedPtr<StackFrame> GetFrame(uint32_t index);
    /// Gets count of frames in stack trace.
    /// @return Number of frames available.
    int ASPOSECPP_SHARED_API get_FrameCount() const;

private:
    /// Implementation details.
    _StackTrace_private::Pimpl *m_pimpl;
} ;

}}

#endif
