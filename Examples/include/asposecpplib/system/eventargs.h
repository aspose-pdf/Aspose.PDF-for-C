#ifndef _eventargs_h_
#define _eventargs_h_

#include "system/object.h"

namespace System
{
    class EventArgs;
    typedef SharedPtr<EventArgs> EventArgsPtr;

    // The base class for all event classes.
    class EventArgs : public System::Object
    {
        RTTI_INFO(System::EventArgs, ::System::BaseTypesInfo<System::Object>)

    public:
        static ASPOSECPP_SHARED_API EventArgsPtr Empty;

        EventArgs();

#ifdef __DBG_FOR_EACH_MEMEBR
        virtual const char* DBG_class_name() const { return "EventArgs"; }
#endif
    };
}

#endif // _eventargs_h_