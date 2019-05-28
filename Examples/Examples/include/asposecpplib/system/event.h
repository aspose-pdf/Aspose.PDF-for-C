/// @file system/event.h
/// Contains the declaration of Event alias.

#ifndef _aspose_system_event_h_
#define _aspose_system_event_h_

#include "system/multicast_delegate.h"

namespace System
{
    /// Represents an event - a mechanism through which subscribers are notified about an occurence of interest by means of a delegate invocation.
    /// @tparam Args The types of arguments passed to the delegate when event is triggerreds.
    template<class... Args>
    using Event = MulticastDelegate<Args...>;

} // namespace System
#endif // _aspose_system_event_h_
