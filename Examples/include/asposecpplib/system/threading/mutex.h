/// @file system/threading/mutex.h
#pragma once
#include "system/object.h"
#include "system/threading/wait_handle.h"

namespace System { namespace Threading {
class MutexHandler;

/// Mutex implemnetation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Mutex : public WaitHandle
{
    /// RTTI information.
    RTTI_INFO(System::Threading::Mutex, ::System::BaseTypesInfo<System::Threading::WaitHandle>);

public:
    /// Constructs unowned mutex.
    ASPOSECPP_SHARED_API Mutex();
    /// Constructor.
    /// @param initiallyOwned If true, the mutex being constructed is owned initially.
    ASPOSECPP_SHARED_API Mutex(bool initiallyOwned);
    /// Constructor.
    /// @param initiallyOwned If true, the mutex being constructed is owned initially.
    /// @param name Name of the mutex.
    ASPOSECPP_SHARED_API Mutex(bool initiallyOwned, String name);

    /// Releases the mutex.
    ASPOSECPP_SHARED_API void ReleaseMutex();

    /// Resets mutex state. Not implemented.
    virtual ASPOSECPP_SHARED_API bool Reset();
    /// Set mutex to signalled state. Not implemented.
    virtual ASPOSECPP_SHARED_API bool Set();

    /// Locks mutex. Performs unlimited waiting if neccessary.
    /// @return Always returns true as it does not return until mutex is locked.
    virtual ASPOSECPP_SHARED_API bool WaitOne() override;
    /// Locks mutex. Performs waiting if neccessary.
    /// @param millisecondsTimeout Waiting timeout in milliseconds.
    /// @return Returns true if mutex was locked or false if timeout exceeded.
    virtual ASPOSECPP_SHARED_API bool WaitOne(int millisecondsTimeout) override;

    /// Erases a named mutex from the system.
    /// @return false on error
    static ASPOSECPP_SHARED_API bool Remove(const String& mutexName);

private:
    /// Mutex implemnetation.
    std::unique_ptr<MutexHandler> m_mutex_handler;

    /// Create mutex implementation.
    /// @param initiallyOwned If true, the mutex being constructed is owned initially.
    /// @param name Name of the mutex. If value is null or empty, the mutex is unnamed.
    static std::unique_ptr<MutexHandler> CreateMutexHandler(bool initiallyOwned, String name);
};

}} // namespace System{ namespace Threading{
