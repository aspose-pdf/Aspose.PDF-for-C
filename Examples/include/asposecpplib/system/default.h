/// @file system/default.h
/// Contains the definition of System::Defualt() function.
#ifndef _aspose_system_default_h_
#define _aspose_system_default_h_

#include "system/boxed_value.h"
#include "system/shared_ptr.h"
#include "system/exceptions.h"
#include <type_traits>

namespace System {

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<IsBoxable<T>::value && !IsException<T>::value, T&>::type Default()
{
    static T value = T();
    return value;
}

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<IsException<T>::value, T&>::type Default()
{
    static T value = T(nullptr);
    return value;
}

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<!IsBoxable<T>::value && !IsException<T>::value && !IsSmartPtr<T>::value,
    T&>::type Default()
{ 
	static T value = T();
	return value;
}

/// Returns the default-constructed instance of the specified type.
/// @tparam T The type whose instance is returned
template<typename T>
const typename std::enable_if<!IsBoxable<T>::value && !IsException<T>::value && IsSmartPtr<T>::value,
	System::SharedPtr<typename T::Pointee_>&>::type Default()
{
	static System::SharedPtr<typename T::Pointee_> value = System::SharedPtr<typename T::Pointee_>();
	return value;
}

}
#endif
