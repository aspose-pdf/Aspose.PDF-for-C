/// @file system/predicate.h
/// Contains the declaration of System::Predicate class.
#ifndef _aspose_system_predicate_h_
#define _aspose_system_predicate_h_

#include "system/multicast_delegate.h"

namespace System
{

/// Represents a pointer to a predicate - an invokable entity that accepts a single argument and returns a bool value.
/// @tparam T The type of the argument accepted by the invokable entity pointed to by the Predicate delegate type.
template<class T>
using Predicate = MulticastDelegate<bool(T)>;

}

#endif
