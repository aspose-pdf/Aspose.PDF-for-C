#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include <net/secure_protocols/ssl_stream.h>
#include <net/iweb_proxy.h>
#include <net/secure_protocols/ssl_enum_types.h>

namespace System {
namespace Net {

enum class SecurityProtocolType
{
    SystemDefault = 0,
    Ssl3 = 48,
    Tls = 192,
    Tls11 = 768,
    Tls12 = 3072
};

DECLARE_ENUM_OPERATORS(System::Net::SecurityProtocolType);
DECLARE_USING_GLOBAL_OPERATORS

class ICertificatePolicy;

class ASPOSECPP_SHARED_CLASS ServicePointManager : public System::Object
{
    typedef ServicePointManager ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API const int32_t DefaultNonPersistentConnectionLimit;
    static ASPOSECPP_SHARED_API const int32_t DefaultPersistentConnectionLimit;

    static ASPOSECPP_SHARED_API SecurityProtocolType get_SecurityProtocol();
    static ASPOSECPP_SHARED_API void set_SecurityProtocol(SecurityProtocolType value);
    static ASPOSECPP_SHARED_API int32_t get_MaxServicePoints();
    static ASPOSECPP_SHARED_API void set_MaxServicePoints(int32_t value);
    static ASPOSECPP_SHARED_API int32_t get_DefaultConnectionLimit();
    static ASPOSECPP_SHARED_API void set_DefaultConnectionLimit(int32_t value);
    static ASPOSECPP_SHARED_API int32_t get_MaxServicePointIdleTime();
    static ASPOSECPP_SHARED_API void set_MaxServicePointIdleTime(int32_t value);
    static ASPOSECPP_SHARED_API bool get_UseNagleAlgorithm();
    static ASPOSECPP_SHARED_API void set_UseNagleAlgorithm(bool value);
    static ASPOSECPP_SHARED_API bool get_Expect100Continue();
    static ASPOSECPP_SHARED_API void set_Expect100Continue(bool value);
    static ASPOSECPP_SHARED_API bool get_EnableDnsRoundRobin();
    static ASPOSECPP_SHARED_API void set_EnableDnsRoundRobin(bool value);
    static ASPOSECPP_SHARED_API int32_t get_DnsRefreshTimeout();
    static ASPOSECPP_SHARED_API void set_DnsRefreshTimeout(int32_t value);
    static ASPOSECPP_SHARED_API System::SharedPtr<ICertificatePolicy> get_CertificatePolicy();
    static ASPOSECPP_SHARED_API void set_CertificatePolicy(System::SharedPtr<ICertificatePolicy> value);
    static ASPOSECPP_SHARED_API Security::RemoteCertificateValidationCallback get_ServerCertificateValidationCallback();
    static ASPOSECPP_SHARED_API void set_ServerCertificateValidationCallback(Security::RemoteCertificateValidationCallback value);
    static ASPOSECPP_SHARED_API bool get_ReusePort();
    static ASPOSECPP_SHARED_API void set_ReusePort(bool value);
    static ASPOSECPP_SHARED_API bool get_CheckCertificateRevocationList();
    static ASPOSECPP_SHARED_API void set_CheckCertificateRevocationList(bool value);
    static ASPOSECPP_SHARED_API System::Net::Security::EncryptionPolicy get_EncryptionPolicy();

    static ASPOSECPP_SHARED_API void SetTcpKeepAlive(bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval);

private:
    static ASPOSECPP_SHARED_API Security::RemoteCertificateValidationCallback s_ServerCertValidationCallback;
};
} // namespace Net
} // namespace System

DECLARE_USING_ENUM_OPERATORS(System::Net);
