/// @file system/get_hash_code.h
/// Contains the declaration of GetHashCode() function.
#pragma once

#include <system/shared_ptr.h>
#include <system/weak_ptr.h>
#include <system/details/hash_function.h>

#include <functional>
#include <type_traits>
#include <thread>

namespace System {

/// Returns a hash code for the specified scalar value.
/// @param obj The value to generate hash code for
/// @returns The hash code generated for the specified value
/// @tparam T The type of the value for which the function generates hash code
template<typename T>
typename std::enable_if<std::is_scalar<T>::value, int>::type
GetHashCode(const T& obj)
{
    return static_cast<int>(System::Details::Hash_Meiyan(reinterpret_cast<const char*>(&obj), sizeof(obj)));
}

/// Returns a hash code for the specified object.
/// @param obj The SmartPtr pointing to the object to generate hash code for
/// @returns The hash code generated for the specified object
/// @tparam T The type of the object for which the function generates hash code
template<typename T>
typename std::enable_if<!std::is_scalar<T>::value && System::IsSmartPtr<T>::value, int>::type
GetHashCode(const T& obj)
{
    return obj->GetHashCode();
}

/// Returns a hash code for the specified object which is not a smart pointer.
/// @param obj A const reference to the object to generate hash code for
/// @returns The hash code generated for the specified object
/// @tparam T The type of the object for which the function generates hash code
template<typename T>
typename std::enable_if<!std::is_scalar<T>::value && !System::IsSmartPtr<T>::value, int>::type
GetHashCode(const T& obj)
{
    return obj.GetHashCode();
}


/// Specialization for std::thread::id; Returns the hash code for the specified thread object.
template<>
inline int
GetHashCode(const std::thread::id& id)
{
    std::hash<std::thread::id> hash;
    return ASPOSECPP_CHECKED_CAST(int, hash(id));
}

} // namespace System
