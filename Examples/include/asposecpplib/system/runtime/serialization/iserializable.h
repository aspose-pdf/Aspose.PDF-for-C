/// @file system/runtime/serialization/iserializable.h
#ifndef _aspose_system_runtime_serialization_iseriliazable_h_
#define _aspose_system_runtime_serialization_iseriliazable_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/runtime/serialization/serialization_info.h"
#include "system/runtime/serialization/streaming_context.h"

namespace System { namespace Runtime { namespace Serialization  {

/// Interface of object which can be serialized.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ISerializable : public virtual Object
{
    /// ThisType alias
    typedef ISerializable ThisType;
    /// BaseType alias
    typedef System::Object BaseType;
    
    /// ThisTypeBaseTypesInfo alias
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;

    ///RTTI info
    RTTI_INFO(System::Runtime::Serialization::ISerializable, ThisTypeBaseTypesInfo);
    /// Serializes object data.
    /// @param info Destination data structure.
    /// @param context Context with serialization rules.
    virtual ASPOSECPP_SHARED_API void GetObjectData(System::SharedPtr<SerializationInfo> info, StreamingContext context) = 0;
};

}}}

#endif
