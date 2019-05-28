/// @file system/attribute.h
/// Contains declaration of System::Attribute class.
#ifndef _system_attribute_h_
#define _system_attribute_h_

#include "system/object.h"
#include "system/array.h"

namespace System
{
    /// A base class for custom attributes.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS Attribute : public System::Object
    {
        RTTI_INFO(System::Attribute, ::System::BaseTypesInfo<System::Object>)

    public:
        /// Returns a custom attribute of a specified type appllied to specified type.
        /// @param type Type attribute of which is retrieved
        /// @param attributeType Type of the attribute to retrieve
        /// @returns A retrieved attribute or null if specified type does not have attribute of specified type.
        static Object::ptr GetCustomAttribute(const TypeInfo& type, const TypeInfo& attributeType)
        {
            return type.GetCustomAttribute(attributeType);
        }

        /// Returns all custom attributes appllied to specified type.
        /// @param type Type attributes of which to retrieved
        /// @returns An array that contains attributes applied to the specified type
        static ArrayPtr<Object::ptr> GetCustomAttributes(const TypeInfo& type)
        {
            return type.GetCustomAttributes();
        }
    };
}

#endif // _Attribute_h_
