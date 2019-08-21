/// @file system/threading/event_wait_handle.h
#pragma once
#include "system/object.h"
#include "system/threading/wait_handle.h"


namespace System { namespace Threading {

/// Indicates how event state resets.
enum EventResetMode
{
    /// Event state resets automatically on reading.
    AutoReset = 0,
    /// Event state should be reset manually.
    ManualReset = 1
};

/// Event that can be sent to waiting thread.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EventWaitHandle : public WaitHandle
{
    /// RTTI information.
    RTTI_INFO(System::Threading::EventWaitHandle, ::System::BaseTypesInfo<System::Threading::WaitHandle>);

public:
    /// Constructor.
    /// @param initialState True for signalled, false for not signalled.
    /// @param mode Reset thread of the event.
    ASPOSECPP_SHARED_API EventWaitHandle(bool initialState, EventResetMode mode);
    /// Destructor.
    ASPOSECPP_SHARED_API ~EventWaitHandle();

    /// Sets event to non-signalling state.
    virtual ASPOSECPP_SHARED_API bool Reset();
    /// Sets event to signalling state.
    virtual ASPOSECPP_SHARED_API bool Set();

private:
    /// Checks event reset mode.
    /// @param mode Mode to check.
    /// @return True if mode is manual, false if mode is auto.
    /// @throw ArgumentException If mode is unknown (neither auto nor manual).
    static ASPOSECPP_SHARED_API bool CheckResetMode(EventResetMode mode);
};

}} // namespace System{ namespace Threading{


