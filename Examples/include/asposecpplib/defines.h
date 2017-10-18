#ifndef _defines_h_
#define _defines_h_

#include <type_traits>
#include <utility>


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
    #define ABSTRACT
#elif defined __MSVC__
    #define ABSTRACT __declspec(novtable)
#endif

#if defined(__cplusplus) && __cplusplus >= 201103L
    #define FINAL final
    #define OVERRIDE override
#else
    #define FINAL
    #define OVERRIDE
#endif

#define ASPOSE_ARG_LIMIT 17

#define ASPOSE_TEMPLATE_ARG_TYPE(z, n, t) t ## n = void
#define ASPOSE_FUNC_ARG_TYPE(z, n, t) const t ## n&
#define ASPOSE_FUNC_ARG_VALUE(z, n, t) arg ## t ## n
#define ASPOSE_FUNC_ARG_TYPE_VALUE(z, n, t) ASPOSE_FUNC_ARG_TYPE(z,n,t) ASPOSE_FUNC_ARG_VALUE(z,n,t)

#if defined ASPOSE_NO_CONST_METHODS
#define ASPOSE_CONST
#else
#define ASPOSE_CONST const
#endif

#if defined(_MSC_VER)
    #ifdef ASPOSECPP_SHARED_EXPORTS
        #define ASPOSECPP_SHARED_API __declspec(dllexport)
    #else
        #define ASPOSECPP_SHARED_API __declspec(dllimport)
    #endif
    #define ASPOSECPP_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSECPP_SHARED_API)
#else
    #define ASPOSECPP_SHARED_API
    #define ASPOSECPP_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
#endif


namespace Detail {
    typedef enum {} empty_enum;
}


