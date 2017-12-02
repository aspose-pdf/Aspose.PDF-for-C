#ifndef _Reflection_h_
#define _Reflection_h_

#include <memory>
#include <typeinfo>
#include <mutex>

#include "system/reflection_seprt.h"

namespace System
{

template <typename T> struct static_holder
{
    static T& GetValue()
    {
        static std::unique_ptr<T> value;
        static std::once_flag once;
        std::call_once(once, []{ value.reset(new T()); });
        return *value;
    }
};

class TypeInfo;

template <typename ...BaseTypes> class BaseTypesInfo;

template <typename FirstType, typename ...BaseTypes>
class BaseTypesInfo<FirstType, BaseTypes...>
{
public:
    template <typename T>
    inline static bool CallIsForAll(T *object, const TypeInfo &typeInfo)
    {
        return object->FirstType::Is(typeInfo) || BaseTypesInfo<BaseTypes...>::CallIsForAll(object, typeInfo);
    }
};

template <>
class BaseTypesInfo<>
{
public:
    template <typename T>
    inline static bool CallIsForAll(T*, const TypeInfo&)
    {
        return false;
    }
};

}


//-------------------------------------------------------
// definition of RTTI methonds inside a class declaration

#define __ThisTypeInfo_Compiletime(thisType, hash) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            ThisTypeInfo() { \
                ptr = std::make_unique<System::TypeInfo>(_T(#thisType), hash);

#define __ThisTypeInfo_Runtime(thisType) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            std::wstring wname; \
            ThisTypeInfo() { \
                std::string name = typeid(thisType).name(); \
                wname = std::wstring(name.size(), 0); \
                for (size_t i = 0; i < name.size(); ++i) \
                    wname[i] = (wchar_t)name[i]; \
                ptr = std::make_unique<System::TypeInfo>(wname.c_str());

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


#define RTTI_INFO_END() } };


// for class without attributes

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, 0) \
    RTTI_INFO_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_HASH(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, hash) \
    RTTI_INFO_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_TEMPLATE_CLASS(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Runtime(thisType) \
    RTTI_INFO_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_CUSTOM(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes)



// for class with attributes

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_BEGIN(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime(thisType, 0)

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_HASH_BEGIN(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS(hash, thisType, baseTypes)

#define RTTI_ATTRIBUTE(type, params) \
    ptr->AddAttribute( System::static_pointer_cast<System::Object>( System::MakeObject<type> (params) ) );

// for value types
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
