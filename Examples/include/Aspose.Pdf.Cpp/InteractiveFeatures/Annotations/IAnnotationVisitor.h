#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_IAnnotationVisitor_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_IAnnotationVisitor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LinkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FileAttachmentAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextAnnotation; } } } }
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
/// Defines Visitor for visiting different document annotations.
/// </summary>
class ASPOSE_PDF_SHARED_API IAnnotationVisitor : public virtual System::Object
{
    typedef IAnnotationVisitor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual void Visit(System::SharedPtr<LinkAnnotation> link) = 0;
    virtual void Visit(System::SharedPtr<FileAttachmentAnnotation> attachment) = 0;
    virtual void Visit(System::SharedPtr<TextAnnotation> text) = 0;
    virtual void Visit(System::SharedPtr<FreeTextAnnotation> freetext) = 0;
    virtual void Visit(System::SharedPtr<HighlightAnnotation> highlight) = 0;
    virtual void Visit(System::SharedPtr<UnderlineAnnotation> underline) = 0;
    virtual void Visit(System::SharedPtr<StrikeOutAnnotation> strikeOut) = 0;
    virtual void Visit(System::SharedPtr<SquigglyAnnotation> squiggly) = 0;
    virtual void Visit(System::SharedPtr<PopupAnnotation> popup) = 0;
    virtual void Visit(System::SharedPtr<LineAnnotation> line) = 0;
    virtual void Visit(System::SharedPtr<CircleAnnotation> circle) = 0;
    virtual void Visit(System::SharedPtr<SquareAnnotation> square) = 0;
    virtual void Visit(System::SharedPtr<InkAnnotation> ink) = 0;
    virtual void Visit(System::SharedPtr<PolylineAnnotation> polyline) = 0;
    virtual void Visit(System::SharedPtr<PolygonAnnotation> polygon) = 0;
    virtual void Visit(System::SharedPtr<CaretAnnotation> caret) = 0;
    virtual void Visit(System::SharedPtr<StampAnnotation> stamp) = 0;
    virtual void Visit(System::SharedPtr<WidgetAnnotation> widget) = 0;
    virtual void Visit(System::SharedPtr<MovieAnnotation> movie) = 0;
    virtual void Visit(System::SharedPtr<ScreenAnnotation> screen) = 0;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_IAnnotationVisitor_h_

