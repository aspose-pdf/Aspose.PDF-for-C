/// @file system/threading/timeout.h
#ifndef _aspose_system_threading_timeout_h_
#define _aspose_system_threading_timeout_h_

#include <system/timespan.h>

namespace System { namespace Threading {

/// Threading timeout special values.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
struct Timeout {
    /// Infinite timeout in milliseconds.
    static ASPOSECPP_SHARED_API const int64_t Infinite = -1;
    /// Infinite timeout of TimeSpan type.
    static ASPOSECPP_SHARED_API const TimeSpan InfiniteTimespan;
};

}} // System::Threading
#endif // _aspose_system_threading_timeout_h_
