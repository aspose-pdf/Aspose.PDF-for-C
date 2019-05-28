#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <system/io/seekorigin.h>
#include <system/iasyncresult.h>
#include <system/enum_helpers.h>
#include <system/async_callback.h>
#include <system/array.h>
#include <security/cryptography/x509_certificates/x509_chain.h>
#include <security/cryptography/x509_certificates/x509_certificate_collection.h>
#include <security/cryptography/x509_certificates/x509_certificate.h>
#include <cstdint>

#include <net/secure_protocols/ssl_enum_types.h>
#include <net/secure_protocols/authentificated_stream.h>
#include <net/secure_protocols/ssl_policy_errors.h>

namespace System {
namespace Details {
ASPOSECPP_3RD_PARTY_CLASS(ssl_stream_impl);
} // namespace Details
} // namespace System

namespace System {
namespace Net {
namespace Security {

enum class EncryptionPolicy
{
    RequireEncryption = 0,
    AllowNoEncryption,
    NoEncryption
};

// A user delegate used to verify remote SSL certificate
using RemoteCertificateValidationCallback = System::MulticastDelegate<bool(System::SharedPtr<Object>, System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate>, System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Chain>, SslPolicyErrors)>;

// A user delegate used to select local SSL certificate
using LocalCertificateSelectionCallback = System::MulticastDelegate<System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate>(System::SharedPtr<Object>, String, System::SharedPtr<System::Security::Cryptography::X509Certificates::X509CertificateCollection>, System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate>, System::ArrayPtr<String>)>;

// Internal versions of the above delegates
class ASPOSECPP_SHARED_CLASS SslStream : public System::Net::Security::AuthenticatedStream
{
    friend class SslStreamAsyncResult;

    typedef SslStream ThisType;
    typedef System::Net::Security::AuthenticatedStream BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    virtual ASPOSECPP_SHARED_API bool get_IsAuthenticated() const;
    virtual ASPOSECPP_SHARED_API bool get_IsMutuallyAuthenticated() const;
    virtual ASPOSECPP_SHARED_API bool get_IsEncrypted() const;
    virtual ASPOSECPP_SHARED_API bool get_IsSigned() const;
    virtual ASPOSECPP_SHARED_API bool get_IsServer() const;
    virtual ASPOSECPP_SHARED_API System::Security::Authentication::SslProtocols get_SslProtocol();
    virtual ASPOSECPP_SHARED_API bool get_CheckCertRevocationStatus();
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate> get_LocalCertificate();
    virtual ASPOSECPP_SHARED_API System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate> get_RemoteCertificate();
    virtual ASPOSECPP_SHARED_API System::Security::Authentication::CipherAlgorithmType get_CipherAlgorithm();
    virtual ASPOSECPP_SHARED_API int32_t get_CipherStrength();
    virtual ASPOSECPP_SHARED_API System::Security::Authentication::HashAlgorithmType get_HashAlgorithm();
    virtual ASPOSECPP_SHARED_API int32_t get_HashStrength();
    virtual ASPOSECPP_SHARED_API int32_t get_KeyExchangeStrength();
    virtual ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API bool get_CanTimeout() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API int32_t get_ReadTimeout() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API void set_ReadTimeout(int32_t value) override;
    virtual ASPOSECPP_SHARED_API int32_t get_WriteTimeout() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API void set_WriteTimeout(int32_t value) override;
    virtual ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API void set_Position(int64_t value)  override;

    ASPOSECPP_SHARED_API SslStream(System::SharedPtr<IO::Stream> innerStream);
    ASPOSECPP_SHARED_API SslStream(System::SharedPtr<IO::Stream> innerStream, bool leaveInnerStreamOpen);
    ASPOSECPP_SHARED_API SslStream(System::SharedPtr<IO::Stream> innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback);
    ASPOSECPP_SHARED_API SslStream(System::SharedPtr<IO::Stream> innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback, LocalCertificateSelectionCallback userCertificateSelectionCallback);
    ASPOSECPP_SHARED_API SslStream(System::SharedPtr<IO::Stream> innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback, LocalCertificateSelectionCallback userCertificateSelectionCallback, EncryptionPolicy encryptionPolicy);

    virtual ASPOSECPP_SHARED_API void AuthenticateAsClient(String targetHost);
    virtual ASPOSECPP_SHARED_API void AuthenticateAsClient(String targetHost, System::SharedPtr<System::Security::Cryptography::X509Certificates::X509CertificateCollection> clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

    virtual ASPOSECPP_SHARED_API void SetLength(int64_t value);
    virtual ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, IO::SeekOrigin origin);
    virtual ASPOSECPP_SHARED_API void Flush();
    virtual ASPOSECPP_SHARED_API int32_t Read(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count);
    ASPOSECPP_SHARED_API void Write(System::ArrayPtr<uint8_t> buffer);
    virtual ASPOSECPP_SHARED_API void Write(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count);
    virtual ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginRead(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count, AsyncCallback asyncCallback, System::SharedPtr<Object> asyncState);
    virtual ASPOSECPP_SHARED_API int32_t EndRead(System::SharedPtr<IAsyncResult> asyncResult);
    virtual ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginWrite(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count, AsyncCallback asyncCallback, System::SharedPtr<Object> asyncState);
    virtual ASPOSECPP_SHARED_API void EndWrite(System::SharedPtr<IAsyncResult> asyncResult);

private:
    size_t read(uint8_t buffer[], size_t size);
    void write(const uint8_t buffer[], size_t size);

    std::shared_ptr<System::Details::ssl_stream_impl> stream_impl;
};
}}} // namespace System::Net::Security

DECLARE_USING_ENUM_OPERATORS(System::Net::Security);
