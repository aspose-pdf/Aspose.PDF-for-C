#if !defined(_auto_reset_event_h_)
#define _auto_reset_event_h_

#include "system/object.h"
#include "system/threading/event_wait_handle.h"

namespace System{ namespace Threading{

class AutoResetEvent FINAL : public EventWaitHandle
    {
    RTTI_INFO(System::Threading::AutoResetEvent, ::System::BaseTypesInfo<System::Threading::EventWaitHandle>);

    public:
    AutoResetEvent(bool initialState);

    };

}}

#endif