#ifndef _Aspose_Pdf_PageActionCollection_h_
#define _Aspose_Pdf_PageActionCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "BaseActionCollection.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class describes page actions
/// </summary>
class ASPOSE_PDF_SHARED_API PageActionCollection : public Aspose::Pdf::BaseActionCollection
{
    typedef PageActionCollection ThisType;
    typedef Aspose::Pdf::BaseActionCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// An action that shall be performed when the page is opened.
    /// </summary>
    System::SharedPtr<InteractiveFeatures::PdfAction> get_OnOpen();
    /// <summary>
    /// An action that shall be performed when the page is opened.
    /// </summary>
    void set_OnOpen(System::SharedPtr<InteractiveFeatures::PdfAction> value);
    /// <summary>
    /// An action that shall be performed when the page is closed.
    /// </summary>
    System::SharedPtr<InteractiveFeatures::PdfAction> get_OnClose();
    /// <summary>
    /// An action that shall be performed when the page is closed.
    /// </summary>
    void set_OnClose(System::SharedPtr<InteractiveFeatures::PdfAction> value);
    
protected:

    PageActionCollection(System::SharedPtr<Engine::Data::IPdfObject> pageDictionary);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageActionCollection_h_

