#ifndef _system_attribute_h_
#define _system_attribute_h_

#include "system/object.h"
#include "system/array.h"

namespace System
{
    class Attribute : public System::Object
    {
        RTTI_INFO(System::Attribute, ::System::BaseTypesInfo<System::Object>)

    public:

        static Object::ptr GetCustomAttribute(const TypeInfo& type, const TypeInfo& attributeType)
        {
            return type.GetCustomAttribute(attributeType);
        }

        static ArrayPtr<Object::ptr> GetCustomAttributes(const TypeInfo& type)
        {
            return type.GetCustomAttributes();
        }
    };
}

#endif // _Attribute_h_