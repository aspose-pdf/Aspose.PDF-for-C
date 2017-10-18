#ifndef _IDisposable_h_
#define _IDisposable_h_

#include "system/object.h"

namespace System
{
#ifdef CALL_DISPOSE

    class IDisposable
    {
    public:
        virtual void Dispose() = 0;
    };

#else

    class IDisposable : virtual public System::Object
    {
        RTTI_INFO(System::IDisposable, ::System::BaseTypesInfo<System::Object>)

    public:
        // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class

        virtual void Dispose()  { }

    };

#endif
}

#endif