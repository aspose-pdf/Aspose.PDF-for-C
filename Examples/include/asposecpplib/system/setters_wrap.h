/// @file system/setters_wrap.h
/// Contains the declaration functions that Porter translates C# class' properties assigment expressions into.
#ifndef _aspose_system_setter_wrap_h_
#define _aspose_system_setter_wrap_h_

#include "system/shared_ptr.h"

namespace System {

namespace WithLambda {

/// Wrapper function to wrap calling setter method and returning set value (normally, set methods do not return values).
/// @tparam S Setter type (lambda).
/// @tparam T Value type.
/// @param setter Setter lambda.
/// @param value Value to set and return.
/// @return Always returns unchanged assigned value.
template<typename S, typename T>
T setter_wrap(S &&setter, T value)
{
    setter(value);
    return value;
}

/// Porter translates C#'s increment expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param getter Reference to a function object representing property's getter
/// @param setter Reference to a function object representing property's setter
/// @returns The incremented value of the property
/// @tparam G The type of the getter function object
/// @tparam S The type of the setter function object
template <typename G, typename S>
auto setter_increment_wrap(G&& getter, S&& setter)
{
    auto tmp = getter();
    setter(++tmp);
    return tmp;
}

/// Porter translates C#'s post-increment expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param getter Reference to a function object representing property's getter
/// @param setter Reference to a function object representing property's setter
/// @returns The value of the property before it was incremented
/// @tparam G The type of the getter function object
/// @tparam S The type of the setter function object
template <typename G, typename S>
auto setter_post_increment_wrap(G&& getter, S&& setter)
{
    auto tmp = getter();
    setter(tmp + 1);
    return tmp;
}

/// Porter translates C#'s decrement expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param getter Reference to a function object representing property's getter
/// @param setter Reference to a function object representing property's setter
/// @returns The decremented value of the property
/// @tparam G The type of the getter function object
/// @tparam S The type of the setter function object
template <typename G, typename S>
auto setter_decrement_wrap(G&& getter, S&& setter)
{
    auto tmp = getter();
    setter(--tmp);
    return tmp;
}

/// Porter translates C#'s post-decrement expressions targeting a class' property that has a setter and getter defined, into 
/// invocation of this function. 
/// @param getter Reference to a function object representing property's getter
/// @param setter Reference to a function object representing property's setter
/// @returns The value of the property before it was decremented
/// @tparam G The type of the getter function object
/// @tparam S The type of the setter function object
template <typename G, typename S>
auto setter_post_decrement_wrap(G&& getter, S&& setter)
{
    auto tmp = getter();
    setter(tmp - 1);
    return tmp;
}

/// Inserts an implementation of a function into which Porter translates C#'s assignment expressions targeting a class' property that has a setter and a getter defined.
/// @param name String used as a part of the name of the function
/// @param op The assignment operator handled by the generated function 
#define PROP_ASSIGN_LAMBDA_WRAP(name, op) \
    template <typename G, typename S, typename T> \
    auto setter_##name##_wrap(G&& getter, S&& setter, T value) \
    { \
        auto tmp = getter(); \
        tmp op value; \
        setter(tmp); \
        return tmp; \
    } 

PROP_ASSIGN_LAMBDA_WRAP(add, += )
PROP_ASSIGN_LAMBDA_WRAP(sub, -= )
PROP_ASSIGN_LAMBDA_WRAP(mul, *= )
PROP_ASSIGN_LAMBDA_WRAP(div, /= )
PROP_ASSIGN_LAMBDA_WRAP(mod, %= )
PROP_ASSIGN_LAMBDA_WRAP(shl, <<= )
PROP_ASSIGN_LAMBDA_WRAP(shr, >>= )
PROP_ASSIGN_LAMBDA_WRAP(and, &= )
PROP_ASSIGN_LAMBDA_WRAP(or, |= )
PROP_ASSIGN_LAMBDA_WRAP(exor, ^= )

/// Creates lambda that calls property setter on object (used by setter_wrap_with_lambda option).
/// @param capture Object to call setter for.
/// @param prop Property to set.
#define SETTER_LAMBDA(capture, prop) \
    [&obj = capture](const auto& v){ obj->set_##prop(v); }
/// Creates lambda that calls property getter on object (used by setter_wrap_with_lambda option).
/// @param capture Object to call getter for.
/// @param prop Property to get.
#define GETTER_LAMBDA(capture, prop) \
    [&obj = capture]{ return obj->get_##prop(); }
/// Creates lambda that calls property setter on reference (used by setter_wrap_with_lambda option).
/// @param capture Reference to call setter for.
/// @param prop Property to set.
#define SETTER_REF_LAMBDA(capture, prop) \
    [&obj = capture](const auto& v){ obj.set_##prop(v); }
/// Creates lambda that calls property getter on reference (used by setter_wrap_with_lambda option).
/// @param capture Reference to call getter for.
/// @param prop Property to get.
#define GETTER_REF_LAMBDA(capture, prop) \
    [&obj = capture]{ return obj.get_##prop(); }
/// Creates lambda that calls property setter on lvalue (used by setter_wrap_with_lambda option).
/// @param capture Lvalue to call setter for.
/// @param prop Property to set.
#define SETTER_LVAL_LAMBDA(capture, prop) \
    [obj = capture](const auto& v){ obj->set_##prop(v); }
/// Creates lambda that calls property getter on lvalue (used by setter_wrap_with_lambda option).
/// @param capture Lvalue to call getter for.
/// @param prop Property to get.
#define GETTER_LVAL_LAMBDA(capture, prop) \
    [obj = capture]{ return obj->get_##prop(); }
/// Creates lambda that calls property setter on this object (used by setter_wrap_with_lambda option).
/// @param prop Property to set.
#define SETTER_THIS_LAMBDA(prop) \
    [this](const auto& v){ this->set_##prop(v); }
/// Creates lambda that calls property getter on this object (used by setter_wrap_with_lambda option).
/// @param prop Property to get.
#define GETTER_THIS_LAMBDA(prop) \
    [this]{ return this->get_##prop(); }
/// Creates lambda that calls static property setter (used by setter_wrap_with_lambda option).
/// @param T Class to call setter for.
/// @param prop Property to set.
#define STATIC_SETTER_LAMBDA(T, prop) \
    [](const auto& v){ T::set_##prop(v); }
/// Creates lambda that calls static property getter (used by setter_wrap_with_lambda option).
/// @param T Class to call getter for.
/// @param prop Property to get.
#define STATIC_GETTER_LAMBDA(T, prop) \
    []{ return T::get_##prop(); }
/// Provides arguments for complex setter on object (used by setter_wrap_with_lambda option).
/// @param capture Object to call getter and setter for.
/// @param prop Property to modify.
#define GETTER_SETTER_LAMBDA_ARGS(capture, prop) \
    GETTER_LAMBDA(capture, prop), SETTER_LAMBDA(capture, prop)
/// Provides arguments for complex setter on this object (used by setter_wrap_with_lambda option).
/// @param prop Property to modify.
#define GETTER_SETTER_THIS_LAMBDA_ARGS(prop) \
    GETTER_THIS_LAMBDA(prop), SETTER_THIS_LAMBDA(prop)
/// Provides arguments for complex setter on reference (used by setter_wrap_with_lambda option).
/// @param capture Reference to call getter and setter for.
/// @param prop Property to modify.
#define GETTER_SETTER_REF_LAMBDA_ARGS(capture, prop) \
    GETTER_REF_LAMBDA(capture, prop), SETTER_REF_LAMBDA(capture, prop)
/// Provides arguments for complex setter on lvalue (used by setter_wrap_with_lambda option).
/// @param capture Lvalue to call getter and setter for.
/// @param prop Property to modify.
#define GETTER_SETTER_LVAL_LAMBDA_ARGS(capture, prop) \
    GETTER_LVAL_LAMBDA(capture, prop), SETTER_LVAL_LAMBDA(capture, prop)
/// Provides arguments for complex static setter (used by setter_wrap_with_lambda option).
/// @param T Type to call static getter and setter for.
/// @param prop Property to modify.
#define STATIC_GETTER_SETTER_LAMBDA_ARGS(T, prop) \
    STATIC_GETTER_LAMBDA(T, prop), STATIC_SETTER_LAMBDA(T, prop)
/// Defines wrapper for specific complex assignment operator (used by setter_wrap_with_lambda option).
/// @param T Type of object to call getter and setter for; ignored.
/// @param obj Object to call getter and setter for.
/// @param prop Property to get, modify and set.
/// @param op Human-readable modifier operator name; used to generate wrapper function name.
/// @param val RHS argument.
#define SETTER_LAMBDA_OP_WRAP(T, obj, prop, op, val) \
    setter_##op##_wrap(GETTER_SETTER_LAMBDA_ARGS(obj, prop), val)

/// Creates lambda that calls indexed setter on object.
/// @param capture Object to call setter for.
#define INDEXED_SETTER_LAMBDA(capture) \
    [&obj = capture](auto&& index, auto&& value){ obj->idx_set(index, value); }
/// Creates lambda that calls indexed getter on object.
/// @param capture Object to call setter for.
#define INDEXED_GETTER_LAMBDA(capture) \
    [&obj = capture](auto&& index){ return obj->idx_get(index); }
/// Provides arguments for complex setter on indexed object.
/// @param capture Object to call indexed getter and setter for.
/// @param arg An argument calculated for indexed getter and setter.
#define INDEXED_GETTER_SETTER_ARGS(capture, arg) \
    INDEXED_GETTER_LAMBDA(capture), INDEXED_SETTER_LAMBDA(capture), [&](){ return arg; }
/// Defines a wrapper for indexed assignment operator.
/// @param name String used as a part of the name of the function
/// @param op The assignment operator handled by the generated function
#define INDEXED_ASSIGN_LAMBDA_WRAP(name, op) \
    template <typename G, typename S, typename I, typename T> \
    void indexed_##name##_wrap(G&& getter, S&& setter, I&& indexer, T&& value) \
    { \
        const auto index = indexer(); \
        auto tmp = getter(index); \
        tmp op value; \
        setter(index, tmp); \
    }

INDEXED_ASSIGN_LAMBDA_WRAP(add, +=)
INDEXED_ASSIGN_LAMBDA_WRAP(sub, -=)
INDEXED_ASSIGN_LAMBDA_WRAP(mul, *=)
INDEXED_ASSIGN_LAMBDA_WRAP(div, /=)
INDEXED_ASSIGN_LAMBDA_WRAP(mod, %=)
INDEXED_ASSIGN_LAMBDA_WRAP(shl, <<=)
INDEXED_ASSIGN_LAMBDA_WRAP(shr, >>=)
INDEXED_ASSIGN_LAMBDA_WRAP(and, &=)
INDEXED_ASSIGN_LAMBDA_WRAP(or , |=)
INDEXED_ASSIGN_LAMBDA_WRAP(exor, ^=)
}

/// Overload for static setter functions with type conversion.
/// @tparam T Value type.
/// @tparam T2 Type expected by setter function.
/// @param  pSetter Static setter function reference.
/// @param value Value to set.
/// @return set value.
template <typename T, typename T2>
inline T setter_wrap(void(*pSetter)(T2), T value)
{
    pSetter(value);
    return value;
}

/// Overload for instance setter functions with type conversion.
/// @tparam T Value type.
/// @tparam T2 Type expected by setter function.
/// @tparam Host Instance type.
/// @param host Object to call setter function for.
/// @param  pSetter Setter function reference.
/// @param value Value to set.
/// @return set value.
template <typename T, typename T2, typename Host>
inline T setter_wrap(Host* const host, void (Host::*pSetter)(T2), T value)
{
    (host->*pSetter)(value);
    return value;
}

/// Porter translates C#'s increment expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param pGetter Function pointer pointing to the property's getter free function
/// @param pSetter Function pointer pointing to the property's setter free function
/// @returns The incremented value of the property
/// @tparam T The type of the property
template <typename T>
inline T setter_increment_wrap(T(*pGetter)(), void(*pSetter)(T))
{
    T tmp = pGetter();
    pSetter(++tmp);
    return tmp;
}


/// Porter translates C#'s increment expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param host A pointer to an object whose property is to be incremented
/// @param pGetter Function pointer pointing to the property's getter method
/// @param pSetter Function pointer pointing to the property's setter method
/// @returns The incremented value of the property
/// @tparam T The type of the property
/// @tparam Host The class that contains the implmentation of the property's getter and setter
template <typename T, typename Host>
inline T setter_increment_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(++tmp);
    return tmp;
}

/// Porter translates C#'s increment expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param host A pointer to an object whose property is to be incremented
/// @param pGetter Function pointer pointing to the property's getter method
/// @param pSetter Function pointer pointing to the property's setter method
/// @returns The incremented value of the property
/// @tparam T The type of the property
/// @tparam Host The class that contains the implmentation of the property's getter and setter
template <typename T, typename Host>
inline T setter_increment_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(++tmp);
    return tmp;
}

// post-increment wrap for static and non-static properties
/// Porter translates C#'s post-increment expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param pGetter Function pointer pointing to the property's getter free function
/// @param pSetter Function pointer pointing to the property's setter free function
/// @returns The value of the property before incrementing
/// @tparam T The type of the property
template <typename T>
inline T setter_post_increment_wrap(T(*pGetter)(), void (*pSetter)( T))
{
    T tmp = pGetter(), rv = tmp;
    tmp++;
    pSetter(tmp);
    return rv;
}

/// Porter translates C#'s post-increment expressions targeting instance's property that has setter and getter defined, into 
/// invocation of this function (overload for non-const getter). 
/// @tparam T The type of the property.
/// @tparam Host Object type.
/// @param host Instance to call getters and setters for.
/// @param pGetter Function pointer pointing to the property's getter function
/// @param pSetter Function pointer pointing to the property's setter function
/// @returns The value of the property before incrementing
template <typename T, typename Host>
inline T setter_post_increment_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp++;
    (host->*pSetter)(tmp);
    return rv;
}

/// Porter translates C#'s post-increment expressions targeting instance's property that has setter and getter defined, into 
/// invocation of this function (overload for const getter). 
/// @tparam T The type of the property.
/// @tparam Host Object type.
/// @param pGetter Function pointer pointing to the property's getter function
/// @param pSetter Function pointer pointing to the property's setter function
/// @returns The value of the property before incrementing
template <typename T, typename Host>
inline T setter_post_increment_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp++;
    (host->*pSetter)(tmp);
    return rv;
}

// decrement wrap for static and non-static properties
/// Porter translates C#'s pre-decrement expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param pGetter Function pointer pointing to the property's getter free function
/// @param pSetter Function pointer pointing to the property's setter free function
/// @returns The value of the property before incrementing
/// @tparam T The type of the property
template <typename T>
inline T setter_decrement_wrap(T(*pGetter)(), void (*pSetter)( T))
{
    T tmp = pGetter();
    pSetter(--tmp);
    return tmp;
}
/// Porter translates C#'s pre-decrement expressions targeting instance's property that has setter and getter defined, into 
/// invocation of this function (overload for non-const getter). 
/// @tparam T The type of the property.
/// @tparam Host Object type.
/// @param host Instance to call getters and setters for.
/// @param pGetter Function pointer pointing to the property's getter function
/// @param pSetter Function pointer pointing to the property's setter function
/// @returns The value of the property before incrementing
template <typename T, typename Host>
inline T setter_decrement_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(--tmp);
    return tmp;
}
/// Porter translates C#'s pre-decrement expressions targeting instance's property that has setter and getter defined, into 
/// invocation of this function (overload for const getter). 
/// @tparam T The type of the property.
/// @tparam Host Object type.
/// @param pGetter Function pointer pointing to the property's getter function
/// @param pSetter Function pointer pointing to the property's setter function
/// @returns The value of the property before incrementing
template <typename T, typename Host>
inline T setter_decrement_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(--tmp);
    return tmp;
}

// post decrement wrap for static and non-static properties
/// Porter translates C#'s post-decrement expressions targeting class' property that has setter and getter defined, into 
/// invocation of this function. 
/// @param pGetter Function pointer pointing to the property's getter free function
/// @param pSetter Function pointer pointing to the property's setter free function
/// @returns The value of the property before incrementing
/// @tparam T The type of the property
template <typename T>
inline T setter_post_decrement_wrap(T(*pGetter)(), void (*pSetter)( T))
{
    T tmp = pGetter(), rv = tmp;
    tmp--;
    pSetter(tmp);
    return rv;
}
/// Porter translates C#'s post-decrement expressions targeting instance's property that has setter and getter defined, into 
/// invocation of this function (overload for non-const getter). 
/// @tparam T The type of the property.
/// @tparam Host Object type.
/// @param host Instance to call getters and setters for.
/// @param pGetter Function pointer pointing to the property's getter function
/// @param pSetter Function pointer pointing to the property's setter function
/// @returns The value of the property before incrementing
template <typename T, typename Host>
inline T setter_post_decrement_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp--;
    (host->*pSetter)(tmp);
    return rv;
}
/// Porter translates C#'s post-decrement expressions targeting instance's property that has setter and getter defined, into 
/// invocation of this function (overload for const getter). 
/// @tparam T The type of the property.
/// @tparam Host Object type.
/// @param pGetter Function pointer pointing to the property's getter function
/// @param pSetter Function pointer pointing to the property's setter function
/// @returns The value of the property before incrementing
template <typename T, typename Host>
inline T setter_post_decrement_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp--;
    (host->*pSetter)(tmp);
    return rv;
}

// assignment operations wrap for static and non-static properties
/// Wrappers for modifying assignment operator translation with proper setter and getter calls and return value.
/// @param name Human-readable operator name.
/// @param op Actual operator.
#define PROP_ASSIGN_WRAP(name, op) \
    template <typename PropT, typename PropValT> \
    inline PropT setter_##name##_wrap(PropT (*pGetter)(), void (*pSetter)(PropT), PropValT value) \
    { \
        PropT tmp = pGetter(); \
        tmp op (PropT)value; \
        pSetter(tmp); \
        return tmp; \
    } \
    template <typename PropT, typename HostT, typename PropValT> \
    inline PropT setter_##name##_wrap(HostT* const host, PropT (HostT::*pGetter)(), void (HostT::*pSetter)(PropT), PropValT value) \
    { \
        PropT tmp = (host->*pGetter)(); \
        tmp op (PropT)value; \
        (host->*pSetter)(tmp); \
        return tmp; \
    } \
    template <typename PropT, typename HostT, typename PropValT> \
    inline PropT setter_##name##_wrap(HostT* const host, PropT (HostT::*pGetter)() const, void (HostT::*pSetter)(PropT), PropValT value) \
    { \
        PropT tmp = (host->*pGetter)(); \
        tmp op (PropT)value; \
        (host->*pSetter)(tmp); \
        return tmp; \
    }

PROP_ASSIGN_WRAP(add, += )
PROP_ASSIGN_WRAP(sub, -= )
PROP_ASSIGN_WRAP(mul, *= )
PROP_ASSIGN_WRAP(div, /= )
PROP_ASSIGN_WRAP(mod, %= )
PROP_ASSIGN_WRAP(shl, <<= )
PROP_ASSIGN_WRAP(shr, >>= )
PROP_ASSIGN_WRAP(and, &= )
PROP_ASSIGN_WRAP(or, |= )
PROP_ASSIGN_WRAP(exor, ^= )

/// Declares wrapper for modifying assignemnt operators called for properties.
/// @param T Property declaring type.
/// @param obj Object to call property getters and setters for.
/// @param prop Property name.
/// @param op Human-readable operator name.
/// @param val Translated RHS expression.
#define SETTER_OP_WRAP(T, obj, prop, op, val) \
    setter_##op##_wrap(obj, &T::get_##prop, &T::set_##prop, val)

} // namespace System

#endif // _aspose_system_setter_wrap_h_
