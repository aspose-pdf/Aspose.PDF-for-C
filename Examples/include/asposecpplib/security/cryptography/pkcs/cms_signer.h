#ifndef cms_signer_h
#define cms_signer_h

#include "system/object.h"
#include "security/cryptography/x509_certificates/x509_certificate_2.h"
#include "security/cryptography/x509_certificates/x509_include_option.h"
#include "security/cryptography/oid.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

class CmsSigner FINAL: public System::Object
{
public:
    CmsSigner(SharedPtr<X509Certificates::X509Certificate2> certificate);

    X509Certificates::X509IncludeOption get_IncludeOption() const;
    void set_IncludeOption(X509Certificates::X509IncludeOption value);

    SharedPtr<Oid> get_DigestAlgorithm() const;
    void set_DigestAlgorithm(SharedPtr<Oid> value);
};

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

#endif // cms_signer_h