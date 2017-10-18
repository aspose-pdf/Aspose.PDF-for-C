#ifndef _aspose_system_diagnostics_stack_trace_h_
#define _aspose_system_diagnostics_stack_trace_h_

#include <system/object.h>
#include "system/shared_ptr.h"

namespace System { namespace Diagnostics {

    namespace _StackTrace_private
    {
        class Pimpl;
    }

    class StackFrame;

    class StackTrace : public System::Object
    {
    public:
        StackTrace();
        ~StackTrace();

        StackTrace(const StackTrace&) = delete;
        const StackTrace& operator=(const StackTrace&) const = delete;

        virtual SharedPtr<StackFrame> GetFrame(uint32_t index);

        int get_FrameCount() const;

    private:
        _StackTrace_private::Pimpl *m_pimpl;
    } ;

}}

#endif