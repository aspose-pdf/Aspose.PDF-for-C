#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <security/cryptography/x509_certificates/x509_certificate_2.h>

#include "InteractiveFeatures/Forms/Signature_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Creates a detached PKCS#7Detached signature using a X509Certificate2. It supports usb smartcards, tokens without exportable private keys.
/// </summary>
class ASPOSE_PDF_SHARED_API ExternalSignature : public Aspose::Pdf::Forms::Signature
{
    typedef ExternalSignature ThisType;
    typedef Aspose::Pdf::Forms::Signature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The certificate with the private key.
    /// </summary>
    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> get_Certificate();
    
    /// <summary>
    /// Creates a detached PKCS#7Detached signature using a X509Certificate2. It supports usb smartcards, tokens without exportable private keys.
    /// </summary>
    /// <param name="certificate">The certificate with the private key</param>
    ExternalSignature(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> certificate);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> _certificate;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


