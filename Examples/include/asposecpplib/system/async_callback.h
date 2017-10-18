#ifndef _async_callback_h_
#define _async_callback_h_

#include <functional>
#include <system/shared_ptr.h>

namespace System
{
    class IAsyncResult;
    typedef std::function<void(SharedPtr<IAsyncResult>)> AsyncCallback;
}
#endif
