/// @file system/idisposable.h
/// Contains the declaration of System::IDisposable class.
#ifndef _IDisposable_h_
#define _IDisposable_h_

#include "system/object.h"

namespace System
{
#ifdef CALL_DISPOSE
    /// Defines method that releases resources owned by the current object.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS IDisposable
    {
    public:
        /// Releases resources owned by the current object.
        virtual void Dispose() = 0;
    };

#else
    /// Defines method that releases resources owned by the current object.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS IDisposable : virtual public System::Object
    {
        RTTI_INFO(System::IDisposable, ::System::BaseTypesInfo<System::Object>)

    public:
        // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class
        /// Does nothing.
        virtual void Dispose()  { }

    };

#endif
}

#endif
