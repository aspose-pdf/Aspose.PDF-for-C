#pragma once

#include <net/icredentials_by_host.h>
#include <net/icredentials.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS NetworkCredential : public System::Net::ICredentials, public System::Net::ICredentialsByHost, public virtual System::Object
{
    typedef NetworkCredential ThisType;
    typedef System::Net::ICredentials BaseType;
    typedef System::Net::ICredentialsByHost BaseType1;
    typedef System::Object BaseType2;

    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API String get_UserName();
    ASPOSECPP_SHARED_API void set_UserName(String value);
    ASPOSECPP_SHARED_API String get_Password();
    ASPOSECPP_SHARED_API void set_Password(String value);
    ASPOSECPP_SHARED_API String get_Domain();
    ASPOSECPP_SHARED_API void set_Domain(String value);

    ASPOSECPP_SHARED_API NetworkCredential();
    ASPOSECPP_SHARED_API NetworkCredential(String userName, String password);
    ASPOSECPP_SHARED_API NetworkCredential(String userName, String password, String domain);

    ASPOSECPP_SHARED_API System::SharedPtr<NetworkCredential> GetCredential(System::SharedPtr<Uri> uri, String authenticationType);
    ASPOSECPP_SHARED_API System::SharedPtr<NetworkCredential> GetCredential(String host, int32_t port, String authenticationType);

private:
    System::String m_domain;
    System::String m_userName;
    System::String m_password;
};
} // namespace Net
} // namespace System
