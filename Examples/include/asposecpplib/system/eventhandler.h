#ifndef _aspose_system_eventhandler_h_
#define _aspose_system_eventhandler_h_

#include "system/multicast_delegate.h"
#include "system/eventargs.h"

namespace System
{
    template<class TEventArgs = SharedPtr<EventArgs>>
    class EventHandler : public MulticastDelegate<void(System::SharedPtr<Object>, TEventArgs)>
    {
        static_assert(IsSharedPtr<TEventArgs>::value && std::is_convertible<TEventArgs, SharedPtr<EventArgs>>::value,
            "Event argument type have to be SharedPtr to inherited from EventArgs class");

    public:

        EventHandler() : MulticastDelegate<void(System::SharedPtr<Object>, TEventArgs)>()
        {}

        EventHandler(std::nullptr_t) : MulticastDelegate<void(System::SharedPtr<Object>, TEventArgs)>()
        {}
    };
}

#endif // _eventhandler_h_