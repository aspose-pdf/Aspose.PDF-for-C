#pragma once

#include <system/shared_ptr.h>
#include <cstdint>

#include <net/cookie.h>

namespace System {
namespace Net {

// CookieCollection
// A list of cookies maintained in Sorted order. Only one cookie with matching Name/Domain/Path
class ASPOSECPP_SHARED_CLASS CookieCollection : public System::Collections::ICollection
{
    typedef CookieCollection ThisType;
    typedef System::Collections::ICollection BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API int32_t get_Count();

    ASPOSECPP_SHARED_API CookieCollection();

    ASPOSECPP_SHARED_API System::SharedPtr<Cookie> idx_get(int32_t index);
    ASPOSECPP_SHARED_API System::SharedPtr<Cookie> idx_get(String name);

    ASPOSECPP_SHARED_API void Add(System::SharedPtr<Cookie> cookie);
    ASPOSECPP_SHARED_API void Add(System::SharedPtr<CookieCollection> cookies);
};
} // namespace Net
} // namespace System
