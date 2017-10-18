#ifndef _aspose_system_setter_wrap_h_
#define _aspose_system_setter_wrap_h_

#include "system/shared_ptr.h"

namespace System {

// setter wrap for static and non-static properties

template <typename T, typename T2>
inline T setter_wrap(void(*pSetter)(T2), T value)
{
    pSetter(value);
    return value;
}

template <typename T, typename T2, typename Host>
inline T setter_wrap(Host* const host, void (Host::*pSetter)(T2), T value)
{
    (host->*pSetter)(value);
    return value;
}

template <typename T>
inline T setter_increment_wrap(T(*pGetter)(), void(*pSetter)(T))
{
    T tmp = pGetter();
    pSetter(++tmp);
    return tmp;
}

template <typename T, typename Host>
inline T setter_increment_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(++tmp);
    return tmp;
}

template <typename T, typename Host>
inline T setter_increment_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(++tmp);
    return tmp;
}

// post-increment wrap for static and non-static properties

template <typename T>
inline T setter_post_increment_wrap(T(*pGetter)(), void (*pSetter)( T))
{
    T tmp = pGetter(), rv = tmp;
    tmp++;
    pSetter(tmp);
    return rv;
}

template <typename T, typename Host>
inline T setter_post_increment_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp++;
    (host->*pSetter)(tmp);
    return rv;
}

template <typename T, typename Host>
inline T setter_post_increment_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp++;
    (host->*pSetter)(tmp);
    return rv;
}

// decrement wrap for static and non-static properties

template <typename T>
inline T setter_decrement_wrap(T(*pGetter)(), void (*pSetter)( T))
{
    T tmp = pGetter();
    pSetter(--tmp);
    return tmp;
}

template <typename T, typename Host>
inline T setter_decrement_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(--tmp);
    return tmp;
}

template <typename T, typename Host>
inline T setter_decrement_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)();
    (host->*pSetter)(--tmp);
    return tmp;
}

// post decrement wrap for static and non-static properties

template <typename T>
inline T setter_post_decrement_wrap(T(*pGetter)(), void (*pSetter)( T))
{
    T tmp = pGetter(), rv = tmp;
    tmp--;
    pSetter(tmp);
    return rv;
}

template <typename T, typename Host>
inline T setter_post_decrement_wrap(Host* const host, T(Host::*pGetter)(), void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp--;
    (host->*pSetter)(tmp);
    return rv;
}

template <typename T, typename Host>
inline T setter_post_decrement_wrap(Host* const host, T(Host::*pGetter)() const, void (Host::*pSetter)(T))
{
    T tmp = (host->*pGetter)(), rv = tmp;
    tmp--;
    (host->*pSetter)(tmp);
    return rv;
}

// assignment operations wrap for static and non-static properties

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

#define SETTER_OP_WRAP(T, obj, prop, op, val) \
    setter_##op##_wrap(obj, &T::get_##prop, &T::set_##prop, val)

} // namespace System

#endif // _aspose_system_setter_wrap_h_