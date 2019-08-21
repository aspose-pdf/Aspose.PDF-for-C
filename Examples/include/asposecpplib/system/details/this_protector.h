///@file system/details/this_protector.h
#pragma once

#include <system/object.h>


namespace System { namespace Details {

/// Guards object in its constructor. Allows creating and destroying shared pointers to it without actually deleting the object. Used by auto_ctor_self_reference feature.
class ThisProtector
{
public:
    /// Increments shared pointer count of passed object.
    /// @param self Object to guard.
    inline ThisProtector(Object *self) : m_self(self) 
    {
        m_self->SharedRefAdded();
    }
    /// Safely decrements shared pointer count of guarded object. Never deletes the object.
    inline ~ThisProtector()
    {
        m_self->SharedRefRemovedSafe();
    }
private:
    ThisProtector(const ThisProtector&) = delete;
    ThisProtector& operator = (const ThisProtector&) = delete;
    /// Object to protect.
    Object *const m_self;
};


} } // namespace System::Details
