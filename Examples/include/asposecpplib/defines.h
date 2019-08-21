/// @file defines.h
#ifndef _defines_h_
#define _defines_h_

#include <type_traits>
#include <utility>
#include <limits>
#include <cassert>


#if defined(_WIN32) && !defined(WIN32)
#define WIN32
#endif

#if defined(__GNUC__)
    #define __GCC__
#elif defined(_MSC_VER)
    #define __MSVC__
#else
    #error unsupported compiler.
#endif


#if defined __GCC__
    /// Abstract keyword definition.
    #define ABSTRACT
#elif defined __MSVC__
    /// Abstract keyword definition.
    #define ABSTRACT __declspec(novtable)
#endif

/// Final keyword definition.
#define FINAL final
/// Override keyword definiton.
#define OVERRIDE override


#if defined ASPOSE_NO_CONST_METHODS
    /// Makes methods labelled as ASPOSE_CONST non-const.
    #define ASPOSE_CONST
#else
    /// Makes methods labelled as ASPOSE_CONST const.
    #define ASPOSE_CONST const
#endif

#if defined _WIN32
    #if defined(__MSVC__)
        #ifdef ASPOSECPP_SHARED_EXPORTS
            /// Export API.
            #define ASPOSECPP_SHARED_API __declspec(dllexport)
            #define ASPOSECPP_SHARED_CLASS
        #else
            /// Import API.
            #define ASPOSECPP_SHARED_API __declspec(dllimport)
            #define ASPOSECPP_SHARED_CLASS
        #endif
        /// RTTI macros with correct import/export regime.
        #define ASPOSECPP_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSECPP_SHARED_API)
    #else
        #ifdef ASPOSECPP_SHARED_EXPORTS
            /// Export API.
            #define ASPOSECPP_SHARED_API __attribute__ ((dllexport))
            #define ASPOSECPP_SHARED_CLASS __attribute__ ((dllexport))
        #else
            /// Import API.
            #define ASPOSECPP_SHARED_API __attribute__ ((dllimport))
            #define ASPOSECPP_SHARED_CLASS __attribute__ ((dllimport))
        #endif
            /// RTTI macros with correct import/export regime.
        #define ASPOSECPP_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
    #endif
#else
    #ifdef ASPOSECPP_SHARED_EXPORTS
        /// Export API.
        #define ASPOSECPP_SHARED_API __attribute__ ((visibility ("default")))
        #define ASPOSECPP_SHARED_CLASS __attribute__ ((visibility ("default")))
    #else
        /// Import API.
        #define ASPOSECPP_SHARED_API
        #define ASPOSECPP_SHARED_CLASS
    #endif
        /// RTTI macros with correct import/export regime.
    #define ASPOSECPP_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
#endif


#if defined(_MSC_VER) && (_MSC_VER < 1910)
    #error "Only Microsoft Visual Studio 2017 (and higher) is supported"
#endif


namespace Detail {
    /// Dummy type to deduce default enum underlying type which is different in VS and GCC.
    typedef enum {} empty_enum;
    typedef enum class empty_enum_class {} empty_enum_class;

    template <int PtrSize, int A, int B, int C, int D>
    struct __InternalTypeStub {};

    template <int A, int B, int C, int D>
    struct __InternalTypeStub<4, A, B, C, D>
    {
        typedef typename std::aligned_storage<A, B>::type type;
    };

    template <int A, int B, int C, int D>
    struct __InternalTypeStub<8, A, B, C, D>
    {
        typedef typename std::aligned_storage<C, D>::type type;
    };
}


