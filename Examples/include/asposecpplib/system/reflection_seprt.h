#ifndef _ReflectionSeprt_h_
#define _ReflectionSeprt_h_

//------------------------------------------------
// definition RTTI methonds outside a class dclaration

#define __ThisTypeInfo_Compiletime_Decl() \
    struct ThisTypeInfo : System::TypeInfoPtr { ThisTypeInfo(); };

// thisType mast be full name with all namespaces
#define __ThisTypeInfo_Compiletime_Impl(thisType, hash) \
    thisType::ThisTypeInfo::ThisTypeInfo() { \
        ptr = std::make_unique<System::TypeInfo>(_T(#thisType), hash);

#define __ThisTypeInfo_Runtime_Decl() \
    struct ThisTypeInfo : System::TypeInfoPtr { \
        std::wstring wname; \
        ThisTypeInfo(); \
    };

#define __ThisTypeInfo_Runtime_Impl(thisType) \
    thisType::ThisTypeInfo::ThisTypeInfo() { \
        std::string name = typeid(thisType).name(); \
        wname = std::wstring(name.size(), 0); \
        for (size_t i = 0; i < name.size(); ++i) \
            wname[i] = (wchar_t)name[i]; \
        ptr = std::make_unique<System::TypeInfo>(wname.c_str());


#define __RTTI_INFO_METHODS_DECL() \
    public: \
        static const System::TypeInfo& Type(); \
        virtual const System::TypeInfo& GetType() const; \
        virtual bool Is(const System::TypeInfo &target) const;\
    private:


#define __RTTI_INFO_METHODS_DECL_EX(keyword) \
    public: \
        static keyword const System::TypeInfo& Type(); \
        virtual keyword const System::TypeInfo& GetType() const; \
        virtual keyword bool Is(const System::TypeInfo &target) const;\
    private:


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

#define RTTI_INFO_IMPL_END() }

#define RTTI_INFO_DECL() \
    __RTTI_INFO_METHODS_DECL() \
    __ThisTypeInfo_Compiletime_Decl()

#define RTTI_INFO_DECL_EX(keyword) \
    __RTTI_INFO_METHODS_DECL_EX(keyword) \
    __ThisTypeInfo_Compiletime_Decl()

#define RTTI_INFO_DECL_RT() \
    __RTTI_INFO_METHODS_DECL() \
    __ThisTypeInfo_Runtime_Decl()


// thisType mast be full name with all namespaces
// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_IMPL(thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, 0) \
    RTTI_INFO_IMPL_END()

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_IMPL_RT(thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Runtime_Impl(thisType) \
    RTTI_INFO_IMPL_END()

// thisType mast be full name with all namespaces
// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_IMPL_HASH(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, hash) \
    RTTI_INFO_IMPL_END()


// for class with attributes

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_IMPL_BEGIN(thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, 0)

// baseTypes: (TypeA)(TypeB)(TypeC)
#define RTTI_INFO_IMPL_HASH_BEGIN(hash, thisType, baseTypes) \
    __RTTI_INFO_METHODS_IMPL(thisType, baseTypes) \
    __ThisTypeInfo_Compiletime_Impl(thisType, hash)

#endif // _ReflectionSeprt_h_