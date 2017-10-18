#ifndef _aspose_system_converter_h_
#define _aspose_system_converter_h_

#include "system/multicast_delegate.h"

namespace System
{
    template<class TInput, class TOutput>
    using Converter = MulticastDelegate<TOutput(TInput)>;
}

#endif