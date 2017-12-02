#ifndef _Aspose_Pdf_Facades_PdfFileSignature_h_
#define _Aspose_Pdf_Facades_PdfFileSignature_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/date_time.h>
#include <system/collections/ilist.h>
#include <drawing/rectangle.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Signature; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class DocMDPAccessPermissions; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class DocMDPSignature; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to sign a pdf file with a certificate.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfFileSignature FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileSignature ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image file name.
    /// </summary>
    System::String get_SignatureAppearance();
    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image file name.
    /// </summary>
    void set_SignatureAppearance(System::String value);
    /// <summary>
    /// Gets the flag determining whether a document is certified or not.
    /// </summary>
    bool get_IsCertified();
    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_SignatureAppearanceStream();
    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image stream.
    /// </summary>
    void set_SignatureAppearanceStream(System::SharedPtr<System::IO::Stream> value);
    
    /// <summary>
    /// The constructor of PdfFileSignature class. 
    /// </summary>
    PdfFileSignature();
    /// <summary>
    /// The constructor of PdfFileSignature class.
    /// </summary>
    /// <param name="inputFile">The input file for signature.</param>
    PdfFileSignature(System::String inputFile);
    /// <summary>
    /// The constructor of PdfFileSignature class.
    /// </summary>
    /// <param name="inputFile">The input file for signature.</param>
    /// <param name="outputFile">The output file.</param>
    PdfFileSignature(System::String inputFile, System::String outputFile);
    
    /// <summary> 
    /// Binds a Pdf file for editing.
    /// </summary>
    /// <param name="inputFile">The pdf file to be edited.</param>
    virtual void BindPdf(System::String inputFile);
    /// <summary> 
    /// Binds a Pdf stream for editing.
    /// </summary>
    /// <param name="inputStream">The pdf stream to be edited.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Saves the result PDF to file.
    /// </summary>
    /// <param name="outputFile">output pdf file</param>
    virtual void Save(System::String outputFile);
    /// <summary>
    /// Saves the result PDF to stream.
    /// </summary>
    /// <param name="outputStream">output pdf stream</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    ///  Make a signature on the pdf document.
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void Sign(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect);
    /// <summary>
    /// Sign the document with the given type signature.
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="sig">The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached. </param>
    /// <example>
    /// <code></code>
    /// </example>
    void Sign(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature.
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="sig">
    /// The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached.
    /// Such data as signature reason, contact and location must be already present in this object (see corresponding properties).
    /// </param>
    /// <example>
    /// <code></code>
    /// </example>
    void Sign(int32_t page, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature which is placed in already presented signature field.
    /// Before signing signature field must be empty, i.e. field must not contain signature dictionary.
    /// Thus pdf document already has signature field, you should not supply the place to stamp the signature,
    /// corresponding page and rectangle are taken from signature field which is found by signature name (see SigName parameter).
    /// </summary>
    /// <param name="SigName">The name of the signature field.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="sig">The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void Sign(System::String SigName, System::String SigReason, System::String SigContact, System::String SigLocation, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature which is placed in already presented signature field.
    /// Before signing pdf document should already has signature field, corresponding page and rectangle are taken from 
    /// signature field which is found by signature name (see SigName parameter).
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>        
    /// <param name="SigName">The name of the signature field.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>        
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="sig">The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void Sign(int32_t page, System::String SigName, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature which is placed in already presented signature field.
    /// Before signing signature field must be empty, i.e. field must not contain signature dictionary.
    /// Thus pdf document already has signature field, you should not supply the place to stamp the signature,
    /// corresponding page and rectangle are taken from signature field which is found by signature name (see SigName parameter).
    /// Such data as signature reason, contact and location must be provided by corresponding properties of the Signature object sig.
    /// </summary>
    /// <param name="SigName">The name of the signature field.</param>
    /// <param name="sig">The type of the signature, could be PKCS1 (Pkcs1Signature object), PKCS7 and PKCS7 detached (Pkcs7Signature object) </param>
    /// <example>
    /// <code></code>
    /// </example>
    void Sign(System::String SigName, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    /// <summary>
    /// Returns the access permissions value of certified document by the MDP signature type.
    /// </summary>
    /// <returns>If the document is being certified, than returns access permissions value; otherwise, <exception cref="System.ApplicationException"/> is thrown.</returns>
    Aspose::Pdf::InteractiveFeatures::Forms::DocMDPAccessPermissions GetAccessPermissions();
    /// <summary>
    /// Certify the document with the MDP signature.
    /// Such data as signature reason, contact and location must be provided by corresponding properties of the Signature object sig.
    /// </summary>
    /// <param name="page">The page on which signature is made.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="docMdpSignature">The document MDP type of the signature.</param>
    void Certify(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::DocMDPSignature> docMdpSignature);
    /// <summary>
    /// Gets the names of all not empty signatures.
    /// </summary>
    /// <returns>Return an IList.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetSignNames();
    /// <summary>
    /// Gets the names of all empty signature fields.
    /// </summary>
    /// <returns>Return an IList.</returns>
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetBlankSignNames();
    /// <summary>
    /// Checks if the pdf  has a digital signature or not.
    /// </summary>
    /// <returns>Return a  result of bool type.</returns>
    bool IsContainSignature();
    /// <summary>
    /// Checks if the pdf  has a digital signature or not.
    /// </summary>
    /// <returns>Return a  result of bool type.</returns>
    bool ContainsSignature();
    /// <summary>
    /// Checks if the pdf has a usage rights or not.
    /// </summary>
    /// <returns>Returns a result of bool type.</returns>
    bool ContainsUsageRights();
    /// <summary>
    /// Checks if the signature covers the whole document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a  result of bool type.</returns>
    bool IsCoversWholeDocument(System::String signName);
    /// <summary>
    /// Checks if the signature covers the whole document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a  result of bool type.</returns>
    bool CoversWholeDocument(System::String signName);
    /// <summary>
    /// Gets the revision of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return the number of signature revision.</returns>
    int32_t GetRevision(System::String signName);
    /// <summary>
    /// Gets the toltal revision.
    /// </summary>
    /// <returns>Return the total number of signature revision.</returns>
    int32_t GetTotalRevision();
    /// <summary>
    /// Removes the usage rights entry.
    /// </summary>
    void RemoveUsageRights();
    /// <summary>
    /// Remove the signature according to the name of the signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void RemoveSignature(System::String signName);
    /// <summary>
    /// Removes the signature according to the name of the signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <param name="removeField">If set to true, than removes both of signature and field from document; otherwise, signature only.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void RemoveSignature(System::String signName, bool removeField);
    /// <summary>
    /// Checks the validity of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a result of bool type.</returns>
    bool VerifySigned(System::String signName);
    /// <summary>
    /// Gets the name of person or organization who signing the pdf document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns the result of the signer's name.</returns>
    System::String GetSignerName(System::String signName);
    /// <summary>
    /// Gets the signature's datetime.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return the result of DateTime type.</returns>
    System::DateTime GetDateTime(System::String signName);
    /// <summary>
    /// Gets the reason of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    System::String GetReason(System::String signName);
    /// <summary>
    /// Gets the location of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    System::String GetLocation(System::String signName);
    /// <summary>
    /// Gets the contact information of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    System::String GetContactInfo(System::String signName);
    /// <summary>
    /// Checks the validity of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a result of bool type.</returns>
    bool VerifySignature(System::String signName);
    /// <summary>
    /// Extracts signature's image.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>If image was successfully found than returns stream object; otherwise, null.</returns>
    System::SharedPtr<System::IO::Stream> ExtractImage(System::String signName);
    /// <summary>
    /// Extracts signature's single X.509 certificate as a stream.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>If certificate was found returns X.509 single certificate; otherwise, null.</returns>
    System::SharedPtr<System::IO::Stream> ExtractCertificate(System::String signName);
    /// <summary> 
    /// Save signed pdf file. Output filename must be provided before with the help of coresponding PdfFileSignature constructor.
    /// </summary>
    void Save();
    
    /// <summary>
    /// Initializes new <see cref="PdfFileSignature"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfFileSignature(System::SharedPtr<Aspose::Pdf::Document> document);
    /// <summary>
    /// Initializes new <see cref="PdfFileSignature"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFile">
    /// The output file.
    /// </param>
    PdfFileSignature(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    
    /// <summary>
    /// Set certificate file and password for signing routine.
    /// </summary>
    /// <param name="pfx">
    /// PKCS #12 certificate file.
    /// </param>
    /// <param name="pass">
    /// Password to get access for the certificate private key.
    /// </param>
    void SetCertificate(System::String pfx, System::String pass);
    /// <summary>
    /// Closes the facade.
    /// </summary>
    virtual void Close();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _outputFile;
    System::String _signatureAppearance;
    System::SharedPtr<System::IO::Stream> _signatureAppearanceStream;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> _sig;
    int32_t _page;
    System::String _sigName;
    bool _visible;
    System::SharedPtr<Rectangle> _rect;
    System::String _pfx;
    System::String _pass;
    int32_t _length;
    
    void AssertSignature(System::String sigName);
    void AssertSignatureObjectIsNull(System::String sigName);
    void AssertCanSign();
    System::String GetNextSignatureName();
    void FlushChanges(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::String password);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfFileSignature_h_

