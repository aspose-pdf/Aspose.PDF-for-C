#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_PKCS7__h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_PKCS7__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Engine;

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "InteractiveFeatures/Forms/Signature_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents the PKCS#7 object that conform to the PKCS#7 specification in Internet RFC 2315, 
/// PKCS #7: Cryptographic Message Syntax, Version 1.5.
/// The SHA1 digest of the document's byte range is encapsulated in the PKCS#7 SignedData field.
/// </summary>
class ASPOSE_PDF_SHARED_API PKCS7 FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Signature
{
    typedef PKCS7 ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Signature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    
public:

    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7"/> class.
    /// </summary>
    PKCS7();
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7"/> class.
    /// </summary>
    /// <param name="pfx">
    /// Pfx file which contains certificate for signing.
    /// </param>
    /// <param name="password">
    /// Password for certificate.
    /// </param>
    /// Password to get access to the private key in the certificate.
    PKCS7(System::String pfx, System::String password);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7"/> class.
    /// </summary>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    PKCS7(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    
protected:

    /// <summary>
    /// Initialize signature object from signature dictionary. Then this object will be used for verifying the document.
    /// </summary>
    /// <param name="signature">
    /// Signature dictionary.
    /// </param>
    /// <param name="document">
    /// The document, it is used then to get file data in order to verify signature.
    /// </param>
    PKCS7(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Engine::IPdfDocument> document);
    
private:

    /// <summary>
    /// Initializes new instance of the <see cref="PKCS7"/> class.
    /// </summary>
    /// <param name="image">
    /// This image will define signature appearance on the page.
    /// </param>
    PKCS7(System::SharedPtr<System::IO::Stream> image);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_PKCS7__h_

