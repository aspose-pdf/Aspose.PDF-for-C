#ifndef _aspose_system_predicate_h_
#define _aspose_system_predicate_h_

#include "system/multicast_delegate.h"

namespace System
{
    template<class T>
    using Predicate = MulticastDelegate<bool(T)>;
}

#endif