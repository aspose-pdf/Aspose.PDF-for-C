#ifndef _aspose_system_event_h_
#define _aspose_system_event_h_

#include "system/multicast_delegate.h"

namespace System
{
    template<class... Args>
    using Event = MulticastDelegate<Args...>;

} // namespace System
#endif // _aspose_system_event_h_