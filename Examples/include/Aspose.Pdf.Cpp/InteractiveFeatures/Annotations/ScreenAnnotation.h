#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_ScreenAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_ScreenAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// A screen annotation that specifies a region of a page upon which media clips may be played.
/// </summary>
class ASPOSE_PDF_SHARED_API ScreenAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation, public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::ITitledAnnotation
{
    typedef ScreenAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    
public:

    System::String get_Title();
    void set_Title(System::String value);
    System::SharedPtr<PdfAction> get_Action();
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    ScreenAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String mediaFile);
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
protected:

    ScreenAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ScreenAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    void set_Action(System::SharedPtr<PdfAction> value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_ScreenAnnotation_h_

