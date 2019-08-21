#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class LinkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FileAttachmentAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextAnnotation; } } }
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
namespace Aspose { namespace Pdf { namespace Annotations { class MovieAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class ScreenAnnotation; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Defines Visitor for visiting different document annotations.
/// </summary>
class ASPOSE_PDF_SHARED_API IAnnotationVisitor : public System::Object
{
    typedef IAnnotationVisitor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Visit/select link annotation.
    /// </summary>
    /// <param name="link">
    /// LinkAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<LinkAnnotation> link) = 0;
    /// <summary>
    /// Visit/select attachment annotation.
    /// </summary>
    /// <param name="attachment">
    /// FileAttachmentAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<FileAttachmentAnnotation> attachment) = 0;
    /// <summary>
    /// Visit/select text annotation.
    /// </summary>
    /// <param name="text">
    /// TextAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<TextAnnotation> text) = 0;
    /// <summary>
    /// Visit/select freetext annotation.
    /// </summary>
    /// <param name="freetext">
    /// FreeTextAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<FreeTextAnnotation> freetext) = 0;
    /// <summary>
    /// Visit/select highlight annotation.
    /// </summary>
    /// <param name="highlight">
    /// HighlightAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<HighlightAnnotation> highlight) = 0;
    /// <summary>
    /// Visit/select underline annotation.
    /// </summary>
    /// <param name="underline">
    /// UnderlineAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<UnderlineAnnotation> underline) = 0;
    /// <summary>
    /// Visit/select strikeOut annotation.
    /// </summary>
    /// <param name="strikeOut">
    /// StrikeOutAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<StrikeOutAnnotation> strikeOut) = 0;
    /// <summary>
    /// Visit/select squiggly annotation.
    /// </summary>
    /// <param name="squiggly">
    /// SquigglyAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<SquigglyAnnotation> squiggly) = 0;
    /// <summary>
    /// Visit/select popup annotation.
    /// </summary>
    /// <param name="popup">
    /// PopupAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<PopupAnnotation> popup) = 0;
    /// <summary>
    /// Visit/select line annotation.
    /// </summary>
    /// <param name="line">
    /// LineAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<LineAnnotation> line) = 0;
    /// <summary>
    /// Visit/select circle annotation.
    /// </summary>
    /// <param name="circle">
    /// CircleAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<CircleAnnotation> circle) = 0;
    /// <summary>
    /// Visit/select square annotation.
    /// </summary>
    /// <param name="square">
    /// SquareAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<SquareAnnotation> square) = 0;
    /// <summary>
    /// Visit/select ink annotation.
    /// </summary>
    /// <param name="ink">
    /// InkAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<InkAnnotation> ink) = 0;
    /// <summary>
    /// Visit/select polyline annotation.
    /// </summary>
    /// <param name="polyline">
    /// PolylineAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<PolylineAnnotation> polyline) = 0;
    /// <summary>
    /// Visit/select polygon annotation.
    /// </summary>
    /// <param name="polygon">
    /// PolygonAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<PolygonAnnotation> polygon) = 0;
    /// <summary>
    /// Visit/select caret annotation.
    /// </summary>
    /// <param name="caret">
    /// CaretAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<CaretAnnotation> caret) = 0;
    /// <summary>
    /// Visit/select stamp annotation.
    /// </summary>
    /// <param name="stamp">
    /// StampAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<StampAnnotation> stamp) = 0;
    /// <summary>
    /// Visit/select widget annotation.
    /// </summary>
    /// <param name="widget">
    /// WidgetAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<WidgetAnnotation> widget) = 0;
    /// <summary>
    /// Visit/select movie annotation.
    /// </summary>
    /// <param name="movie">
    /// MovieAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<MovieAnnotation> movie) = 0;
    /// <summary>
    /// Visit/select screen annotation.
    /// </summary>
    /// <param name="screen">
    /// ScreenAnnotation object example/template.
    /// </param>
    virtual void Visit(System::SharedPtr<ScreenAnnotation> screen) = 0;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


