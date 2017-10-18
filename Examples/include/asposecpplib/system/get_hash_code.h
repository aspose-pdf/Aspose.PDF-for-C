#pragma once

#include <system/shared_ptr.h>
#include <type_traits>
#include <thread>

namespace System {

template<typename T>
typename std::enable_if<std::is_scalar<T>::value && sizeof(T) == sizeof(int64_t), int>::type
GetHashCode(const T& obj)
{
        const int64_t* i64 = reinterpret_cast<const int64_t*>(&obj);
        return static_cast<int>(*i64) ^ static_cast<int>(*i64 >> 32);
}

template<typename T>
typename std::enable_if<std::is_scalar<T>::value && sizeof(T) == sizeof(int32_t), int>::type
GetHashCode(const T& obj)
{
    return *reinterpret_cast<const int*>(&obj);
}

template<typename T>
typename std::enable_if<std::is_scalar<T>::value && sizeof(T) != sizeof(int32_t) && sizeof(T) != sizeof(int64_t), int>::type
GetHashCode(const T& obj)
{
    return static_cast<int>(obj);
}

template<typename T>
typename std::enable_if<!std::is_scalar<T>::value && System::IsSharedPtr<T>::value, int>::type
GetHashCode(const T& obj)
{
    return obj->GetHashCode();
}

template<typename T>
typename std::enable_if<!std::is_scalar<T>::value && !System::IsSharedPtr<T>::value, int>::type
GetHashCode(const T& obj)
{
    return obj.GetHashCode();
}


template<>
inline int
GetHashCode(const std::thread::id& id)
{
    std::hash<std::thread::id> hash;
    return hash(id);
}

} // namespace System
