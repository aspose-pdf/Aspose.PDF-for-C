#ifndef _aspose_system_default_h_
#define _aspose_system_default_h_

#include "system/boxed_value.h"
#include "system/shared_ptr.h"
#include "system/exceptions.h"
#include <type_traits>

namespace System {

template<typename T>
const typename std::enable_if<IsBoxable<T>::value && !IsException<T>::value, T&>::type Default()
{
    static T value = T();
    return value;
}

template<typename T>
const typename std::enable_if<IsException<T>::value, T&>::type Default()
{
    static T value = T(nullptr);
    return value;
}

template<typename T>
const typename std::enable_if<!IsBoxable<T>::value && !IsException<T>::value && !IsSharedPtr<T>::value,
    System::SharedPtr<T>&>::type Default()
{ 
    static System::SharedPtr<T> value = System::SharedPtr<T>();
    return value;
}

template<typename T>
const typename std::enable_if<!IsBoxable<T>::value && !IsException<T>::value && IsSharedPtr<T>::value,
    T&>::type Default()
{
    static T value = T();
    return value;
}

}
#endif