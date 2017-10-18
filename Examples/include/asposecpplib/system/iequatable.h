#ifndef _IEquatable_h_
#define _IEquatable_h_

#include "system/object.h"

namespace System {

    template<typename T = SharedPtr<System::Object> >
    class IEquatable : virtual public Object
    {
        RTTI_INFO_TEMPLATE_CLASS(System::IEquatable<T>, System::BaseTypesInfo<System::Object>);
    public:
        virtual bool Equals(T other) = 0;
    };
}

#endif
