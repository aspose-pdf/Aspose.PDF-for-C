/// @file system/runtime/serialization/serialization_info.h
#ifndef _aspose_serialization_info_h_
#define _aspose_serialization_info_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/exceptions.h"

namespace System { namespace Runtime { namespace Serialization  {

/// Forward declaration
class IFormatterConverter;

/// Holds set of named fields representing serialized object.
/// Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SerializationInfo : public Object
{
    /// RTTI information.
    RTTI_INFO(SerializationInfo, ::System::BaseTypesInfo<System::Object>)
public:
    /// Creates a new instance of the SerializationInfo class.
    /// @param type The System::TypeInfo of the object to serialize.
    /// @param converter The IFormatterConverter used during deserialization.
    ASPOSECPP_SHARED_API SerializationInfo(const System::TypeInfo& type, System::SharedPtr<IFormatterConverter> converter);
    /// Puts float value. Not implemented.
    /// @param name Value name.
    /// @param value Value to put.
    ASPOSECPP_SHARED_API void AddValue(const System::String& name, float value);
    /// Puts short value. Not implemented.
    /// @param name Value name.
    /// @param value Value to put.
    ASPOSECPP_SHARED_API void AddValue(const System::String& name, short value);
    /// Puts boolean value. Not implemented.
    /// @param name Value name.
    /// @param value Value to put.
    ASPOSECPP_SHARED_API void AddValue(const System::String& name, bool value);
    /// Puts object value. Not implemented.
    /// @param name Value name.
    /// @param value Value to put.
    ASPOSECPP_SHARED_API void AddValue(const System::String& name, const System::SharedPtr<System::Object>& value);
};

}}}

#endif
