#ifndef _ICustomFormatter_h_
#define _ICustomFormatter_h_

#include "system/object.h"
#include "system/iformatprovider.h"

namespace System
{
    class String;

    class ICustomFormatter : virtual public System::Object
    {
        RTTI_INFO(System::ICustomFormatter, ::System::BaseTypesInfo<System::Object>)

    public:
        virtual System::String Format(System::String format, System::SharedPtr<System::Object> arg, System::SharedPtr<System::IFormatProvider> formatProvider) = 0;
    };
}

#endif