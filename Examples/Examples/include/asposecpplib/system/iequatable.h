/// @file system/iequatable.h
/// Contains the declaration of System::IEquatable class.
#ifndef _IEquatable_h_
#define _IEquatable_h_

#include "system/object.h"

namespace System {
    /// Defines a method that determines the equality of two objects.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    /// @tparam T The type of the compared objects 
    template<typename T = SharedPtr<System::Object> >
    class IEquatable : virtual public Object
    {
        RTTI_INFO_TEMPLATE_CLASS(System::IEquatable<T>, System::BaseTypesInfo<System::Object>);
    public:
        /// Determines if the the current and specified objects are equal.
        /// @param other The object to compare the current object with
        /// @returns True if the objects are equal, otherwise - false
        virtual bool Equals(T other) = 0;
    };
}

#endif
