/// @file system/enum_helpers.h
/// Contains a number of macro definitions that are used in the definition of System::Enum class.
#ifndef _aspose_system_enum_helpers_h_
#define _aspose_system_enum_helpers_h_

#include <type_traits>

/// Inserts the definitions of arithmetic operators for enum type @p E.
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
\
    inline E operator++(E& a, int)\
    {\
        E tmp = a;\
        a = static_cast<E>(static_cast<std::underlying_type<E>::type>(a) + 1);\
        return tmp;\
    }\
\
    inline E operator--(E& a, int)\
    {\
        E tmp = a;\
        a = static_cast<E>(static_cast<std::underlying_type<E>::type>(a) - 1);\
        return tmp;\
    }\
\
    template<class T>\
    inline constexpr E operator<<(E a, T b)\
    {\
        return static_cast<E>( static_cast<std::underlying_type<E>::type>(a) << static_cast<std::underlying_type<E>::type>(b) );\
    }\
\
    template<class T>\
    inline constexpr E operator>>(E a, T b)\
    {\
        return static_cast<E>( static_cast<std::underlying_type<E>::type>(a) >> static_cast<std::underlying_type<E>::type>(b) );\
    }\

/// Inserts friend declarations of arithmetic operators for enum type @p E.
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
    template<class T> friend inline E& operator-=(E& a, T b);\
    friend inline E operator++(E& a, int); \
    friend inline E operator--(E& a, int); \
    template<class T> friend inline constexpr E operator<<(E a, T b); \
    template<class T> friend inline constexpr E operator>>(E a, T b);

/// Inserts using declaratios for arithmetic operators declared in namespace @p NS.
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
    using NS::operator-=;\
    using NS::operator++;\
    using NS::operator--;\
    using NS::operator<<;\
    using NS::operator>>;

/// Inserts using declaratios for arithmetic operators declared in the global namespace.
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
    using ::operator-=;\
    using ::operator++;\
    using ::operator--;\
    using ::operator>>;\
    using ::operator<<;

namespace DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A
{

    struct DummyEnumOperatorsStruct
    {
    };

}

/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator|(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator&(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator^(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr bool operator!=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr bool operator==(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator~(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator|=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator&=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator^=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator-(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator-=(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator++(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, int);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& operator--(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct& a, int);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator<<(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);
/// Introduces dummy operator in global namespace; it allows 'using \::operator' directives generated by porter compile even if no meaningful implementation exists.
constexpr DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct operator>>(DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct a, DummyNamespace_83FABA9C_01E7_49DD_9184_3653C866E56A::DummyEnumOperatorsStruct b);

#endif // _aspose_system_enum_helpers_h_
