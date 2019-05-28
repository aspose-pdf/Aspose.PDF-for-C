/// @file system/iformatprovider.h
/// Contains the declaration of System::IFormatProvider class.
#ifndef _aspose_system_iformatprovider_h_
#define _aspose_system_iformatprovider_h_

#include "system/object.h"

namespace System
{
    namespace Globalization {
        class CultureInfo;
    }
    /// Defines a method that provides formatting information.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS IFormatProvider: virtual public System::Object
    {
        RTTI_INFO(System::IFormatProvider, ::System::BaseTypesInfo<System::Object>)

    public:
        /// Returns an object that provides formatting services for the specified type.
        /// @param formatType The type for which formatting object is requested
        /// @returns An object that provides formatting sevices for the specified type
        virtual ASPOSECPP_SHARED_API SharedPtr<Object> GetFormat(const TypeInfo &formatType) = 0;
    };
}

#endif // _aspose_system_iformatprovider_h_
