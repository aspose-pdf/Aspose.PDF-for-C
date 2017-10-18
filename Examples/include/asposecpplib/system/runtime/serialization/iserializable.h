#ifndef _aspose_system_runtime_serialization_iseriliazable_h_
#define _aspose_system_runtime_serialization_iseriliazable_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/runtime/serialization/serialization_info.h"
#include "system/runtime/serialization/streaming_context.h"

namespace System { namespace Runtime { namespace Serialization  {

    class ISerializable : virtual public Object
    {
        virtual void GetObjectData(System::SharedPtr<SerializationInfo> info, StreamingContext context) = 0;
    };

}}}

#endif