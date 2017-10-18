#ifndef __detail_h__
#define __detail_h__

#include <type_traits>
#include <utility>

namespace System
{
    namespace detail
    {

        template<typename Y, typename T>
        struct sp_convertible
        {
            typedef char(&yes)[1];
            typedef char(&no)[2];

            static yes f(T*);
            static no  f(...);

            enum _vt { value = sizeof((f)(static_cast<Y*>(0))) == sizeof(yes) };
        };

        //for arrays, if need
        template<typename Y, typename T>
        struct sp_convertible<Y, T[]>
        {
            enum _vt { value = false };
        };

        template<typename Y, typename T>
        struct sp_convertible<Y[], T[]>
        {
            enum _vt { value = sp_convertible<Y[1], T[1]>::value };
        };

        template<typename Y, std::size_t N, typename T>
        struct sp_convertible<Y[N], T[]>
        {
            enum _vt { value = sp_convertible<Y[1], T[1]>::value };
        };
        //...

        struct sp_empty {};

        template<bool> struct sp_enable_if_convertible_impl;

        template<> struct sp_enable_if_convertible_impl<true> { typedef sp_empty type; };

        template<> struct sp_enable_if_convertible_impl<false> {};

        template<typename Y, typename T>
        struct sp_enable_if_convertible : sp_enable_if_convertible_impl<sp_convertible<Y, T>::value> {};


        template <class From, class To, class = decltype(static_cast<To*>((From*)nullptr))>
        std::true_type IsStaticCastable_Internal(int);
        template <class From, class To>
        std::false_type IsStaticCastable_Internal(...);

        template <class From, class To>
        using is_static_castable = decltype(IsStaticCastable_Internal<From, To>(0));


        template <typename From, typename To, bool convertible = is_static_castable<From, To>::value>
        struct cast_statically_or_dynamically
        {
            static To* cast(From *pointer) { return dynamic_cast<To*>(pointer); }
        };
        template <typename From, typename To>
        struct cast_statically_or_dynamically<From, To, true>
        {
            static To* cast(From *pointer) { return static_cast<To*>(pointer); }
        };


        template <template <class ...T> class TypeToBe>
        struct Is_A_Internal
        {
            static std::false_type Invoke(...);
            template <typename ...P>
            static std::true_type Invoke(const TypeToBe<P...>*);

            template <typename Tested>
            using type = decltype(Invoke((Tested*)nullptr));
        };

        template <typename Tested, template <class ...T> class TypeToBe>
        struct is_a : public Is_A_Internal<TypeToBe>::template type<Tested> {};
        template <typename Tested, template <class ...T> class TypeToBe>
        struct is_a<Tested&, TypeToBe> : public Is_A_Internal<TypeToBe>::template type<Tested> {};
        template <typename Tested, template <class ...T> class TypeToBe>
        struct is_a<Tested&&, TypeToBe> : public Is_A_Internal<TypeToBe>::template type<Tested> {};


        /// has_operator_less - the type trait for check whether exists operator<() in the specified type
        /// Can be used in std::enable_if

        template<typename T, typename Sfinae = void>
        struct has_operator_less : std::false_type {};

        template<typename T>
        struct has_operator_less<
            T
            , decltype((void)(std::declval<T&>() < std::declval<T&>()))
        > : std::true_type{};

        template<typename T, typename Sfinae = void>
        struct has_operator_equal : std::false_type {};

        template<typename T>
        struct has_operator_equal<
            T
            , decltype((void)(std::declval<T&>() == std::declval<T&>()))
        > : std::true_type{};

        template<typename T, typename Sfinae = void>
        struct has_method_equals : std::false_type {};

        template<typename T>
        struct has_method_equals<
            T
            , decltype((void)(std::declval<T&>().Equals(std::declval<T&>())))
        > : std::true_type{};


    } //namespace detail
} //namespace System

#endif
