/// @file system/icustomformatter.h
/// Contains the declaration of System::ICustomFormatter class.
#ifndef _ICustomFormatter_h_
#define _ICustomFormatter_h_

#include "system/object.h"
#include "system/iformatprovider.h"

namespace System
{
    class String;
    /// Defines a method that performs custom formatting of a string representation of a value represented by the specified object.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ICustomFormatter : virtual public System::Object
    {
        RTTI_INFO(System::ICustomFormatter, ::System::BaseTypesInfo<System::Object>)

    public:
        /// Returns a string representation of a value represented by the current object using the specified format.
        /// @param format The string format
        /// @param arg The object to be formatted
        /// @param formatProvider The object providing the formatting information
        /// @returns The string representation of @p arg formatted according to the format specified by @p format and @p formatProvider
        virtual ASPOSECPP_SHARED_API System::String Format(System::String format, System::SharedPtr<System::Object> arg, System::SharedPtr<System::IFormatProvider> formatProvider) = 0;
    };
}

#endif
