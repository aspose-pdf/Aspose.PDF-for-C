/// @file system/details/lock_context.h
#pragma once


namespace System
{

class Object;

/// Guard object implementing C# lock() statement.
class LockContext
{
public:
    /// Locks object.
    ASPOSECPP_SHARED_API LockContext(Object* lockable);
    /// Unlocks object if not locked yet.
    ASPOSECPP_SHARED_API ~LockContext();

    /// Unlocks object.
    ASPOSECPP_SHARED_API void unlock();

private:
    /// Object to unlock in destructor.
    Object* m_lockable;
};


} //namespace System
