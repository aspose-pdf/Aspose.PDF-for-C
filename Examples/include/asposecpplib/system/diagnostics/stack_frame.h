/// @file system/diagnostics/stack_frame.h
#ifndef _aspose_system_diagnostics_stack_frame_h_
#define _aspose_system_diagnostics_stack_frame_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/string.h>

//fw
namespace System {
class String;

namespace Reflection {
    class MethodBase;
}
}

namespace System { namespace Diagnostics {

namespace _StackFrame_private {
    /// StackFrame pointer implementation structure.
    class Pimpl;
}

/// Gets information on single stack frame.
/// MSVS only.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StackFrame : public System::Object
{
    /// Enabling constructors.
    FRIEND_FUNCTION_System_MakeObject;

public:
    /// Creates stack frame on current stack offset.
    /// @param skip_frames How many frames to skip.
    ASPOSECPP_SHARED_API StackFrame(int skip_frames);

    /// No copying.
    StackFrame(const StackFrame&) = delete;
    /// No changing.
    const StackFrame& operator=(const StackFrame&) const = delete;
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~StackFrame();
    /// Gets method information.
    /// @return Object with captured method info.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Reflection::MethodBase> GetMethod();
    ///Gets the file name
    ///@return The file name
    virtual ASPOSECPP_SHARED_API System::String GetFileName();
    ///Gets the line number
    ///@return The line number
    virtual ASPOSECPP_SHARED_API int GetFileLineNumber();
    ///Gets the colnum number
    ///@return The colnum number
    virtual ASPOSECPP_SHARED_API int GetFileColumnNumber();
private:
    /// Constructs stack frame.
    /// @param name Method name.
    ASPOSECPP_SHARED_API StackFrame(const System::String &name);
    /// Implementation.
    _StackFrame_private::Pimpl *m_pimpl;
};

}}

#endif
