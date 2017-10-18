#ifndef _Aspose_Pdf_PageActionCollection_h_
#define _Aspose_Pdf_PageActionCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::SharedPtr<InteractiveFeatures::PdfAction> get_OnOpen();
    void set_OnOpen(System::SharedPtr<InteractiveFeatures::PdfAction> value);
    System::SharedPtr<InteractiveFeatures::PdfAction> get_OnClose();
    void set_OnClose(System::SharedPtr<InteractiveFeatures::PdfAction> value);
    
protected:

    PageActionCollection(System::SharedPtr<Engine::Data::IPdfObject> pageDictionary);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageActionCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageActionCollection_h_

