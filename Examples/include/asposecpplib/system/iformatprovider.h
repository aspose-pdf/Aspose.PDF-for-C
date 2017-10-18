#ifndef _aspose_system_iformatprovider_h_
#define _aspose_system_iformatprovider_h_

#include "system/object.h"

namespace System
{
    namespace Globalization {
        class CultureInfo;
    }

    class IFormatProvider: virtual public System::Object
    {
        RTTI_INFO(System::IFormatProvider, ::System::BaseTypesInfo<System::Object>)

    public:
        virtual SharedPtr<Object> GetFormat(const TypeInfo &formatType) = 0;
    };
}

#endif // _aspose_system_iformatprovider_h_