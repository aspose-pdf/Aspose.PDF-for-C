/// @file system/eventhandler.h
/// Contains the declaration of System::EventHandler class.
#ifndef _aspose_system_eventhandler_h_
#define _aspose_system_eventhandler_h_

#include "system/multicast_delegate.h"
#include "system/eventargs.h"

namespace System
{
    /// Represents a method that reacts to and processes an event.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    /// @tparam TEventArgs The type of the argument that represents the context of the event
    template<class TEventArgs = SharedPtr<EventArgs>>
    class EventHandler : public MulticastDelegate<void(System::SharedPtr<Object>, TEventArgs)>
    {
        static_assert(IsSmartPtr<TEventArgs>::value && std::is_convertible<TEventArgs, SharedPtr<EventArgs>>::value,
            "Event argument type have to be SharedPtr to inherited from EventArgs class");

    public:
        /// Constructor.
        EventHandler() : MulticastDelegate<void(System::SharedPtr<Object>, TEventArgs)>()
        {}

        /// Null-object constructor.
        EventHandler(std::nullptr_t) : MulticastDelegate<void(System::SharedPtr<Object>, TEventArgs)>()
        {}
    };
}

#endif // _eventhandler_h_
