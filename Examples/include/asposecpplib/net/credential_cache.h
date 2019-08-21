#pragma once

#include <system/uri.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <cstdint>

#include <net/network_credential.h>
#include <net/icredentials_by_host.h>
#include <net/icredentials.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS CredentialCache : public System::Net::ICredentials, public System::Net::ICredentialsByHost
{
    typedef CredentialCache ThisType;
    typedef System::Net::ICredentials BaseType;
    typedef System::Net::ICredentialsByHost BaseType1;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API System::SharedPtr<ICredentials> get_DefaultCredentials();
    static ASPOSECPP_SHARED_API System::SharedPtr<NetworkCredential> get_DefaultNetworkCredentials();

    ASPOSECPP_SHARED_API CredentialCache();

    ASPOSECPP_SHARED_API void Add(System::SharedPtr<Uri> uriPrefix, String authenticationType, System::SharedPtr<NetworkCredential> credential);
    ASPOSECPP_SHARED_API void Add(String host, int32_t port, String authenticationType, System::SharedPtr<NetworkCredential> credential);
    ASPOSECPP_SHARED_API void Remove(System::SharedPtr<Uri> uriPrefix, String authenticationType);
    ASPOSECPP_SHARED_API void Remove(String host, int32_t port, String authenticationType);
    ASPOSECPP_SHARED_API System::SharedPtr<NetworkCredential> GetCredential(System::SharedPtr<Uri> uriPrefix, String authenticationType);
    ASPOSECPP_SHARED_API System::SharedPtr<NetworkCredential> GetCredential(String host, int32_t port, String authenticationType);
};
} // namespace Net
} // namespace System
