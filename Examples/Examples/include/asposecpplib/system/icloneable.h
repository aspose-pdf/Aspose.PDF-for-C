/// @file system/icloneable.h
/// Contains the declaration of System::ICloneable class.
#ifndef _ICLONEABLE_H_
#define _ICLONEABLE_H_

#include <system/object.h>
#include <system/shared_ptr.h>

namespace System
{
    /// Defies a method that enables object cloning - creating a copy of an object.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ICloneable : public virtual System::Object
    {
    public:
        /// Creates a copy of the current object and returns a shared pointer to it.
        virtual System::SharedPtr<System::Object> Clone() = 0;
    };
}

#endif
