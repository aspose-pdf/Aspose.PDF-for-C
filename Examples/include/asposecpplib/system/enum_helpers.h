#ifndef _aspose_system_enum_helpers_h_
#define _aspose_system_enum_helpers_h_

#include <type_traits>

#define DECLARE_ENUM_OPERATORS(E) \
    template<class T>\
    inline constexpr E operator|(E a, T b)\
    {\
        return static_cast<E>( static_cast<std::underlying_type<E>::type>(a) | static_cast<std::underlying_type<E>::type>(b) );\
    }\
\
    template<class T>\
    inline constexpr E operator&(E a, T b)\
    {\
        return static_cast<E>( static_cast<std::underlying_type<E>::type>(a) & static_cast<std::underlying_type<E>::type>(b) );\
    }\
\
    template<class T>\
    inline constexpr E operator^(E a, T b)\
    {\
        return static_cast<E>(static_cast<std::underlying_type<E>::type>(a) ^ static_cast<std::underlying_type<E>::type>(b));\
    }\
\
    template<class T>\
    inline constexpr bool operator!=(E a, T b)\
    {\
        return static_cast<std::underlying_type<E>::type>(a) != static_cast<std::underlying_type<E>::type>(b);\
    }\
\
    template<class T>\
    inline constexpr bool operator==(E a, T b)\
    {\
        return static_cast<std::underlying_type<E>::type>(a) == static_cast<std::underlying_type<E>::type>(b);\
    }\
\
    inline constexpr E operator~(E a)\
    {\
        return static_cast<E>(~static_cast<std::underlying_type<E>::type>(a));\
    }\
\
    template<class T>\
    inline E& operator|=(E& a, T b)\
    {\
        a = static_cast<E>(static_cast<std::underlying_type<E>::type>(a) | static_cast<std::underlying_type<E>::type>(b));\
        return a;\
    }\
\
    template<class T>\
    inline E& operator&=(E& a, T b)\
    {\
    a = static_cast<E>(static_cast<std::underlying_type<E>::type>(a) & static_cast<std::underlying_type<E>::type>(b));\
    return a;\
    }\
\
    template<class T>\
    inline E& operator^=(E& a, T b)\
    {\
        a = static_cast<E>(static_cast<std::underlying_type<E>::type>(a) ^ static_cast<std::underlying_type<E>::type>(b));\
        return a;\
    }\
\
    template<class T>\
    inline constexpr E operator-(E a, T b)\
    {\
        return static_cast<E>(static_cast<std::underlying_type<E>::type>(a) - static_cast<std::underlying_type<E>::type>(b));\
    }


#endif // _aspose_system_enum_helpers_h_
