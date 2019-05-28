/// @file system/threading/semaphore.h
#pragma once
#include "system/object.h"
#include "system/threading/wait_handle.h"
#include <memory>

namespace System { namespace Threading {

class SemaphoreHandler;

/// Semaphore implementation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Semaphore : public WaitHandle
{
    /// RTTI information.
    RTTI_INFO(System::Threading::Semaphore, ::System::BaseTypesInfo<System::Threading::WaitHandle>);

public:
    /// Creates unnamed semaphore.
    /// @param initialCount Initial count of active entries.
    /// @param maximumCount Maximum allwed entries count.
    ASPOSECPP_SHARED_API Semaphore(int initialCount, int maximumCount);
    /// Creates named semaphore.
    /// @param initialCount Initial count of active entries.
    /// @param maximumCount Maximum allwed entries count.
    /// @param name Semaphore name.
    ASPOSECPP_SHARED_API Semaphore(int initialCount, int maximumCount, const String& name);
    /// Creates named semaphore.
    /// @param initialCount Initial count of active entries.
    /// @param maximumCount Maximum allwed entries count.
    /// @param name Semaphore name.
    /// @param createdNew Reference to variable which is set to true if semaphore was created and to false if existing one with same name was reused
    ASPOSECPP_SHARED_API Semaphore(int initialCount, int maximumCount, const String& name, bool& createdNew);

    /// Sets semaphore to non-signalled state. Not supported.
    virtual ASPOSECPP_SHARED_API bool Reset();
    /// Sets semaphore to signalled state. Not supported.
    virtual ASPOSECPP_SHARED_API bool Set();

    /// Locks semaphore. Performs unlimited waiting if neccessary.
    /// @return Always returns true as it does not return until semaphore is locked.
    virtual ASPOSECPP_SHARED_API bool WaitOne() override;
    /// Locks semaphore. Performs waiting if neccessary.
    /// @param millisecondsTimeout Waiting timeout in milliseconds.
    /// @return Returns true if semaphore was locked or false if timeout exceeded.
    virtual ASPOSECPP_SHARED_API bool WaitOne(int millisecondsTimeout) override;
    /// Releases lock on semaphore.
    /// @return The count of locks just before Release() was called.
    ASPOSECPP_SHARED_API int Release();
    /// Releases multiple locks on semaphore.
    /// @param releaseCount Number of locks to release.
    /// @return The count of locks just before Release() was called.
    ASPOSECPP_SHARED_API int Release(int releaseCount);

private:
    /// Implementation.
    std::shared_ptr<SemaphoreHandler> m_semaphore_handler;

    /// Checks if arguments are valid.
    /// @param initialCount Initial count of active entries.
    /// @param maximumCount Maximum allwed entries count.
    /// @throw ArgumentOutOfRangeException If @p initialCount is less than zero or @p maximumCount is less than one.
    /// @throw ArgumentException If @p initialCounts exceeds @p maximumCount.
    void CheckArguments(int initialCount, int maximumCount);
    /// Creates named semaphore.
    /// @param initialCount Initial count of active entries.
    /// @param maximumCount Maximum allwed entries count.
    /// @param name Semaphore name.
    /// @param createdNew Reference to variable which is set to true if semaphore was created and to false if existing one with same name was reused
    void ConstructNamed(int initialCount, int maximumCount, const String &name, bool &createdNew);
};


}} // namespace System{ namespace Threading{
