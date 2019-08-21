/// @file system/marshal_by_ref_object.h
/// Contains the declaration of System::MarshalByRefObject class.
#ifndef _marshal_by_ref_object_h_
#define _marshal_by_ref_object_h_

#include <system/object.h>

namespace System {

/// Provides access to objects across application domain boundaries in remoting-enabled applications.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS MarshalByRefObject: virtual public Object
{
    RTTI_INFO(MarshalByRefObject, ::System::BaseTypesInfo<Object>)
public:
    //virtual ObjRef CreateObjRef(Type requestedType);
    //Object GetLifetimeService();
    //virtual Object InitializeLifetimeService();

    //MarshalByRefObject MemberwiseClone(bool)
protected:
    /// Constructs an instance.
    MarshalByRefObject() {}
};

} // System
#endif
