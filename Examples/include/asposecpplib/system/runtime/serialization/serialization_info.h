#ifndef _aspose_serialization_info_h_
#define _aspose_serialization_info_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/exceptions.h"

namespace System { namespace Runtime { namespace Serialization  {

class SerializationInfo : public Object
{
    RTTI_INFO(SerializationInfo, ::System::BaseTypesInfo<System::Object>)
public:    
    void AddValue(const System::String& name, float value);
    void AddValue(const System::String& name, short value);
    void AddValue(const System::String& name, bool value);
    void AddValue(const System::String& name, System::SharedPtr<System::Object> value);
};

}}}

#endif
