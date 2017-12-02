#ifndef _Aspose_Pdf_InteractiveFeatures_DocumentActionCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_DocumentActionCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets action performed before document saving.
    /// </summary>
    System::SharedPtr<PdfAction> get_BeforeSaving();
    /// <summary>
    /// Gets or sets action performed before document saving.
    /// </summary>
    void set_BeforeSaving(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets or sets action that will be performed before documetn closing.
    /// </summary>
    System::SharedPtr<PdfAction> get_BeforeClosing();
    /// <summary>
    /// Gets or sets action that will be performed before documetn closing.
    /// </summary>
    void set_BeforeClosing(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets or sets action that will be performed after document saving.
    /// </summary>
    System::SharedPtr<PdfAction> get_AfterSaving();
    /// <summary>
    /// Gets or sets action that will be performed after document saving.
    /// </summary>
    void set_AfterSaving(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Action that will be performed before document printing.
    /// </summary>
    System::SharedPtr<PdfAction> get_BeforePrinting();
    /// <summary>
    /// Action that will be performed before document printing.
    /// </summary>
    void set_BeforePrinting(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Action that will be performed after document printing.
    /// </summary>
    System::SharedPtr<PdfAction> get_AfterPrinting();
    /// <summary>
    /// Action that will be performed after document printing.
    /// </summary>
    void set_AfterPrinting(System::SharedPtr<PdfAction> value);
    
    /// <summary>
    /// Constructor for DocumentActionCollection. Constructs DocumentActionCollection objects from Pdf.Kit.Engine Document object.
    /// </summary>
    /// <param name="document">Document for which action colleciton is created.</param>
    DocumentActionCollection(System::SharedPtr<Document> document);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
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