//Wrappers for types from 3rd party libraries
#ifdef ASPOSECPP_SHARED_EXPORTS
    /// Forward declares class.
    /// @param type_name Class name.
    #define ASPOSECPP_3RD_PARTY_CLASS(type_name) class type_name;
    /// Forward declares struct.
    /// @param type_name Struct name.
    #define ASPOSECPP_3RD_PARTY_STRUCT(type_name) struct type_name;

    /// Generate empty braces.
    /// @param type_name Enum type name.
    #define ASPOSECPP_3RD_PARTY_ENUM_CLASS_WITHOUT_UNDERLYING(type_name) {}
    /// Checks that specific enum has given underlying type and can be safely replaced with it.
    /// Produces compilation errors if checks fail.
    /// @param type_name Enum type name.
    /// @param underlying Underlying type.
    #define ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, underlying) \
        static_assert(std::is_enum<type_name>::value, #type_name " is not a enum but is declared as one!"); \
        static_assert(sizeof(type_name) == sizeof(underlying), "Declaring " #type_name " enum with wrong size of underlying type " #underlying  "!"); \
        static_assert(std::is_signed<std::underlying_type<type_name>::type>::value == std::is_signed<underlying>::value, "Declaring " #type_name " enum with wrong signedness of underlying type " #underlying  "!"); \
        static_assert(std::is_same<std::underlying_type<type_name>::type, underlying>::value, "Declaring " #type_name " enum with wrong underlying type " #underlying  "!");
    #define ASPOSECPP_3RD_PARTY_ENUM_CLASS_WITH_UNDERLYING(type_name, underlying) ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, underlying) 
    /// Checks that specific enum has default underlying type and can be safely replaced with it.
    /// Produces compilation errors if checks fail.
    /// @param type_name Enum type name.
    #define ASPOSECPP_3RD_PARTY_ENUM(type_name) ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, std::underlying_type<::Detail::empty_enum>::type);
    #define ASPOSECPP_3RD_PARTY_ENUM_CLASS(type_name) ASPOSECPP_3RD_PARTY_ENUM_CLASS_WITH_UNDERLYING(type_name, std::underlying_type<::Detail::empty_enum_class>::type);

    /// Checks that specific typedef exists and is bound to a specific type.
    /// Produces compilation errors if checks fail.
    /// @param name Typedef name.
    /// @param type Typedeffed type name.
    #define ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) \
        static_assert(std::is_same<name, type>::value, "Wrong type " #type " specified for typedef " #name "!");

    /// Checks that specific typedef exists and is bound to a specific type.
    /// Also checks that a different typedef with 'Ptr' suffix exists and is declared as pointer to original type.
    /// Produces compilation errors if checks fail.
    /// @param name Typedef name.
    /// @param type Typedeffed type name.
    #define ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name##Ptr, type*)

    /// Checks that constant of specific type exists and is set to specific value.
    /// Produces compilation errors if checks fail.
    /// @param constant_name Constant name.
    /// @param constant_type Constant type.
    /// @param constant_value Constant value.
    #define ASPOSECPP_3RD_PARTY_CONSTANT(constant_name, constant_type, constant_value) \
        static_assert(std::is_same<decltype(constant_name), constant_type>::value || \
            std::is_enum<decltype(constant_name)>::value && \
            std::is_integral<constant_type>::value && \
            sizeof(constant_type) == sizeof(decltype(constant_name)), \
            "Wrong type " #constant_type " specified for constant " #constant_name "!"); \
        static_assert(constant_name == constant_value, "Wrong value " #constant_value " specified for constant " #constant_name "!");

    /// Declares a class that encapsulates a variable of specific enum type with specific underlying type.
    /// @param enum_name Enum to encapsulate.
    /// @param underlying Enum underlying type.
    /// @param alias Declared wrapper class name.
    #define ASPOSECPP_3RD_PARTY_ENUM_HOLDER(enum_name, underlying, alias) \
        class alias { \
            static_assert(std::is_enum<enum_name>::value, #enum_name " is not a enum!"); \
            static_assert(std::is_integral<underlying>::value && sizeof(underlying) == sizeof(enum_name) && alignof(underlying) == alignof(enum_name), \
                "Wrong underlying type " #underlying " is specified for enum " #enum_name "!"); \
            std::aligned_storage<sizeof(underlying), alignof(underlying)>::type m_data; \
        public: \
            alias(enum_name value) { *reinterpret_cast<enum_name*>(&m_data) = value; } \
            inline alias(const alias &other) { *reinterpret_cast<enum_name*>(&m_data) = *reinterpret_cast<const enum_name*>(&other.m_data); } \
            inline alias& operator = (const alias &other) { *reinterpret_cast<enum_name*>(&m_data) = *reinterpret_cast<const enum_name*>(&other.m_data); return *this; } \
            operator enum_name& () { return *reinterpret_cast<enum_name*>(&m_data); } \
            operator enum_name () const { return *reinterpret_cast<const enum_name*>(&m_data); } \
            enum_name* operator & () { return reinterpret_cast<enum_name*>(&m_data); } \
            const enum_name* operator & () const { return reinterpret_cast<const enum_name*>(&m_data); } \
        };

    /// Declares a class that encapsulates a variable of specific type with specific size and alignment and calls constructors and destructors properly.
    /// Provides neccessary access operators.
    /// @param type_name Type to encapsulate.
    /// @param destructor_name Name of destructor of @p type_name; can be different than destructor_name e. g. in case of templates.
    /// @param type_size Size of @p type_name.
    /// @param alignment Alignment of @p type_name.
    /// @param alias Declared wrapper class name.
    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
        public: \
            typedef type_name value_type; \
        private: \
            static_assert(sizeof(value_type) == type_size, "Wrong size of storage generated when wrapping type " #type_name "!"); \
            static_assert(alignof(value_type) == alignof(alignment), "Wrong alignment '" #alignment "' specified for type " #type_name "!"); \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
        public: \
            template <typename ...Args> alias(Args&& ...args) { new (&m_data) value_type(std::forward<Args>(args)...); } \
            alias(const alias &other) { new (&m_data) value_type(*reinterpret_cast<const value_type*>(&other.m_data)); } \
            alias(alias&& other) noexcept { new(&m_data) value_type(std::move(*reinterpret_cast<value_type*>(&other.m_data))); }\
            alias& operator = (const alias &other) { if (this == std::addressof(other)) { return *this; } ; *reinterpret_cast<value_type*>(&m_data) = *reinterpret_cast<const value_type*>(&other.m_data); return *this; } \
            alias& operator = (alias&& other) noexcept { if (this == std::addressof(other)) { return *this; } ; *reinterpret_cast<value_type*>(&m_data) = std::move(*reinterpret_cast<value_type*>(&other.m_data)); return *this; } \
            ~alias() { reinterpret_cast<value_type*>(&m_data)->~destructor_name(); } \
            operator value_type& () { return *reinterpret_cast<value_type*>(&m_data); } \
            operator const value_type& () const { return *reinterpret_cast<const value_type*>(&m_data); } \
            value_type& operator * () { return *reinterpret_cast<value_type*>(&m_data); } \
            const value_type& operator * () const { return *reinterpret_cast<const value_type*>(&m_data); } \
            value_type* operator -> () { return reinterpret_cast<value_type*>(&m_data); } \
            const value_type* operator -> () const { return reinterpret_cast<const value_type*>(&m_data); } \
            value_type* operator & () { return reinterpret_cast<value_type*>(&m_data); } \
            const value_type* operator & () const { return reinterpret_cast<const value_type*>(&m_data); } \
        };

    /// Declares a class that encapsulates a variable of specific type with specific size and alignment and calls constructors and destructors properly.
    /// Provides neccessary access operators - copy constructor and copy assignment operator are removed.
    /// @param type_name Type to encapsulate.
    /// @param destructor_name Name of destructor of @p type_name; can be different than destructor_name e. g. in case of templates.
    /// @param type_size Size of @p type_name.
    /// @param alignment Alignment of @p type_name.
    /// @param alias Declared wrapper class name.
    #define ASPOSECPP_3RD_PARTY_UNCOPYBALE_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
        public: \
            typedef type_name value_type; \
        private: \
            static_assert(sizeof(value_type) == type_size, "Wrong size of storage generated when wrapping type " #type_name "!"); \
            static_assert(alignof(value_type) == alignof(alignment), "Wrong alignment '" #alignment "' specified for type " #type_name "!"); \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
        public: \
            template <typename ...Args> alias(Args&& ...args) { new (&m_data) value_type(std::forward<Args>(args)...); } \
            alias() { new (&m_data) value_type(); } \
            alias(alias&& other) noexcept { new(&m_data) value_type(std::move(*reinterpret_cast<value_type*>(&other.m_data))); }\
            alias& operator = (alias&& other) noexcept { if (this == std::addressof(other)) { return *this; } ; *reinterpret_cast<value_type*>(&m_data) = std::move(*reinterpret_cast<value_type*>(&other.m_data)); return *this; } \
            ~alias() { reinterpret_cast<value_type*>(&m_data)->~destructor_name(); } \
            operator value_type& () { return *reinterpret_cast<value_type*>(&m_data); } \
            operator const value_type& () const { return *reinterpret_cast<const value_type*>(&m_data); } \
            value_type& operator * () { return *reinterpret_cast<value_type*>(&m_data); } \
            const value_type& operator * () const { return *reinterpret_cast<const value_type*>(&m_data); } \
            value_type* operator -> () { return reinterpret_cast<value_type*>(&m_data); } \
            const value_type* operator -> () const { return reinterpret_cast<const value_type*>(&m_data); } \
            value_type* operator & () { return reinterpret_cast<value_type*>(&m_data); } \
            const value_type* operator & () const { return reinterpret_cast<const value_type*>(&m_data); } \
        };

    /// Same as ASPOSECPP_3RD_PARTY_TYPE_HOLDER.
    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(type_name, destructor_name, type_size, alignment, alias) \
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias)
#else
    /// Forward declares class.
    /// @param type_name Class name.
    #define ASPOSECPP_3RD_PARTY_CLASS(type_name) class type_name;
    /// Forward declares struct.
    /// @param type_name Struct name.
    #define ASPOSECPP_3RD_PARTY_STRUCT(type_name) struct type_name;

    /// Forward declares enum class without explicit underlying type.
    /// @param type_name Enum name.
    #define ASPOSECPP_3RD_PARTY_ENUM_CLASS_WITHOUT_UNDERLYING(type_name) enum class type_name;
    /// Forward declares enum with specific underlying type.
    /// @param type_name Enum name.
    /// @param underlying Enum underlying type.
    #define ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, underlying) enum type_name : underlying;
    #define ASPOSECPP_3RD_PARTY_ENUM_CLASS_WITH_UNDERLYING(type_name, underlying) enum class type_name : underlying;
    /// Forward declares enum with default underlying type.
    /// @param type_name Enum name.
    #define ASPOSECPP_3RD_PARTY_ENUM(type_name) ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, std::underlying_type<::Detail::empty_enum>::type);
    #define ASPOSECPP_3RD_PARTY_ENUM_CLASS(type_name) ASPOSECPP_3RD_PARTY_ENUM_CLASS_WITH_UNDERLYING(type_name, std::underlying_type<::Detail::empty_enum_class>::type);

    /// Introduces typedef.
    /// @param name Typedef name.
    /// @param type Type name.
    #define ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) typedef type name;
    /// Introduces two typedefs: named type alias and another alias with 'Ptr' suffix which binds to pointer to original type.
    /// @param name Typedef name.
    /// @param type Type to create alias for.
    #define ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name##Ptr, type*)

    /// Defines constant of specific type and value.
    /// @param name Constant name.
    /// @param constant_type Constant type.
    /// @param value Constant value.
    #define ASPOSECPP_3RD_PARTY_CONSTANT(name, constant_type, value) namespace { constexpr constant_type name = value; }

    /// Declares a class that encapsulates a variable of specific enum type with specific underlying type.
    /// Does not define any member functions, only declares them, so encapsulated type can be stored safely in any code but can be accessed from library only.
    /// @param enum_name Enum to encapsulate.
    /// @param underlying Enum underlying type.
    /// @param alias Declared wrapper class name.
    #define ASPOSECPP_3RD_PARTY_ENUM_HOLDER(enum_name, underlying, alias) \
        class alias { \
            std::aligned_storage<sizeof(underlying), alignof(underlying)>::type m_data; \
        public: \
            alias(enum_name value); \
            alias(const alias&); \
            alias& operator = (const alias&); \
            operator enum_name& (); \
            operator enum_name (); \
            enum_name* operator & (); \
            const enum_name* operator & () const; \
        };

    /// Declares a class that encapsulates a variable of specific type with specific size and alignment and calls constructors and destructors properly.
    /// Provides neccessary access operators.
    /// Does not define any member functions, only declares them, so encapsulated type can be stored safely in any code but can be accessed from library only.
    /// @param type_name Type to encapsulate.
    /// @param destructor_name Name of destructor of @p type_name; can be different than destructor_name e. g. in case of templates.
    /// @param type_size Size of @p type_name.
    /// @param alignment Alignment of @p type_name.
    /// @param alias Declared wrapper class name.
    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
        public: \
            template <typename ...Args> alias(Args&& ...args); \
            alias(const alias&); \
            alias(alias&& other) noexcept; \
            alias& operator = (const alias&); \
            alias& operator = (alias&& other) noexcept; \
            ~alias(); \
            operator type_name& (); \
            operator const type_name& () const; \
            type_name& operator * (); \
            const type_name& operator * () const; \
            type_name* operator -> (); \
            const type_name* operator -> () const; \
            type_name* operator & (); \
            const type_name* operator & () const; \
        };

    /// Declares a class that encapsulates a variable of specific type with specific size and alignment and calls constructors and destructors properly.
    /// Provides neccessary access operators - copy constructor and copy assignment operator are removed.
    /// @param type_name Type to encapsulate.
    /// @param destructor_name Name of destructor of @p type_name; can be different than destructor_name e. g. in case of templates.
    /// @param type_size Size of @p type_name.
    /// @param alignment Alignment of @p type_name.
    /// @param alias Declared wrapper class name.
    #define ASPOSECPP_3RD_PARTY_UNCOPYBALE_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
        public: \
            template <typename ...Args> alias(Args&& ...args); \
            alias(alias&& other) noexcept; \
            alias& operator = (alias&& other) noexcept; \
            ~alias(); \
            operator type_name& (); \
            operator const type_name& () const; \
            type_name& operator * (); \
            const type_name& operator * () const; \
            type_name* operator -> (); \
            const type_name* operator -> () const; \
            type_name* operator & (); \
            const type_name* operator & () const; \
        };

    /// Declares a class that encapsulates a variable of specific type with specific size and alignment and calls constructors and destructors properly.
    /// Does not mention original type in any form.
    /// Does not define any member functions, only declares them, so encapsulated type can be stored safely in any code but can be accessed from library only.
    /// @param type_name Type to encapsulate.
    /// @param destructor_name Name of destructor of @p type_name; can be different than destructor_name e. g. in case of templates.
    /// @param type_size Size of @p type_name.
    /// @param alignment Alignment of @p type_name.
    /// @param alias Declared wrapper class name.
    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
        public: \
            template <typename ...T> alias(const T& ...args); \
            ~alias(); \
        };

#endif

template <int A, int B, int C, int D>
struct __TypeStub 
{
    typedef typename Detail::__InternalTypeStub<sizeof(int*), A, B, C, D>::type type;
};


namespace Detail
{
    template <typename From, typename To,
        bool canUnderflow = std::numeric_limits<From>::is_signed && ((sizeof(To) < sizeof(From)) || !std::numeric_limits<To>::is_signed),
        bool canOverflow = (sizeof(To) < sizeof(From)) || ((sizeof(To) == sizeof(From)) && !std::numeric_limits<From>::is_signed && std::numeric_limits<To>::is_signed)
    >
    struct AssertedFitter
    {
        static constexpr typename std::remove_cv<typename std::remove_reference<To>::type>::type convert(From value)
        {
            return static_cast<typename std::remove_cv<typename std::remove_reference<To>::type>::type>(value);
        }
    };
    template <typename From, typename To>
    struct AssertedFitter<From, To, true, true>
    {
        static constexpr typename std::remove_cv<typename std::remove_reference<To>::type>::type convert(From value)
        {
            assert(value >= static_cast<typename std::remove_cv<typename std::remove_reference<From>::type>::type>((std::numeric_limits<typename std::remove_cv<typename std::remove_reference<From>::type>::type>::min)()));
            assert(value <= static_cast<typename std::remove_cv<typename std::remove_reference<From>::type>::type>((std::numeric_limits<typename std::remove_cv<typename std::remove_reference<From>::type>::type>::max)()));
            return static_cast<typename std::remove_cv<typename std::remove_reference<To>::type>::type>(value);
        }
    };
    template <typename From, typename To>
    struct AssertedFitter<From, To, true, false>
    {
        static constexpr typename std::remove_cv<typename std::remove_reference<To>::type>::type convert(From value)
        {
            assert(value >= static_cast<typename std::remove_cv<typename std::remove_reference<From>::type>::type>((std::numeric_limits<typename std::remove_cv<typename std::remove_reference<From>::type>::type>::min)()));
            return static_cast<typename std::remove_cv<typename std::remove_reference<To>::type>::type>(value);
        }
    };
    template <typename From, typename To>
    struct AssertedFitter<From, To, false, true>
    {
        static constexpr typename std::remove_cv<typename std::remove_reference<To>::type>::type convert(From value)
        {
            assert(value <= static_cast<typename std::remove_cv<typename std::remove_reference<From>::type>::type>((std::numeric_limits<typename std::remove_cv<typename std::remove_reference<From>::type>::type>::max)()));
            return static_cast<typename std::remove_cv<typename std::remove_reference<To>::type>::type>(value);
        }
    };
}

#if defined(OPTIMIZE_ALL)
    #define ASPOSECPP_NO_CHECKED_CASTS
#endif

#if (defined(DEBUG) || defined(_DEBUG)) && !defined(ASPOSECPP_NO_CHECKED_CASTS)
    #define ASPOSECPP_CHECKED_CAST(to, value) (::Detail::AssertedFitter<decltype(value), to>::convert(value))
#else
    #define ASPOSECPP_CHECKED_CAST(to, value) static_cast<to>(value)
#endif

#endif // _defines_h_
