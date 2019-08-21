#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>

#include "InteractiveFeatures/Annotations/IAnnotationVisitor.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LinkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FileAttachmentAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RedactionAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class HighlightAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class UnderlineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class StrikeOutAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SquigglyAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PopupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class CircleAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SquareAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class InkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PolylineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PolygonAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class CaretAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class StampAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WatermarkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class MovieAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RichMediaAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class ScreenAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// This class is used for selecting annotations using Visitor template idea.
/// </summary>
class ASPOSE_PDF_SHARED_API AnnotationSelector FINAL : public Aspose::Pdf::Annotations::IAnnotationVisitor
{
    typedef AnnotationSelector ThisType;
    typedef Aspose::Pdf::Annotations::IAnnotationVisitor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The list of selected objects.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Annotation>>> get_Selected();
    
    /// <summary>
    /// Initializes new instance of the AnnotationSelector class.
    /// </summary>
    AnnotationSelector();
    
    /// <summary>
    /// Select link annotation if AnnotationSelector was initialized with LinkAnnotation object.
    /// </summary>
    /// <param name="link">
    /// LinkAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<LinkAnnotation> link);
    
    /// <summary>
    /// Initializes new <see cref="AnnotationSelector"/> object.
    /// </summary>
    /// <param name="annotation">
    /// Annotation to be selected. 
    /// This object only describes some characteristics we want found annotations to have, e.g. the type of annotation.
    /// </param>
    AnnotationSelector(System::SharedPtr<Annotation> annotation);
    
    /// <summary>
    /// Select attachment annotation if AnnotationSelector was initialized with FileAttachmentAnnotation object.
    /// </summary>
    /// <param name="attachment">
    /// FileAttachmentAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<FileAttachmentAnnotation> attachment);
    /// <summary>
    /// Select text annotation if AnnotationSelector was initialized with TextAnnotation object.
    /// </summary>
    /// <param name="text">
    /// TextAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<TextAnnotation> text);
    /// <summary>
    /// Select redact annotation if AnnotationSelector was initialized with RedactAnnotation object.
    /// </summary>
    /// <param name="redact">RedactAnnotation object for selecting.</param>
    void Visit(System::SharedPtr<RedactionAnnotation> redact);
    /// <summary>
    /// Select freetext annotation if AnnotationSelector was initialized with FreeTextAnnotation object.
    /// </summary>
    /// <param name="freetext">
    /// FreeTextAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<FreeTextAnnotation> freetext);
    /// <summary>
    /// Select attachment annotation if AnnotationSelector was initialized with FreeTextAnnotation object.
    /// </summary>
    /// <param name="highlight">
    /// HighlightAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<HighlightAnnotation> highlight);
    /// <summary>
    /// Select underline annotation if AnnotationSelector was initialized with UnderlineAnnotation object.
    /// </summary>
    /// <param name="underline">
    /// UnderlineAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<UnderlineAnnotation> underline);
    /// <summary>
    /// Select strikeOut annotation if AnnotationSelector was initialized with StrikeOutAnnotation object.
    /// </summary>
    /// <param name="strikeOut">
    /// StrikeOutAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<StrikeOutAnnotation> strikeOut);
    /// <summary>
    /// Select squiggly annotation if AnnotationSelector was initialized with SquigglyAnnotation object.
    /// </summary>
    /// <param name="squiggly">
    /// SquigglyAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<SquigglyAnnotation> squiggly);
    /// <summary>
    /// Select popup annotation if AnnotationSelector was initialized with PopupAnnotation object.
    /// </summary>
    /// <param name="popup">
    /// PopupAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<PopupAnnotation> popup);
    /// <summary>
    /// Select line annotation if AnnotationSelector was initialized with LineAnnotation object.
    /// </summary>
    /// <param name="line">
    /// LineAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<LineAnnotation> line);
    /// <summary>
    /// Select circle annotation if AnnotationSelector was initialized with CircleAnnotation object.
    /// </summary>
    /// <param name="circle">
    /// CircleAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<CircleAnnotation> circle);
    /// <summary>
    /// Select square annotation if AnnotationSelector was initialized with SquareAnnotation object.
    /// </summary>
    /// <param name="square">
    /// SquareAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<SquareAnnotation> square);
    /// <summary>
    /// Select ink annotation if AnnotationSelector was initialized with InkAnnotation object.
    /// </summary>
    /// <param name="ink">
    /// InkAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<InkAnnotation> ink);
    /// <summary>
    /// Select polyline annotation if AnnotationSelector was initialized with PolylineAnnotation object.
    /// </summary>
    /// <param name="polyline">
    /// PolylineAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<PolylineAnnotation> polyline);
    /// <summary>
    /// Select polygon annotation if AnnotationSelector was initialized with PolygonAnnotation object.
    /// </summary>
    /// <param name="polygon">
    /// PolygonAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<PolygonAnnotation> polygon);
    /// <summary>
    /// Select caret annotation if AnnotationSelector was initialized with CaretAnnotation object.
    /// </summary>
    /// <param name="caret">
    /// CaretAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<CaretAnnotation> caret);
    /// <summary>
    /// Select stamp annotation if AnnotationSelector was initialized with StampAnnotation object.
    /// </summary>
    /// <param name="stamp">
    /// StampAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<StampAnnotation> stamp);
    /// <summary>
    /// Select widget annotation if AnnotationSelector was initialized with WidgetAnnotation object.
    /// </summary>
    /// <param name="widget">
    /// WidgetAnnotation object for selecting.
    /// </param>
    void Visit(System::SharedPtr<WidgetAnnotation> widget);
    /// <summary>
    /// Select watermark annotation if AnnotationSelector was initialized with WatermarkAnnotation object.
    /// </summary>
    /// <param name="watermark">WatermarkAnnotation for selecting.</param>
    void Visit(System::SharedPtr<WatermarkAnnotation> watermark);
    /// <summary>
    /// Select movie annotation if AnnotationSelector was initialized with MovieAnnotation object.
    /// </summary>
    /// <param name="movie">MovieAnnotation object for selecting.</param>
    void Visit(System::SharedPtr<MovieAnnotation> movie);
    /// <summary>
    /// Select movie annotation if AnnotationSelector was initialized with RichMedia annotation object.
    /// </summary>
    /// <param name="richMedia">RichMedia annotation.</param>
    void Visit(System::SharedPtr<RichMediaAnnotation> richMedia);
    /// <summary>
    /// Select screen annotation if AnnotationSelector was initialized with ScreenAnnotation object.
    /// </summary>
    /// <param name="screen">ScreenAnnotation object for selecting.</param>
    void Visit(System::SharedPtr<ScreenAnnotation> screen);
    /// <summary>
    /// Select PDF3D annotation if AnnotationSelector was initialized with PDF3DAnnotation object.
    /// </summary>
    /// <param name="pdf3D">PDF3DAnnotation object for selecting.</param>
    void Visit(System::SharedPtr<PDF3DAnnotation> pdf3D);
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Annotation>>> selected;
    System::SharedPtr<Annotation> annotation;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


