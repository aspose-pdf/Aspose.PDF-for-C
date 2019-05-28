/// @file system/value_type.h
/// Contains the declaration System::ValueType class.
#ifndef _aspose_system_value_type_h
#define _aspose_system_value_type_h

#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/boxable_traits.h>

namespace System {

/// Baseclass for value types with Object inheritance being truncated for performance reasons.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS ValueType
{
public:
    /// Supports value type and reference type comparison.
    /// @param o Reference type object to compare to.
    /// @return True if objects are considered equal, false otherwise.
    static ASPOSECPP_SHARED_API bool Equals(const SharedPtr<Object>& o);
};

/// IsBoxable<T> specialization for ValueType.
template<> struct IsBoxable<ValueType> : std::true_type {};

}
#endif
