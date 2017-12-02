#ifndef _aspose_system_diagnostics_stack_frame_h_
#define _aspose_system_diagnostics_stack_frame_h_

#include <system/object.h>
#include <system/shared_ptr.h>

//fw
namespace System {

    class String;

    namespace Reflection {
        class MethodBase;
    }
}

namespace System { namespace Diagnostics {

    namespace _StackFrame_private {
        class Pimpl;
    }

    class StackFrame : public System::Object
    {
        FRIEND_FUNCTION_System_MakeObject;

    public:
        StackFrame(int skip_frames);

        StackFrame(const StackFrame&) = delete;
        const StackFrame& operator=(const StackFrame&) const = delete;

        ~StackFrame();
        System::SharedPtr<System::Reflection::MethodBase> GetMethod();

    private:
        StackFrame(const System::String &);

        _StackFrame_private::Pimpl *m_pimpl;
    };

}}

#endif