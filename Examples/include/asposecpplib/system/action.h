#ifndef _aspose_system_action_h_
#define _aspose_system_action_h_

#include "system/multicast_delegate.h"

namespace System
{
    template<class... Args>
    using Action = MulticastDelegate<void(Args...)>;

} // namespace System
#endif // _action_h_
