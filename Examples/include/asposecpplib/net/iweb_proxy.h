#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include <net/icredentials.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS IWebProxy : public System::Object
{
    typedef IWebProxy ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    virtual ASPOSECPP_SHARED_API System::SharedPtr<ICredentials> get_Credentials() = 0;
    virtual ASPOSECPP_SHARED_API void set_Credentials(System::SharedPtr<ICredentials> value) = 0;

    virtual ASPOSECPP_SHARED_API System::SharedPtr<Uri> GetProxy(System::SharedPtr<Uri> destination) = 0;
    virtual ASPOSECPP_SHARED_API bool IsBypassed(System::SharedPtr<Uri> host) = 0;
};
} // namespace Net
} // namespace System
