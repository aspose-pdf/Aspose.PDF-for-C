#ifndef _aspose_system_gc_h_
#define _aspose_system_gc_h_

#include <system/object.h>
#include <system/exceptions.h>

namespace System {
    
class GC : public Object
{
    RTTI_INFO(GC, ::System::BaseTypesInfo<System::Object>);
public:    
    static void SuppressFinalize(SharedPtr<Object> obj);
};

} // System
#endif