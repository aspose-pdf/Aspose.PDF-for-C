/// @file system/threading/wait_handle.h
#ifndef _system_threading_wait_handle_h_
#define _system_threading_wait_handle_h_

#include "system/object.h"
#include "system/array.h"
#include "system/timespan.h"


namespace System{ namespace Threading{

/// Handle type.
typedef void * wait_handle_t;

/// Waiting primitive base class.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS WaitHandle : public System::Object //public EventWaitHandle
{
    /// RTTI information.
    RTTI_INFO(System::Threading::WaitHandle, ::System::BaseTypesInfo<System::Object>);
public:
    /// Waits for all handles to fire.
    /// @param waitHandles Handles to wait for.
    /// @param millisecondsTimeout Timeout to wait for, in milliseconds; -1 means infinite waiting, 0 means check-and-return, positive values are timeouts.
    /// @return True if all handles fired, false if timeout exceeded.
    static ASPOSECPP_SHARED_API bool WaitAll(const System::ArrayPtr<System::SharedPtr<WaitHandle>>& waitHandles, int millisecondsTimeout);
    /// Waits for any of the handles to fire.
    /// @param waitHandles Handles to wait for.
    /// @param millisecondsTimeout Timeout to wait for, in milliseconds; -1 means infinite waiting, 0 means check-and-return, positive values are timeouts.
    /// @return True if any handle fired, false if timeout exceeded.
    static ASPOSECPP_SHARED_API int WaitAny(const System::ArrayPtr<System::SharedPtr<WaitHandle>>& waitHandles, int millisecondsTimeout);

    /// Waits for the handle to fire for unlimited period.
    /// @return Always returns true as no timeout occurs.
    virtual ASPOSECPP_SHARED_API bool WaitOne();
    /// Waits for the handle to fire.
    /// @param millisecondsTimeout Timeout to wait for, in milliseconds; -1 means infinite waiting, 0 means check-and-return, positive values are timeouts.
    /// @return True if handle fired, false if timeout exceeded.
    virtual ASPOSECPP_SHARED_API bool WaitOne(int millisecondsTimeout);
    /// Waits for the handle to fire.
    /// @param timeout  A System::TimeSpan that represents the number of milliseconds to wait, or a System::TimeSpan that represents -1 milliseconds to wait indefinitely.
    /// @return True if handle fired, false if timeout exceeded.
    virtual ASPOSECPP_SHARED_API bool WaitOne(const System::TimeSpan &timeout);
    /// Waits for the handle to fire.
    /// @param millisecondsTimeout Timeout to wait for, in milliseconds; -1 means infinite waiting, 0 means check-and-return, positive values are timeouts.
    /// @param exitContext If true, waiting should drop the lock on the handle before waiting for it.
    /// @return True if handle fired, false if timeout exceeded.
    virtual ASPOSECPP_SHARED_API bool WaitOne(int millisecondsTimeout, bool exitContext);

    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~WaitHandle();
    /// Releases any resource associated with handle.
    virtual ASPOSECPP_SHARED_API void Close();

    /// Gets handle.
    /// @return Raw handle owned by object.
    ASPOSECPP_SHARED_API wait_handle_t get_Handle();

    /// Special value to be returned by the function otherwise returning index of signalled object in array, if timeout exceeds and nothing signals.
    static ASPOSECPP_SHARED_API const int WaitTimeout = 0x102;

protected:
    /// Implementation of waiting for multiple objects.
    /// @param waitHandles Handles to wait for.
    /// @param millisecondsTimeout Timeout to wait for, in milliseconds; -1 means infinite waiting, 0 means check-and-return, positive values are timeouts.
    /// @param waitAll If true, waits for all handles, otherwise waits for just one.
    /// @param index Stores index of signalled obejct here.
    /// @return 0 if awaited event occurs, non-zero value otherwise.
    static ASPOSECPP_SHARED_API int WaitMultiple(const System::ArrayPtr<System::SharedPtr<WaitHandle>>& waitHandles, int millisecondsTimeout, bool waitAll, int& index);

    /// Constructor.
    /// @param handle Raw handle value.
    ASPOSECPP_SHARED_API WaitHandle(wait_handle_t handle);

private:
    /// Raw handle associated with object.
    wait_handle_t m_wait_handle = 0;

};

}} // namespace System{ namespace Threading{

#endif // _system_threading_wait_handle_h_
