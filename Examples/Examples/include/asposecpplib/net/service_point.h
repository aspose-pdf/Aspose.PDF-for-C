#pragma once

#include <system/version.h>
#include <system/uri.h>
#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <system/date_time.h>
#include <security/cryptography/x509_certificates/x509_certificate.h>

#include <net/ip_end_point.h>

namespace System {
namespace Net {

class ServicePoint;
using BindIPEndPoint = System::MulticastDelegate<System::SharedPtr<IPEndPoint>(System::SharedPtr<ServicePoint>, System::SharedPtr<IPEndPoint>, int32_t)>;

class ASPOSECPP_SHARED_CLASS ServicePoint : public System::Object
{
    typedef ServicePoint ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API BindIPEndPoint get_BindIPEndPointDelegate();
    ASPOSECPP_SHARED_API void set_BindIPEndPointDelegate(BindIPEndPoint value);
    ASPOSECPP_SHARED_API int32_t get_ConnectionLeaseTimeout();
    ASPOSECPP_SHARED_API void set_ConnectionLeaseTimeout(int32_t value);
    ASPOSECPP_SHARED_API System::SharedPtr<Uri> get_Address();
    ASPOSECPP_SHARED_API int32_t get_MaxIdleTime();
    ASPOSECPP_SHARED_API void set_MaxIdleTime(int32_t value);
    ASPOSECPP_SHARED_API bool get_UseNagleAlgorithm();
    ASPOSECPP_SHARED_API void set_UseNagleAlgorithm(bool value);
    ASPOSECPP_SHARED_API int32_t get_ReceiveBufferSize();
    ASPOSECPP_SHARED_API void set_ReceiveBufferSize(int32_t value);
    ASPOSECPP_SHARED_API bool get_Expect100Continue();
    ASPOSECPP_SHARED_API void set_Expect100Continue(bool value);
    ASPOSECPP_SHARED_API DateTime get_IdleSince();
    virtual ASPOSECPP_SHARED_API Version get_ProtocolVersion();
    ASPOSECPP_SHARED_API String get_ConnectionName();
    ASPOSECPP_SHARED_API int32_t get_ConnectionLimit();
    ASPOSECPP_SHARED_API void set_ConnectionLimit(int32_t value);
    ASPOSECPP_SHARED_API int32_t get_CurrentConnections();
    ASPOSECPP_SHARED_API System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate> get_Certificate();
    ASPOSECPP_SHARED_API System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate> get_ClientCertificate();
    ASPOSECPP_SHARED_API bool get_SupportsPipelining();
    ASPOSECPP_SHARED_API bool CloseConnectionGroup(String connectionGroupName);
    ASPOSECPP_SHARED_API void SetTcpKeepAlive(bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval);
};
} // namespace Net
} // namespace System