//Wrappers for types from 3rd party libraries
#ifdef ASPOSECPP_SHARED_EXPORTS

    #ifdef _DEBUG
        #define ASPOSECPP_3RD_PARTY_TYPE_POINTER(type) type *const m_value = reinterpret_cast<type*>(&m_data);
    #else
        #define ASPOSECPP_3RD_PARTY_TYPE_POINTER(type) ;
    #endif

    //These will raise compiler error if the declaration mismatch exists
    #define ASPOSECPP_3RD_PARTY_CLASS(type_name) class type_name;
    #define ASPOSECPP_3RD_PARTY_STRUCT(type_name) struct type_name;

    #define ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, underlying) \
        static_assert(std::is_enum<type_name>::value, #type_name " is not a enum but is declared as one!"); \
        static_assert(sizeof(type_name) == sizeof(underlying), "Declaring " #type_name " enum with wrong size of underlying type " #underlying  "!"); \
        static_assert(std::is_signed<std::underlying_type<type_name>::type>::value == std::is_signed<underlying>::value, "Declaring " #type_name " enum with wrong signedness of underlying type " #underlying  "!"); \
        static_assert(std::is_same<std::underlying_type<type_name>::type, underlying>::value, "Declaring " #type_name " enum with wrong underlying type " #underlying  "!");
    #define ASPOSECPP_3RD_PARTY_ENUM(type_name) ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, std::underlying_type<::Detail::empty_enum>::type);

    //Check typedef when compiling lib, export it if compiling dependency
    #define ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) \
        static_assert(std::is_same<name, type>::value, "Wrong type " #type " specified for typedef " #name "!");

    //Typedef which also holds 'Ptr' version for pointer
    #define ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name##Ptr, type*)

    //Constant declaration from 3rd party library
    #define ASPOSECPP_3RD_PARTY_CONSTANT(constant_name, constant_type, constant_value) \
        static_assert(std::is_same<decltype(constant_name), constant_type>::value || \
            std::is_enum<decltype(constant_name)>::value && \
            std::is_integral<constant_type>::value && \
            sizeof(constant_type) == sizeof(decltype(constant_name)), \
            "Wrong type " #constant_type " specified for constant " #constant_name "!"); \
        static_assert(constant_name == constant_value, "Wrong value " #constant_value " specified for constant " #constant_name "!");

    #define ASPOSECPP_3RD_PARTY_ENUM_HOLDER(enum_name, underlying, alias) \
        class alias { \
            static_assert(std::is_enum<enum_name>::value, #enum_name " is not a enum!"); \
            static_assert(std::is_integral<underlying>::value && sizeof(underlying) == sizeof(enum_name) && alignof(underlying) == alignof(enum_name), \
                "Wrong underlying type " #underlying " is specified for enum " #enum_name "!"); \
            std::aligned_storage<sizeof(underlying), alignof(underlying)>::type m_data; \
            ASPOSECPP_3RD_PARTY_TYPE_POINTER(enum_name) \
        public: \
            alias(enum_name value) { *reinterpret_cast<enum_name*>(&m_data) = value; } \
            inline alias(const alias &other) { *reinterpret_cast<enum_name*>(&m_data) = *reinterpret_cast<const enum_name*>(&other.m_data); } \
            inline alias& operator = (const alias &other) { *reinterpret_cast<enum_name*>(&m_data) = *reinterpret_cast<const enum_name*>(&other.m_data); return *this; } \
            operator enum_name& () { return *reinterpret_cast<enum_name*>(&m_data); } \
            operator enum_name () const { return *reinterpret_cast<const enum_name*>(&m_data); } \
            enum_name* operator & () { return reinterpret_cast<enum_name*>(&m_data); } \
            const enum_name* operator & () const { return reinterpret_cast<const enum_name*>(&m_data); } \
        };

    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
        public: \
            typedef type_name value_type; \
        private: \
            static_assert(sizeof(value_type) == type_size, "Wrong size of storage generated when wrapping type " #type_name "!"); \
            static_assert(alignof(value_type) == alignof(alignment), "Wrong alignment '" #alignment "' specified for type " #type_name "!"); \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
            ASPOSECPP_3RD_PARTY_TYPE_POINTER(type_name) \
        public: \
            template <typename ...T> inline alias(const T& ...args) { new (&m_data) value_type(args...); } \
            inline alias(const alias &other) { new (&m_data) value_type(*reinterpret_cast<const value_type*>(&other.m_data)); } \
            inline alias& operator = (const alias &other) { *reinterpret_cast<value_type*>(&m_data) = *reinterpret_cast<const value_type*>(&other.m_data); return *this; } \
            inline ~alias() { reinterpret_cast<value_type*>(&m_data)->~destructor_name(); } \
            inline operator value_type& () { return *reinterpret_cast<value_type*>(&m_data); } \
            inline operator const value_type& () const { return *reinterpret_cast<const value_type*>(&m_data); } \
            inline value_type& operator * () { return *reinterpret_cast<value_type*>(&m_data); } \
            inline const value_type& operator * () const { return *reinterpret_cast<const value_type*>(&m_data); } \
            inline value_type* operator -> () { return reinterpret_cast<value_type*>(&m_data); } \
            inline const value_type* operator -> () const { return reinterpret_cast<const value_type*>(&m_data); } \
            inline value_type* operator & () { return reinterpret_cast<value_type*>(&m_data); } \
            inline const value_type* operator & () const { return reinterpret_cast<const value_type*>(&m_data); } \
        };

    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(type_name, destructor_name, type_size, alignment, alias) \
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias)

#else

    #ifdef _DEBUG
        #define ASPOSECPP_3RD_PARTY_TYPE_POINTER(type) type *const m_value;
    #else
        #define ASPOSECPP_3RD_PARTY_TYPE_POINTER(type) ;
    #endif

    //Incomplete type definitions
    #define ASPOSECPP_3RD_PARTY_CLASS(type_name) class type_name;
    #define ASPOSECPP_3RD_PARTY_STRUCT(type_name) struct type_name;

    #define ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, underlying) enum type_name : underlying;
    #define ASPOSECPP_3RD_PARTY_ENUM(type_name) ASPOSECPP_3RD_PARTY_ENUM_WITH_UNDERLYING(type_name, std::underlying_type<::Detail::empty_enum>::type);

    //Typedefs
    #define ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) typedef type name;

    //Typedefs with pointer versions
    #define ASPOSECPP_3RD_PARTY_TYPEDEF_WITH_PTR(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name, type) \
        ASPOSECPP_3RD_PARTY_TYPEDEF(name##Ptr, type*)

    //Constants (namespace to avoid compilation errors if the depenency includes original definition as well)
    #define ASPOSECPP_3RD_PARTY_CONSTANT(name, constant_type, value) namespace { constexpr constant_type name = value; }

    #define ASPOSECPP_3RD_PARTY_ENUM_HOLDER(enum_name, underlying, alias) \
        class alias { \
            std::aligned_storage<sizeof(underlying), alignof(underlying)>::type m_data; \
            ASPOSECPP_3RD_PARTY_TYPE_POINTER(enum_name) \
        public: \
            alias(enum_name value); \
            alias(const alias&); \
            alias& operator = (const alias&); \
            operator enum_name& (); \
            operator enum_name (); \
            enum_name* operator & (); \
            const enum_name* operator & () const; \
        };

    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
            ASPOSECPP_3RD_PARTY_TYPE_POINTER(type_name) \
        public: \
            template <typename ...T> alias(const T& ...args); \
            alias(const alias&); \
            alias& operator = (const alias&); \
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

    #define ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(type_name, destructor_name, type_size, alignment, alias) \
        class alias { \
            std::aligned_storage<type_size, alignof(alignment)>::type m_data; \
            ASPOSECPP_3RD_PARTY_TYPE_POINTER(void) \
        public: \
            template <typename ...T> alias(const T& ...args); \
            ~alias(); \
        };

#endif


#endif // _defines_h_
