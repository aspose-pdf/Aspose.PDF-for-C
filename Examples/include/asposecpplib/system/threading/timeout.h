#ifndef _aspose_system_threading_timeout_h_
#define _aspose_system_threading_timeout_h_

#include <system/timespan.h>

namespace System { namespace Threading {

struct Timeout {

    static const ASPOSECPP_SHARED_API int64_t Infinite;
    static const ASPOSECPP_SHARED_API TimeSpan InfiniteTimespan;
};

}} // System::Threading
#endif // _aspose_system_threading_timeout_h_