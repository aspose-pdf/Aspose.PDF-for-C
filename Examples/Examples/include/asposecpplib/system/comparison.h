/// @file system/comparison.h
/// Contains declaration of System::Comparison class.

#ifndef _aspose_system_comparison_h_
#define _aspose_system_comparison_h_

#include "system/multicast_delegate.h"

namespace System {
/// Represents a pointer to the method that compares two objects of the same type.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
/// @tparam T The type of the objects the method compares
template<typename T>
class Comparison : public System::MulticastDelegate<int(T, T)>
{
public:
    /// Constructs an instance of Comparison delegate that represent the pointer to the specified invokable entitiy.
    /// @tparam Y The type of the invokable entity to be pointed to by the Comparison object being created
    /// @param arg An invokable entity to be pointed to by the Comparison object being created
    template<typename Y>
    Comparison(Y arg) : System::MulticastDelegate<int(T, T)>(arg) { }
    
    /// Invokes the invokable object pointed to by the current object.
    /// @param a The first comparand
    /// @param b The second comparand
    /// @returns True if @p a is less than @p b, otherwise - true
    bool operator()(T a, T b) { return this->emit(a, b) < 0; }
};
}

#endif
