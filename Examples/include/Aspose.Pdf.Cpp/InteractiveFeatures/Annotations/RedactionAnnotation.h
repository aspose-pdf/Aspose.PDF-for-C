#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents Redact annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API RedactionAnnotation FINAL : public Aspose::Pdf::Annotations::Annotation
{
    typedef RedactionAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// An array of 8xN numbers specifying the coordinates of content region that is intended to be removed. 
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_QuadPoint();
    /// <summary>
    /// An array of 8xN numbers specifying the coordinates of content region that is intended to be removed. 
    /// </summary>
    void set_QuadPoint(System::ArrayPtr<System::SharedPtr<Point>> value);
    /// <summary>
    /// Gets color to fill annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_FillColor();
    /// <summary>
    /// Sets color to fill annotation.
    /// </summary>
    void set_FillColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets color of border which is drawn when redaction is not active.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_BorderColor();
    /// <summary>
    /// Sets color of border which is drawn when redaction is not active.
    /// </summary>
    void set_BorderColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Text to print on redact annotation.
    /// </summary>
    System::String get_OverlayText();
    /// <summary>
    /// Text to print on redact annotation.
    /// </summary>
    void set_OverlayText(System::String value);
    /// <summary>
    /// If true overlay text will be repated on the annotation. 
    /// </summary>
    bool get_Repeat();
    /// <summary>
    /// If true overlay text will be repated on the annotation. 
    /// </summary>
    void set_Repeat(bool value);
    /// <summary>
    /// Gets. Alignment of Overlay Text.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment get_TextAlignment();
    /// <summary>
    /// Sets. Alignment of Overlay Text.
    /// </summary>
    void set_TextAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Constructor for RedactionAnnotation. For using in Generator. 
    /// </summary>
    /// <param name="document">Document where new annotation will be created.</param>
    RedactionAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor for RedactAnnotation.
    /// </summary>
    /// <param name="page">Page where annotation will be placed.</param>
    /// <param name="rect">Annotation position on the page.</param>
    RedactionAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Flattens annotation i.e. removes annotation and adds its
    /// </summary>
    virtual void Flatten();
    /// <summary>
    /// Flattens annotation and redacts page contents (i.e. removes text and image under redacted annotation)
    /// </summary>
    void Redact();
    
protected:

    RedactionAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


