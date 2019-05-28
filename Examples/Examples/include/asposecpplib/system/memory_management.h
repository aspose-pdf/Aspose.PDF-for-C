/// @file system/memory_management.h
#pragma once

namespace CsToCppPorter
{
/// @brief Defines a method that changes the lifetime of objects.
class MemoryManagement
{
public:
    /// @brief Creates a smart pointer using the aliasing constructor.
    /// @tparam T1 Type of smart pointer to the object that the new smart pointer will refer to.
    /// @tparam T2 Type of smart pointer to an object whose ownership is shared with a new smart pointer.
    /// @param target Smart pointer to the object that the new smart pointer will refer to.
    /// @param source Smart pointer to an object whose ownership is shared with a new smart pointer.
    /// @return New smart pointer.
    template<typename T1, typename T2>
    static T1 BindLifetime(const T1& target, const T2& source)
    {
        return T1(source, target.get());
    }
};

}
