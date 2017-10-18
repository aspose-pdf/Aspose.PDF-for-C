#ifndef _marshal_by_ref_object_h_
#define _marshal_by_ref_object_h_

#include <system/object.h>

namespace System {

class MarshalByRefObject: virtual public Object
{
    RTTI_INFO(MarshalByRefObject, ::System::BaseTypesInfo<Object>)
public:
    //virtual ObjRef CreateObjRef(Type requestedType);
    //Object GetLifetimeService();
    //virtual Object InitializeLifetimeService();

    //MarshalByRefObject MemberwiseClone(bool)
protected:
    MarshalByRefObject() {}
};

} // System
#endif
