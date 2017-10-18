#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_RedactionAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_RedactionAnnotation_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents Redact annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API RedactionAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation
{
    typedef RedactionAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    
public:

    System::ArrayPtr<System::SharedPtr<Point>> get_QuadPoint();
    void set_QuadPoint(System::ArrayPtr<System::SharedPtr<Point>> value);
    System::SharedPtr<Aspose::Pdf::Color> get_FillColor();
    void set_FillColor(System::SharedPtr<Aspose::Pdf::Color> value);
    System::SharedPtr<Aspose::Pdf::Color> get_BorderColor();
    void set_BorderColor(System::SharedPtr<Aspose::Pdf::Color> value);
    System::String get_OverlayText();
    void set_OverlayText(System::String value);
    bool get_Repeat();
    void set_Repeat(bool value);
    Aspose::Pdf::HorizontalAlignment get_TextAlignment();
    void set_TextAlignment(Aspose::Pdf::HorizontalAlignment value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    RedactionAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    virtual void Flatten();
    void Redact();
    
protected:

    RedactionAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "RedactionAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_RedactionAnnotation_h_

