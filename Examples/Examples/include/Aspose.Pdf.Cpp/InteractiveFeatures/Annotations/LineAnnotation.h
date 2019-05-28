#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class LineAnnotationTests; } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class LineEnding; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class CaptionPosition; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Measure; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class LineIntent; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing line annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API LineAnnotation FINAL : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef LineAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::LineAnnotationTests;
    
public:

    /// <summary>
    /// Gets or sets starting point of line.
    /// </summary>
    System::SharedPtr<Point> get_Starting();
    /// <summary>
    /// Gets or sets starting point of line.
    /// </summary>
    void set_Starting(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets or sets line ending style for line starting point.
    /// </summary>
    LineEnding get_StartingStyle();
    /// <summary>
    /// Gets or sets line ending style for line starting point.
    /// </summary>
    void set_StartingStyle(LineEnding value);
    /// <summary>
    /// Gets or sets line ending point.
    /// </summary>
    System::SharedPtr<Point> get_Ending();
    /// <summary>
    /// Gets or sets line ending point.
    /// </summary>
    void set_Ending(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets or sets ending style for end point of line.
    /// </summary>
    LineEnding get_EndingStyle();
    /// <summary>
    /// Gets or sets ending style for end point of line.
    /// </summary>
    void set_EndingStyle(LineEnding value);
    /// <summary>
    /// Gets or sets interior color of the annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    /// <summary>
    /// Gets or sets interior color of the annotation.
    /// </summary>
    void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets or sets leader line length.
    /// </summary>
    double get_LeaderLine();
    /// <summary>
    /// Gets or sets leader line length.
    /// </summary>
    void set_LeaderLine(double value);
    /// <summary>
    /// Gets or sets length of leader line extension.
    /// </summary>
    double get_LeaderLineExtension();
    /// <summary>
    /// Gets or sets length of leader line extension.
    /// </summary>
    void set_LeaderLineExtension(double value);
    /// <summary>
    /// Gets or sets boolean flag which determinies is contents must be shown as caption.
    /// </summary>
    bool get_ShowCaption();
    /// <summary>
    /// Gets or sets boolean flag which determinies is contents must be shown as caption.
    /// </summary>
    void set_ShowCaption(bool value);
    /// <summary>
    /// Gets or sets leader line offset.
    /// </summary>
    double get_LeaderLineOffset();
    /// <summary>
    /// Gets or sets leader line offset.
    /// </summary>
    void set_LeaderLineOffset(double value);
    /// <summary>
    /// Gets or sets caption text offset from its normal position.
    /// </summary>
    System::SharedPtr<Point> get_CaptionOffset();
    /// <summary>
    /// Gets or sets caption text offset from its normal position.
    /// </summary>
    void set_CaptionOffset(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets or sets annotation caption position.
    /// </summary>
    Aspose::Pdf::Annotations::CaptionPosition get_CaptionPosition();
    /// <summary>
    /// Gets or sets annotation caption position.
    /// </summary>
    void set_CaptionPosition(Aspose::Pdf::Annotations::CaptionPosition value);
    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::Measure> get_Measure();
    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    void set_Measure(System::SharedPtr<Aspose::Pdf::Annotations::Measure> value);
    /// <summary>
    /// Gets or sets the intent of the line annotation.
    /// </summary>
    LineIntent get_Intent();
    /// <summary>
    /// Gets or sets the intent of the line annotation.
    /// </summary>
    void set_Intent(LineIntent value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor to annotation processing.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Constructor for using with Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    /// <param name="start">Starting point. </param>
    /// <param name="end">Ending point. </param>
    LineAnnotation(System::SharedPtr<Document> document, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    /// <summary>
    /// Creates new Line annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="start">A point, specifying the starting coordinate of the line.</param>
    /// <param name="end">A point, specifying the ending coordinate of the line.</param>
    LineAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    
    /// <summary>
    /// Ititializes Line annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    LineAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::Measure> _measure;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawLines(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, double angle1, double angle2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSlash(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawButt(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2);
    double GetEndingRadius();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawRArrow(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawArrow(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSquare(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawDiamond(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircle(System::SharedPtr<Point> p1);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


