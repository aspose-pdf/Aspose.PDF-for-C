/// @file system/action.h
/// Contains definition of System::Action<T> delegate.
#ifndef _aspose_system_action_h_
#define _aspose_system_action_h_

#include "system/multicast_delegate.h"

namespace System
{
    /// Delegate type that references methods that have no return value. 
    /// @tparam Args Argument list of the methods the delegate references.
    template<class... Args>
    using Action = MulticastDelegate<void(Args...)>;

} // namespace System
#endif // _action_h_
