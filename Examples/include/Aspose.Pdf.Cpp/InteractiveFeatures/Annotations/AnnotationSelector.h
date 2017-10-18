#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationSelector_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationSelector_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Selector.h"
#include "InteractiveFeatures/Annotations/IAnnotationVisitor.h"
#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LinkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FileAttachmentAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class RedactionAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class HighlightAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class UnderlineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class StrikeOutAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SquigglyAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PopupAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CircleAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SquareAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class InkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolylineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolygonAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CaretAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class StampAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class MovieAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class ScreenAnnotation; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// This class is used for selecting annotations using Visitor template idea.
/// </summary>
class ASPOSE_PDF_SHARED_API AnnotationSelector FINAL : public Aspose::Pdf::Selector<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>>, public Aspose::Pdf::InteractiveFeatures::Annotations::IAnnotationVisitor
{
    typedef AnnotationSelector ThisType;
    typedef Aspose::Pdf::Selector<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>> BaseType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::IAnnotationVisitor BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    void Visit(System::SharedPtr<LinkAnnotation> link);
    
    AnnotationSelector(System::SharedPtr<Annotation> annotation);
    
    void Visit(System::SharedPtr<FileAttachmentAnnotation> attachment);
    void Visit(System::SharedPtr<TextAnnotation> text);
    void Visit(System::SharedPtr<RedactionAnnotation> redact);
    void Visit(System::SharedPtr<FreeTextAnnotation> freetext);
    void Visit(System::SharedPtr<HighlightAnnotation> highlight);
    void Visit(System::SharedPtr<UnderlineAnnotation> underline);
    void Visit(System::SharedPtr<StrikeOutAnnotation> strikeOut);
    void Visit(System::SharedPtr<SquigglyAnnotation> squiggly);
    void Visit(System::SharedPtr<PopupAnnotation> popup);
    void Visit(System::SharedPtr<LineAnnotation> line);
    void Visit(System::SharedPtr<CircleAnnotation> circle);
    void Visit(System::SharedPtr<SquareAnnotation> square);
    void Visit(System::SharedPtr<InkAnnotation> ink);
    void Visit(System::SharedPtr<PolylineAnnotation> polyline);
    void Visit(System::SharedPtr<PolygonAnnotation> polygon);
    void Visit(System::SharedPtr<CaretAnnotation> caret);
    void Visit(System::SharedPtr<StampAnnotation> stamp);
    void Visit(System::SharedPtr<WidgetAnnotation> widget);
    void Visit(System::SharedPtr<MovieAnnotation> movie);
    void Visit(System::SharedPtr<ScreenAnnotation> screen);
    
protected:

    System::SharedPtr<Annotation> annotation;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AnnotationSelector"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationSelector_h_

