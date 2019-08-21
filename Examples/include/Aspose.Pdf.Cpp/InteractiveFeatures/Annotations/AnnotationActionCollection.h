#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "BaseActionCollection.h"

namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

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
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    
public:

    /// <summary>
    /// Gets an action to be performed when the cursor enters the annotation�s active area.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnEnter();
    /// <summary>
    /// Sets an action to be performed when the cursor enters the annotation�s active area.
    /// </summary>
    void set_OnEnter(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the cursor exits the annotation�s active area.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnExit();
    /// <summary>
    /// Sets an action to be performed when the cursor exits the annotation�s active area.
    /// </summary>
    void set_OnExit(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the mouse button is pressed inside the annotation�s active area.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnPressMouseBtn();
    /// <summary>
    /// Sets an action to be performed when the mouse button is pressed inside the annotation�s active area.
    /// </summary>
    void set_OnPressMouseBtn(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the mouse button is released inside the annotation�s active area.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnReleaseMouseBtn();
    /// <summary>
    /// Sets an action to be performed when the mouse button is released inside the annotation�s active area.
    /// </summary>
    void set_OnReleaseMouseBtn(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the annotation receives the input focus.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnReceiveFocus();
    /// <summary>
    /// Sets an action to be performed when the annotation receives the input focus.
    /// </summary>
    void set_OnReceiveFocus(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation is opened.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnOpenPage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation is opened.
    /// </summary>
    void set_OnOpenPage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation is closed.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnClosePage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation is closed.
    /// </summary>
    void set_OnClosePage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation becomes visible in the viewer application�s user interface.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnShowPage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation becomes visible in the viewer application�s user interface.
    /// </summary>
    void set_OnShowPage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation is no longer visible in the viewer application�s user interface.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnHidePage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation is no longer visible in the viewer application�s user interface.
    /// </summary>
    void set_OnHidePage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the annotation loses the input focus.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnLostFocus();
    /// <summary>
    /// Sets an action to be performed when the annotation loses the input focus.
    /// </summary>
    void set_OnLostFocus(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when user modifies character of the field. 
    /// </summary>
    System::SharedPtr<PdfAction> get_OnModifyCharacter();
    /// <summary>
    /// Sets an action to be performed when user modifies character of the field. 
    /// </summary>
    void set_OnModifyCharacter(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when user changes contents of the field. 
    /// </summary>
    System::SharedPtr<PdfAction> get_OnValidate();
    /// <summary>
    /// Sets an action to be performed when user changes contents of the field. 
    /// </summary>
    void set_OnValidate(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed to format field value. 
    /// </summary>
    System::SharedPtr<PdfAction> get_OnFormat();
    /// <summary>
    /// Sets an action to be performed to format field value. 
    /// </summary>
    void set_OnFormat(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to calculate field value. 
    /// </summary>
    System::SharedPtr<PdfAction> get_OnCalculate();
    /// <summary>
    /// Sets an action to calculate field value. 
    /// </summary>
    void set_OnCalculate(System::SharedPtr<PdfAction> value);
    
protected:

    AnnotationActionCollection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


