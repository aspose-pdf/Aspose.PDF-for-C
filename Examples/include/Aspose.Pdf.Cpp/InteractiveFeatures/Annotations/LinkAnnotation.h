#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_LinkAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_LinkAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class IAppointment; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class HighlightingMode; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents either a hypertext link to a destination elsewhere in the document or an action to be performed.
/// </summary>
class ASPOSE_PDF_SHARED_API LinkAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation
{
    typedef LinkAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    
public:

    System::SharedPtr<PdfAction> get_Action();
    void set_Action(System::SharedPtr<PdfAction> value);
    System::SharedPtr<IAppointment> get_Destination();
    void set_Destination(System::SharedPtr<IAppointment> value);
    HighlightingMode get_Highlighting();
    void set_Highlighting(HighlightingMode value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    LinkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    LinkAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LinkAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<PdfAction> _action;
    System::SharedPtr<IAppointment> _destination;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_LinkAnnotation_h_

