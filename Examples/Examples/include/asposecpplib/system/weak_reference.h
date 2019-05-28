/// @file weak_reference.h
#pragma once

#include "system/object.h"
#include "system/smart_ptr.h"
#include "system/weak_ptr.h"

namespace System
{
    /// Represents a weak reference, which references an object while still allowing that object to be deleted.
    class ASPOSECPP_SHARED_CLASS WeakReference 
    {

    public:
        /// Default constructor
        WeakReference()
        {
        }
        
        /// Initializes a new instance of the WeakReference class, referencing the specified object.
        WeakReference(const SmartPtr<Object> &data)
        {
            wptr = data;
        }

        /// Gets the object (the target) referenced by the current WeakReference object.
        SmartPtr<Object>& get_Target()
        {
            return wptr;
        }

        /// Sets the object (the target) referenced by the current WeakReference object.
        void set_Target(const SmartPtr<Object>& data)
        {
            wptr = data;
        }

        /// Gets an indication whether the object referenced by the current WeakReference object has been deleted.
        bool get_IsAlive() const
        {
            return !wptr.expired();
        }

        void reset()
        {
            wptr.reset();
        }

    private:
        WeakPtr<Object> wptr;
    };
}