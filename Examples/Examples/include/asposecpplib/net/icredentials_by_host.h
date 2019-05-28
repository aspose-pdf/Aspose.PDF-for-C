#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

namespace System {
namespace Net {

class NetworkCredential;

class ASPOSECPP_SHARED_CLASS ICredentialsByHost : public virtual System::Object
{
    typedef ICredentialsByHost ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    virtual ASPOSECPP_SHARED_API System::SharedPtr<NetworkCredential> GetCredential(String host, int32_t port, String authenticationType) = 0;
};
} // namespace Net
} // namespace System
