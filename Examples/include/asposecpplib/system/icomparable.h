#ifndef _IComparable_h_
#define _IComparable_h_

#include "system/object.h"

namespace System {

    template<typename T = SharedPtr<System::Object> >
    class IComparable : virtual public Object
    {
        RTTI_INFO_TEMPLATE_CLASS(System::IComparable<T>, System::BaseTypesInfo<System::Object>);
    public:
        virtual int CompareTo(T other) = 0;
    };

}

#endif
