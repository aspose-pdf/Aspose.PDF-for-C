#ifndef _Aspose_Pdf_InteractiveFeatures_DocumentActionCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_DocumentActionCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Class describes actions performed on some actions with document
/// </summary>
class ASPOSE_PDF_SHARED_API DocumentActionCollection FINAL : public System::Object
{
    typedef DocumentActionCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<PdfAction> get_BeforeSaving();
    void set_BeforeSaving(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_BeforeClosing();
    void set_BeforeClosing(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_AfterSaving();
    void set_AfterSaving(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_BeforePrinting();
    void set_BeforePrinting(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_AfterPrinting();
    void set_AfterPrinting(System::SharedPtr<PdfAction> value);
    
    DocumentActionCollection(System::SharedPtr<Document> document);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DocumentActionCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<PdfAction> beforeSaving;
    System::SharedPtr<PdfAction> beforeClosing;
    System::SharedPtr<PdfAction> afterSaving;
    System::SharedPtr<PdfAction> beforePrinting;
    System::SharedPtr<PdfAction> afterPrinting;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> provideAAEntry();
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_DocumentActionCollection_h_

