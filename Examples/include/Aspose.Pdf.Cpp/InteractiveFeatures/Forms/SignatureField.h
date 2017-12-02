#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_SignatureField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_SignatureField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Signature; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents signature form field.
/// </summary>
class ASPOSE_PDF_SHARED_API SignatureField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef SignatureField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    /// <summary>
    /// Gets signature object.
    /// This object contains signature data regarding public-key cryptographic standards.
    /// Classes <see cref="PKCS1"/>, <see cref="PKCS7"/> and <see cref="PKCS7Detached"/> 
    /// represent all supported types of signature objects.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> get_Signature();
    
    /// <summary>
    /// Signs the document using this signature field.
    /// </summary>
    /// <param name="signature">
    /// Signature object, see <see cref="PKCS1"/>, <see cref="PKCS7"/>, <see cref="PKCS7Detached"/>.
    /// </param>
    /// <param name="pfx">
    /// Stream with certificate.
    /// </param>
    /// <param name="pass">
    /// Password to access private in the <paramref name="pfx"/>.
    /// </param>
    void Sign(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> signature, System::SharedPtr<System::IO::Stream> pfx, System::String pass);
    
    /// <summary>
    /// Initializes new instance of the <see cref="SignatureField"/> class.
    /// </summary>
    /// <param name="page">Page where signature field should be placed.</param>
    /// <param name="rect">Position and size of signature field.</param>
    SignatureField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes new instance of the <see cref="SignatureField"/> class.
    /// </summary>
    /// <param name="doc">Page where signature field should be placed.</param>
    /// <param name="rect">Position and size of signature field.</param>
    SignatureField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Sign the document using this signature field.
    /// </summary>
    /// <param name="signature">Signature object, see <see cref="PKCS1"/>, <see cref="PKCS7"/> and <see cref="PKCS7Detached"/>.</param>
    void Sign(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> signature);
    /// <summary>
    /// Extracts signature's image.
    /// </summary>
    /// <returns>If image was successfully found than returns stream object; otherwise, null.</returns>
    System::SharedPtr<System::IO::Stream> ExtractImage();
    /// <summary>
    /// Extracts the single X.509 certificate in DER format as a stream.  
    /// </summary>
    /// <returns>If certificate was found returns X.509 single certificate; otherwise, null.</returns>
    System::SharedPtr<System::IO::Stream> ExtractCertificate();
    
protected:

    /// <summary>
    /// Initializes new instance of the <see cref="SignatureField"/> on reading pdf document.
    /// </summary>
    /// <param name="annotation">
    /// Signature field annotation.
    /// </param>
    /// <param name="document">
    /// The document. This info is necessary for signing blank signature fields.
    /// </param>
    SignatureField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    /// <summary>
    /// Removes signature object from field.
    /// </summary>
    void Clear();
    void AddImage(System::SharedPtr<System::IO::Stream> image);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> _signature;
    
    void AddImageToAppearance(System::SharedPtr<XForm> appearance, System::SharedPtr<System::IO::Stream> image, System::ArrayPtr<double> position);
    System::ArrayPtr<double> CalculateImagePosition(double width, double height);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_SignatureField_h_

