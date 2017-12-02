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
    }\
\
    template<class T>\
    inline E& operator-=(E& a, T b)\
    {\
        a = static_cast<E>(static_cast<std::underlying_type<E>::type>(a) - static_cast<std::underlying_type<E>::type>(b));\
        return a;\
    }\

#define DECLARE_FRIEND_ENUM_OPERATORS(E) \
    template<class T> friend inline constexpr E operator|(E a, T b);\
    template<class T> friend inline constexpr E operator&(E a, T b);\
    template<class T> friend inline constexpr E operator^(E a, T b);\
    template<class T> friend inline constexpr bool operator!=(E a, T b);\
    template<class T> friend inline constexpr bool operator==(E a, T b);\
    friend inline constexpr E operator~(E a);\
    template<class T> friend inline E& operator|=(E& a, T b);\
    template<class T> friend inline E& operator&=(E& a, T b);\
    template<class T> friend inline E& operator^=(E& a, T b);\
    template<class T> friend inline constexpr E operator-(E a, T b);\
    template<class T> friend inline E& operator-=(E& a, T b);

#define DECLARE_USING_ENUM_OPERATORS(NS) \
    using NS::operator|;\
    using NS::operator&;\
    using NS::operator^;\
    using NS::operator!=;\
    using NS::operator==;\
    using NS::operator~;\
    using NS::operator|=;\
    using NS::operator&=;\
    using NS::operator^=;\
    using NS::operator-;\
    using NS::operator-=;

#define DECLARE_USING_GLOBAL_OPERATORS \
    using ::operator|;\
    using ::operator&;\
    using ::operator^;\
    using ::operator!=;\
    using ::operator==;\
    using ::operator~;\
    using ::operator|=;\
    using ::operator&=;\
    using ::operator^=;\
    using ::operator-;\
    using ::operator-=;

namespace DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A
{

    struct DummyEnumOperatorsStruct
    {
    };

}

constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator|(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator&(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator^(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
constexpr bool operator!=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
constexpr bool operator==(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator~(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a);
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator|=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator&=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator^=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator-(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator-=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);

#endif // _aspose_system_enum_helpers_h_
