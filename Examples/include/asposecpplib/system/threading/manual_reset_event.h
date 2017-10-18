#ifndef manual_reset_event_h
#define manual_reset_event_h

#include "system/object.h"
#include "system/threading/event_wait_handle.h"

namespace System{ namespace Threading{

class ManualResetEvent FINAL: public EventWaitHandle
    {
    RTTI_INFO(System::Threading::ManualResetEvent, ::System::BaseTypesInfo<System::Threading::EventWaitHandle>);

public:
    ManualResetEvent(bool initialState);

    };

}} // namespace System{ namespace Threading{


#endif // manual_reset_event_h