/// @file system/reflection_seprt.h
/// Contains the declaration of some types, functions and macro definitions that provide run-time type information.
#ifndef _ReflectionSeprt_h_
#define _ReflectionSeprt_h_

//------------------------------------------------
// definition RTTI methonds outside a class dclaration
/// Inserts a declaration of ThisTypeInfo sruct that keeps a pointer to TypeInfo object containing the information about the specified type.
#define __ThisTypeInfo_Compiletime_Decl() \
    struct ThisTypeInfo : System::TypeInfoPtr { ThisTypeInfo(); };

// thisType mast be full name with all namespaces
/// Inserts an implementation of ThisTypeInfo sruct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the specified type.
/// The implementation uses only compile-time type information.
#define __ThisTypeInfo_Compiletime_Impl(thisType, hash) \
    thisType::ThisTypeInfo::ThisTypeInfo() { \
        ptr = std::make_unique<System::TypeInfo>(_T(#thisType), hash);

/// Inserts a declaration of ThisTypeInfo sruct that keeps a pointer to TypeInfo object containing the information about the specified type.
#define __ThisTypeInfo_Runtime_Decl() \
    struct ThisTypeInfo : System::TypeInfoPtr { \
        std::wstring wname; \
        ThisTypeInfo(); \
    };

/// Inserts an implementation of ThisTypeInfo sruct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the specified type.
/// The implementation uses the run-time type information.
#define __ThisTypeInfo_Runtime_Impl(thisType) \
    thisType::ThisTypeInfo::ThisTypeInfo() { \
        std::string name = typeid(thisType).name(); \
        wname = std::u16string(name.size(), 0); \
        for (size_t i = 0; i < name.size(); ++i) \
            wname[i] = (char_t)name[i]; \
        ptr = std::make_unique<System::TypeInfo>(wname.c_str());

/// Inserts declarations of RTTI methods into a class declaration.
#define __RTTI_INFO_METHODS_DECL() \
    public: \
        static const System::TypeInfo& Type(); \
        virtual const System::TypeInfo& GetType() const override; \
        virtual bool Is(const System::TypeInfo &target) const override;\
    private:

/// Inserts declarations of RTTI methods into a class declaration and adds specified @p keyword as as specifier to each of them.
#define __RTTI_INFO_METHODS_DECL_EX(keyword) \
    public: \
        static keyword const System::TypeInfo& Type(); \
        virtual keyword const System::TypeInfo& GetType() const override; \
        virtual keyword bool Is(const System::TypeInfo &target) const override;\
    private:

/// Inserts implementation or RTTI methods to the specified class.
#define __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    const System::TypeInfo& thisType::Type() { \
        return *System::static_holder<ThisTypeInfo>::GetValue(); \
    } \
    const System::TypeInfo& thisType::GetType() const { \
        return thisType::Type(); \
    } \
    bool thisType::Is(const System::TypeInfo &target) const { \
        const System::TypeInfo& thisis = thisType::Type(); \
            return (thisis == target) ? true : baseTypes::CallIsForAll(this, target); \
    }

/// Closes the curly brace.
#define RTTI_INFO_IMPL_END() }

/// Inserts declarations that implement the RTTI for the current type using only compile-time information:
///   - methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO_DECL() \
    __RTTI_INFO_METHODS_DECL() \
    __ThisTypeInfo_Compiletime_Decl()

/// Inserts declarations that implement the RTTI for the current type using only compile-time information:
///   - methods Type(), GetType() and Is() and adds the specified @p keyword to each of them as a specifier
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO_DECL_EX(keyword) \
    __RTTI_INFO_METHODS_DECL_EX(keyword) \
    __ThisTypeInfo_Compiletime_Decl()

/// Inserts declarations that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - methods Type(), GetType() and Is() and adds the specified @p keyword to each of them as a specifier
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO_DECL_RT() \
    __RTTI_INFO_METHODS_DECL() \
    __ThisTypeInfo_Runtime_Decl()


// thisType mast be full name with all namespaces
// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts the implementation of RTTI methods that uses only compile-time type information.
#define RTTI_INFO_IMPL(thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, 0) \
    RTTI_INFO_IMPL_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts the implementation of RTTI methods that uses the run-time type information (C++ RTTI).
#define RTTI_INFO_IMPL_RT(thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Runtime_Impl(thisType) \
    RTTI_INFO_IMPL_END()

// thisType mast be full name with all namespaces
// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts the implementation of RTTI methods that uses only compile-time type information and 
/// associates the specified hash value with the current type.
#define RTTI_INFO_IMPL_HASH(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, hash) \
    RTTI_INFO_IMPL_END()


// for class with attributes

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
///   - TypeInfo holder type ThisTypeInfo with hash calculated in compiletime
#define RTTI_INFO_IMPL_BEGIN(thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, 0)

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
///   - TypeInfo holder type ThisTypeInfo with hash provided by @p hash argument
#define RTTI_INFO_IMPL_HASH_BEGIN(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, hash)

#endif // _ReflectionSeprt_h_
