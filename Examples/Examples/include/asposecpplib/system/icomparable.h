/// @file system/icomparable.h
/// Contains the declaration of System::IComparable class.
#ifndef _IComparable_h_
#define _IComparable_h_

#include "system/object.h"

namespace System {
    /// Defines a method that compares two objects.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    /// @tparam T The type of the objects with which the current object gets compared
    template<typename T = SharedPtr<System::Object> >
    class ASPOSECPP_SHARED_CLASS IComparable : virtual public Object
    {
        RTTI_INFO_TEMPLATE_CLASS(System::IComparable<T>, System::BaseTypesInfo<System::Object>);
    public:
        /// Compares the current object with the specified object.
        /// @param other The object to compare with the current object
        /// @returns A negative number if the current object precedes the specified object is the sort order; 0 if the compared objects are equal; positive number if the current object follows the specified object in the sort order
        virtual int CompareTo(T other) = 0;
    };

}

#endif
