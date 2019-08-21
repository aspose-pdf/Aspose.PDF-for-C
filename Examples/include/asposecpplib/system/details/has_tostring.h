/// @file system/details/has_tostring.h
#ifndef _has_tostring_h_
#define _has_tostring_h_

#include "system/shared_ptr.h"

namespace System
{

class String;

namespace Details
{

/// Checks if specific type has ToString() method.
/// @tparam T Type to test.
template<typename T>
class HasToString
{
    /// Structure used to check for non-const ToString() method existance.
    template <typename U, String (U::*)()> struct Check;
    /// Checker function.
    template <typename U> static char func(Check<U, &U::ToString> *);
    /// Checker function.
    template <typename U> static int func(...);

    /// Structure used to check for const ToString() method existance.
    template <typename U, String (U::*)() const> struct ConstCheck;
    /// Checker function.
    template <typename U> static char cfunc(ConstCheck<U, &U::ToString> *);
    /// Checker function.
    template <typename U> static int cfunc(...);

public:
    enum 
    { 
        /// 0 if no .ToString() method is provided for T type, 1 otherwise.
        value = sizeof(func<T>(0)) == sizeof(char) || sizeof(cfunc<T>(0)) == sizeof(char) 
    };
};

/// Checks if type is SmartPtr with ToString defined.
/// @param T Type to test.
template<typename T>
class HasPtrToString
{
public:
    enum
    {
        /// 1 if type is SmartPtr on type with ToString() method, 0 otherwise.
        value = HasToString< typename IsSmartPtr<T>::type >::value
    };
};

} // namespace Details
} // namespace System
#endif // _has_tostring_h_
