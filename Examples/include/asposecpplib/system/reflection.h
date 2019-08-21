/// @file system/reflection.h
/// Contains the declaration of some types, functions and macro definitions that provide run-time type information.
#ifndef _Reflection_h_
#define _Reflection_h_

#include <memory>
#include <typeinfo>
#include <mutex>

#include "system/reflection_seprt.h"

namespace System
{

/// Singleton wrapper class.
/// @tparam T Singleton type.
template <typename T> struct static_holder
{
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4503)
#endif
    /// Singleton accessor function.
    /// @return Singleton reference.
    static T& GetValue()
    {
        static std::unique_ptr<T> value;
        static std::once_flag once;
        std::call_once(once, []{ value.reset(new T()); });
        return *value;
    }
#ifdef _MSC_VER
#pragma warning(pop)
#endif
};

class TypeInfo;

template <typename ...BaseTypes> class BaseTypesInfo;

/// Provides a template static method that determines if the specified object is an instance of the specified type or of a type that is descendant of the specifid type.
/// @tparam FirstType The first type in the list of parent types of the object to check
/// @tparam BaseTypes The list without the first type of parent types of the object to check
template <typename FirstType, typename ...BaseTypes>
class BaseTypesInfo<FirstType, BaseTypes...>
{
public:
    /// Determines if the specified object is an instance of the specified type or of a type that is descendant of the specifid type.
    /// @param object A pointer to the object to check
    /// @param typeInfo A TypeInfo object representing a type to match the type of @p object or its parent types against.
    /// @returns True if @p object is an instance of a type represented by @p typeInfo or is descendant of that type, otherwise - false
    /// @tparam T The type of the object to check
    template <typename T>
    inline static bool CallIsForAll(T *object, const TypeInfo &typeInfo)
    {
        return object->FirstType::Is(typeInfo) || BaseTypesInfo<BaseTypes...>::CallIsForAll(object, typeInfo);
    }
};

/// Specialization of an instance of a type that has no parent types.
template <>
class BaseTypesInfo<>
{
public:
    /// Always returns false.
    template <typename T>
    inline static bool CallIsForAll(T*, const TypeInfo&)
    {
        return false;
    }
};

}


//-------------------------------------------------------
// definition of RTTI methonds inside a class declaration
/// Inserts an implementation of ThisTypeInfo sruct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the current type.
/// The implementation uses only compile-time type information.
#define __ThisTypeInfo_Compiletime(thisType, hash) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            ThisTypeInfo() { \
                ptr = std::make_unique<System::TypeInfo>(_T(#thisType), hash);

/// Inserts an implementation of ThisTypeInfo sruct's constructor that sets its pointer to a new instance of TypeInfo object containing the information about the current type.
/// The implementation uses the run-time type information.
#define __ThisTypeInfo_Runtime(thisType) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            std::u16string wname; \
            ThisTypeInfo() { \
                std::string name = typeid(thisType).name(); \
                wname = std::u16string(name.size(), 0); \
                for (size_t i = 0; i < name.size(); ++i) \
                    wname[i] = (char_t)name[i]; \
                ptr = std::make_unique<System::TypeInfo>(wname.c_str());

/// Inserts implementation or RTTI methods to the current class.
#define __RTTI_INFO_METHODS(thisType, baseTypes) \
    public: \
        static const System::TypeInfo& Type() { \
            return *System::static_holder<ThisTypeInfo>::GetValue(); \
        } \
        const System::TypeInfo& GetType() const override { \
            return thisType::Type(); \
        } \
        bool Is(const System::TypeInfo &target) const override { \
            const System::TypeInfo& thisis = thisType::Type(); \
            return (thisis == target) ? true : baseTypes::CallIsForAll(this, target); \
        } \
    private:

/// Closes the curly brace.
#define RTTI_INFO_END() } };


// for class without attributes

// baseTypes: (TypeA)(TypeB)(TypeC)

/// Inserts definitions that implement the RTTI for the current type using only compile-time information:
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, 0) \
    RTTI_INFO_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using only compile-time information:
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
/// Also associates the specified hash value with the current type.
#define RTTI_INFO_HASH(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, hash) \
    RTTI_INFO_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
///   - a struct that keeps a pointer to the TypeInfo object that contains the information about the current type
#define RTTI_INFO_TEMPLATE_CLASS(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Runtime(thisType) \
    RTTI_INFO_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
#define RTTI_INFO_CUSTOM(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes)



// for class with attributes

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
///   - TypeInfo holder type ThisTypeInfo with hash calculated in compiletime
#define RTTI_INFO_BEGIN(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, 0)

// baseTypes: (TypeA)(TypeB)(TypeC)
/// Inserts definitions that implement the RTTI for the current type using the run-time information (C++ RTTI):
///   - implementation of methods Type(), GetType() and Is() 
#define RTTI_INFO_HASH_BEGIN(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS(hash, thisType, baseTypes)

/// Adds custom attribute of @p type type to @p ptr TypeInfo object initializing it with @p params parameters.
#define RTTI_ATTRIBUTE(type, params) \
    ptr->AddAttribute( System::static_pointer_cast<System::Object>( System::MakeObject<type> (params) ) );

// for value types
/// Inserts definitions that implement the RTTI for the current value type using the run-time information (C++ RTTI):
///   - implementation of methods Type() and GetType()
///   - TypeInfo holder type ThisTypeInfo with hash calculated in compiletime
#define RTTI_INFO_VALUE_TYPE(thisType) \
    public: \
        static const System::TypeInfo& Type() { \
            return *System::static_holder<ThisTypeInfo>::GetValue(); \
        } \
        const System::TypeInfo& GetType() const { \
            return thisType::Type(); \
        } \
    private:\
    __ThisTypeInfo_Compiletime(thisType, 0) \
    RTTI_INFO_END()
#endif // _Reflection_h_
