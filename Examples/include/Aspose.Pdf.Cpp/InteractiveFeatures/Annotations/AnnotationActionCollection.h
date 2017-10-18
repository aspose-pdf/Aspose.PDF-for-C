#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationActionCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationActionCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "BaseActionCollection.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents the collection of annotation actions.
/// </summary>
class ASPOSE_PDF_SHARED_API AnnotationActionCollection FINAL : public Aspose::Pdf::BaseActionCollection
{
    typedef AnnotationActionCollection ThisType;
    typedef Aspose::Pdf::BaseActionCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    
public:

    System::SharedPtr<PdfAction> get_OnEnter();
    void set_OnEnter(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnExit();
    void set_OnExit(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnPressMouseBtn();
    void set_OnPressMouseBtn(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnReleaseMouseBtn();
    void set_OnReleaseMouseBtn(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnReceiveFocus();
    void set_OnReceiveFocus(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnOpenPage();
    void set_OnOpenPage(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnClosePage();
    void set_OnClosePage(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnShowPage();
    void set_OnShowPage(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnHidePage();
    void set_OnHidePage(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnLostFocus();
    void set_OnLostFocus(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnModifyCharacter();
    void set_OnModifyCharacter(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnValidate();
    void set_OnValidate(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnFormat();
    void set_OnFormat(System::SharedPtr<PdfAction> value);
    System::SharedPtr<PdfAction> get_OnCalculate();
    void set_OnCalculate(System::SharedPtr<PdfAction> value);
    
protected:

    AnnotationActionCollection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AnnotationActionCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationActionCollection_h_

