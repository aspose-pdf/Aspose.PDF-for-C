#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include <net/cookie_collection.h>
#include <net/cookie.h>

namespace System {
namespace Net {

// CookieContainer
// Manage cookies for a user (implicit). Based on RFC 2965.
class ASPOSECPP_SHARED_CLASS CookieContainer : public System::Object
{
    typedef CookieContainer ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API const int32_t DefaultCookieLimit;
    static ASPOSECPP_SHARED_API const int32_t DefaultPerDomainCookieLimit;
    static ASPOSECPP_SHARED_API const int32_t DefaultCookieLengthLimit;

    ASPOSECPP_SHARED_API int32_t get_Capacity();
    ASPOSECPP_SHARED_API void set_Capacity(int32_t value);
    ASPOSECPP_SHARED_API int32_t get_Count();
    ASPOSECPP_SHARED_API int32_t get_MaxCookieSize();
    ASPOSECPP_SHARED_API void set_MaxCookieSize(int32_t value);
    ASPOSECPP_SHARED_API int32_t get_PerDomainCapacity();
    ASPOSECPP_SHARED_API void set_PerDomainCapacity(int32_t value);

    ASPOSECPP_SHARED_API CookieContainer();
    ASPOSECPP_SHARED_API CookieContainer(int32_t capacity);
    ASPOSECPP_SHARED_API CookieContainer(int32_t capacity, int32_t perDomainCapacity, int32_t maxCookieSize);

    ASPOSECPP_SHARED_API void Add(System::SharedPtr<Cookie> cookie);
    ASPOSECPP_SHARED_API void Add(System::SharedPtr<CookieCollection> cookies);
    ASPOSECPP_SHARED_API void Add(System::SharedPtr<Uri> uri, System::SharedPtr<Cookie> cookie);
    ASPOSECPP_SHARED_API void Add(System::SharedPtr<Uri> uri, System::SharedPtr<CookieCollection> cookies);
    ASPOSECPP_SHARED_API System::SharedPtr<CookieCollection> GetCookies(System::SharedPtr<Uri> uri);
    ASPOSECPP_SHARED_API String GetCookieHeader(System::SharedPtr<Uri> uri);
    ASPOSECPP_SHARED_API void SetCookies(System::SharedPtr<Uri> uri, String cookieHeader);
};
} // namespace Net
} // namespace System
