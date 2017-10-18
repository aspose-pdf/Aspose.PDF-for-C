#ifndef _Aspose_Pdf_Facades_PdfFileSignature_h_
#define _Aspose_Pdf_Facades_PdfFileSignature_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_SignatureAppearance();
    void set_SignatureAppearance(System::String value);
    bool get_IsCertified();
    System::SharedPtr<System::IO::Stream> get_SignatureAppearanceStream();
    void set_SignatureAppearanceStream(System::SharedPtr<System::IO::Stream> value);
    
    PdfFileSignature();
    PdfFileSignature(System::String inputFile);
    PdfFileSignature(System::String inputFile, System::String outputFile);
    
    virtual void BindPdf(System::String inputFile);
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    virtual void Save(System::String outputFile);
    virtual void Save(System::SharedPtr<System::IO::Stream> outputStream);
    void Sign(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect);
    void Sign(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    void Sign(int32_t page, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    void Sign(System::String SigName, System::String SigReason, System::String SigContact, System::String SigLocation, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    void Sign(int32_t page, System::String SigName, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    void Sign(System::String SigName, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> sig);
    Aspose::Pdf::InteractiveFeatures::Forms::DocMDPAccessPermissions GetAccessPermissions();
    void Certify(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::DocMDPSignature> docMdpSignature);
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetSignNames();
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetBlankSignNames();
    bool IsContainSignature();
    bool ContainsSignature();
    bool ContainsUsageRights();
    bool IsCoversWholeDocument(System::String signName);
    bool CoversWholeDocument(System::String signName);
    int32_t GetRevision(System::String signName);
    int32_t GetTotalRevision();
    void RemoveUsageRights();
    void RemoveSignature(System::String signName);
    void RemoveSignature(System::String signName, bool removeField);
    bool VerifySigned(System::String signName);
    System::String GetSignerName(System::String signName);
    System::DateTime GetDateTime(System::String signName);
    System::String GetReason(System::String signName);
    System::String GetLocation(System::String signName);
    System::String GetContactInfo(System::String signName);
    bool VerifySignature(System::String signName);
    System::SharedPtr<System::IO::Stream> ExtractImage(System::String signName);
    System::SharedPtr<System::IO::Stream> ExtractCertificate(System::String signName);
    void Save();
    
    PdfFileSignature(System::SharedPtr<Aspose::Pdf::Document> document);
    PdfFileSignature(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    
    void SetCertificate(System::String pfx, System::String pass);
    virtual void Close();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfFileSignature"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

