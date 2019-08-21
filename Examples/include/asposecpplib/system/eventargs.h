/// @file system/eventargs.h
/// Contains the declaration of System::EventArgs class.
#ifndef _eventargs_h_
#define _eventargs_h_

#include "system/object.h"

namespace System
{
    class EventArgs;

    /// Shared pointer to an instance of EventArgs class.
    typedef SharedPtr<EventArgs> EventArgsPtr;

    /// The base class for classes that represent a context that is passed to the event subscribers when an event is triggerred.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS EventArgs : public System::Object
    {
        RTTI_INFO(System::EventArgs, ::System::BaseTypesInfo<System::Object>)

    public:
        /// A static member that represents an "empty" EventArgs shared pointer (null-pointer). 
        static ASPOSECPP_SHARED_API EventArgsPtr Empty;

        /// Constructor.
        ASPOSECPP_SHARED_API EventArgs();

#ifdef __DBG_FOR_EACH_MEMEBR
        virtual const char* DBG_class_name() const override { return "EventArgs"; }
#endif
    };
}

#endif // _eventargs_h_
