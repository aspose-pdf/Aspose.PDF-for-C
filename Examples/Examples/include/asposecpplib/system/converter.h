/// @file system/converter.h
/// Contains declarations of System::Converter class.
#ifndef _aspose_system_converter_h_
#define _aspose_system_converter_h_

#include "system/multicast_delegate.h"

namespace System
{
    /// Represents a pointer to the invokable entity that accepts a single argument of the @p TInput type and returns a value of the @p TOutput type.
    /// @tparam TInput The type of the argument accepted by the invokable entity pointed to by the delegate
    /// @tparam TOutput The type of the value returned by the invokable entity pointed to by the delegate
    template<class TInput, class TOutput>
    using Converter = MulticastDelegate<TOutput(TInput)>;
}

#endif
