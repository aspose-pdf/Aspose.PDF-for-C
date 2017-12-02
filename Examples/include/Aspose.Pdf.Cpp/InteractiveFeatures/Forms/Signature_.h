#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_Signature__h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_Signature__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/date_time.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class DocMDPSignature; } } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PKCS1; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PKCS7; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PKCS7Detached; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Security { class ISignature; } } } }
namespace Aspose { namespace Pdf { class TimestampSettings; } }
namespace Aspose { namespace Pdf { class OcspSettings; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Security { namespace Impl { namespace Signatures { class SignatureReference; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Security { namespace Impl { namespace Signatures { class FieldLockDictionary; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// An abstract class which represents signature object in the pdf document. 
/// Signatures are fields with values of signature objects, the last contain data which is used to
/// verify the document validity.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Signature : public System::Object
{
    typedef Signature ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::DocMDPSignature;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PKCS1;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PKCS7;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PKCS7Detached;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    
public:

    /// <summary>
    /// The name of the person or authority signing the document.
    /// </summary>
    System::String get_Authority();
    /// <summary>
    /// The name of the person or authority signing the document.
    /// </summary>
    void set_Authority(System::String value);
    /// <summary>
    /// The time of signing.
    /// </summary>
    System::DateTime get_Date();
    /// <summary>
    /// The time of signing.
    /// </summary>
    void set_Date(System::DateTime value);
    /// <summary>
    /// The CPU host name or physical location of the signing.
    /// </summary>
    System::String get_Location();
    /// <summary>
    /// The CPU host name or physical location of the signing.
    /// </summary>
    void set_Location(System::String value);
    /// <summary>
    /// The reason for the signing, such as (I agreeРІР‚В¦).
    /// </summary>
    System::String get_Reason();
    /// <summary>
    /// The reason for the signing, such as (I agreeРІР‚В¦).
    /// </summary>
    void set_Reason(System::String value);
    /// <summary>
    /// Information provided by the signer to enable a recipient to contact the signer 
    /// to verify the signature, e.g. a phone number.
    /// </summary>
    System::String get_ContactInfo();
    /// <summary>
    /// Information provided by the signer to enable a recipient to contact the signer 
    /// to verify the signature, e.g. a phone number.
    /// </summary>
    void set_ContactInfo(System::String value);
    ///<summary>
    /// An array of pairs of integers (starting byte offset, length in bytes) 
    /// that shall describe the exact byte range for the digest calculation.
    /// </summary>
    System::ArrayPtr<int32_t> get_ByteRange();
    /// <summary>
    /// Gets/sets timestamp settings.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::TimestampSettings> get_TimestampSettings();
    /// <summary>
    /// Gets/sets timestamp settings.
    /// </summary>
    void set_TimestampSettings(System::SharedPtr<Aspose::Pdf::TimestampSettings> value);
    /// <summary>
    /// Force to show/hide signature properties.
    /// In case ShowProperties is true signature field has predefined format of appearance (strings to represent):
    /// -------------------------------------------
    /// Digitally signed by {certificate subject}
    /// Date: {signature.Date}
    /// Reason: {signature.Reason}
    /// Location: {signature.Location}
    /// -------------------------------------------
    /// where {X} is placeholder for X value. Also signature can have image, in this case listed strings are placed over image.
    /// ShowProperties is true by default.
    /// </summary>
    bool get_ShowProperties();
    /// <summary>
    /// Force to show/hide signature properties.
    /// In case ShowProperties is true signature field has predefined format of appearance (strings to represent):
    /// -------------------------------------------
    /// Digitally signed by {certificate subject}
    /// Date: {signature.Date}
    /// Reason: {signature.Reason}
    /// Location: {signature.Location}
    /// -------------------------------------------
    /// where {X} is placeholder for X value. Also signature can have image, in this case listed strings are placed over image.
    /// ShowProperties is true by default.
    /// </summary>
    void set_ShowProperties(bool value);
    
    /// <summary>
    /// Verify the document regarding this signature and return true if document is valid 
    /// or otherwise false.
    /// </summary>
    /// <returns>true if document is valid.</returns>
    bool Verify();
    
    /// <summary>
    /// Inititalizes new instance of the <see cref="Signature"/> class.
    /// </summary>
    Signature();
    /// <summary>
    /// Inititalizes new instance of the <see cref="Signature"/> class.
    /// </summary>
    /// <param name="pfx">
    /// Pfx file which contains certificate for signing.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    Signature(System::String pfx, System::String password);
    /// <summary>
    /// Inititalizes new instance of the <see cref="Signature"/> class.
    /// </summary>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    Signature(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    
    virtual ~Signature();
    
protected:

    System::SharedPtr<System::IO::Stream> _pfx;
    System::String _password;
    System::SharedPtr<System::IO::Stream> _image;
    System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> _document;
    System::SharedPtr<Aspose::Pdf::Engine::Security::ISignature> _signature;
    System::String _name;
    System::ArrayPtr<int32_t> _byteRange;
    
    System::SharedPtr<Aspose::Pdf::OcspSettings> get_OcspSettings();
    void set_OcspSettings(System::SharedPtr<Aspose::Pdf::OcspSettings> value);
    /// <summary>
    /// Gets image stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Image();
    /// <summary>
    /// Gets image stream.
    /// </summary>
    void set_Image(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets the pfx container value.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Pfx();
    /// <summary>
    /// Gets the signature value.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Security::ISignature> get_Value();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_Reference();
    void set_Reference(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> value);
    System::String get_Password();
    void set_Password(System::String value);
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> get_SignatureReferences();
    void set_SignatureReferences(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> value);
    System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> get_FieldsLock();
    void set_FieldsLock(System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> value);
    
    /// <summary>
    /// Sign the document using data in this sugnature object.
    /// </summary>
    /// <param name="sigName">
    /// Represents the name of the signature field which will contain this signature object.
    /// </param>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="pass">
    /// Password to get access to the private key in the certificate.
    /// </param>
    void Sign(System::String sigName, System::SharedPtr<System::IO::Stream> pfx, System::String pass);
    /// <summary>
    /// Removes signature value, but keeps the field from document.
    /// </summary>
    void Clear();
    
    /// <summary>
    /// Initializes signature object with image.
    /// </summary>
    /// <param name="image">
    /// Image data.
    /// </param>
    Signature(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Initialize signature object from signature dictionary. Then this object will be used for verifying the document.
    /// </summary>
    /// <param name="signature">
    /// Signature dictionary.
    /// </param>
    /// <param name="document">
    /// The document, it is used then to get file data in order to verify signature.
    /// </param>
    Signature(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _authority;
    System::DateTime _date;
    System::String _location;
    System::String _reason;
    System::String _contactInfo;
    bool mustClose;
    bool _showProperties;
    System::SharedPtr<Aspose::Pdf::TimestampSettings> _timestampSettings;
    System::SharedPtr<Aspose::Pdf::OcspSettings> _ocspSettings;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _reference;
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> _signatureReferences;
    System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> _fieldLockDictionary;
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_Signature__h_

