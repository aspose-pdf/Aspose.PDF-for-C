#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/date_time.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class CaretAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class CommonFigureAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FileAttachmentAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextMarkupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class InkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PolyAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SoundAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class StampAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class ReplyType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PopupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class LineEnding; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Abstract class representing markup annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API MarkupAnnotation : public Aspose::Pdf::Annotations::Annotation, public Aspose::Pdf::Annotations::Annotation::ITitledAnnotation
{
    typedef MarkupAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::CaretAnnotation;
    friend class Aspose::Pdf::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    friend class Aspose::Pdf::Annotations::SoundAnnotation;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Annotations::TextAnnotation;
    
public:

    /// <summary>
    /// Gets a text that shall be displayed in title bar of annotation.
    /// </summary>
    System::String get_Title();
    /// <summary>
    /// Sets a text that shall be displayed in title bar of annotation.
    /// </summary>
    void set_Title(System::String value);
    /// <summary>
    /// Gets a rich text string to be displayed in the pop-up window when the annotation is opened.
    /// </summary>
    System::String get_RichText();
    /// <summary>
    /// Sets a rich text string to be displayed in the pop-up window when the annotation is opened.
    /// </summary>
    void set_RichText(System::String value);
    /// <summary>
    /// Gets date and time when annotation was created.
    /// </summary>
    System::DateTime get_CreationDate();
    /// <summary>
    /// Gets text representing desciption of the object.
    /// </summary>
    System::String get_Subject();
    /// <summary>
    /// Gets text representing desciption of the object.
    /// </summary>
    void set_Subject(System::String value);
    /// <summary>
    /// Pop-up annotation for entering or editing the text associated with this annotation.
    /// </summary>
    System::SharedPtr<PopupAnnotation> get_Popup();
    /// <summary>
    /// Pop-up annotation for entering or editing the text associated with this annotation.
    /// </summary>
    void set_Popup(System::SharedPtr<PopupAnnotation> value);
    /// <summary>
    /// Gets the constant opacity value to be used in painting the annotation.
    /// </summary>
    double get_Opacity();
    /// <summary>
    /// Sets the constant opacity value to be used in painting the annotation.
    /// </summary>
    void set_Opacity(double value);
    /// <summary>
    /// A reference to the annotation that this annotation is "in reply to".
    /// Both annotations must be on the same page of the document.
    /// </summary>
    System::SharedPtr<Annotation> get_InReplyTo();
    /// <summary>
    /// A reference to the annotation that this annotation is "in reply to".
    /// Both annotations must be on the same page of the document.
    /// </summary>
    void set_InReplyTo(System::SharedPtr<Annotation> value);
    /// <summary>
    /// A string specifying the relationship (the "reply type") between this annotation
    /// and one specified by InReplyTo.
    /// </summary>
    Aspose::Pdf::Annotations::ReplyType get_ReplyType();
    /// <summary>
    /// A string specifying the relationship (the "reply type") between this annotation
    /// and one specified by InReplyTo.
    /// </summary>
    void set_ReplyType(Aspose::Pdf::Annotations::ReplyType value);
    
    /// <summary>
    /// Constructor for markup annotation. 
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    MarkupAnnotation(System::SharedPtr<Document> document);
    
protected:

    MarkupAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    MarkupAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, exports annotation elements into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void AfterImport();
    /// <summary>
    /// When overridden in a derived class, import annotation elements from XFDF.
    /// </summary>
    /// <param name="table">Hashtable with information parsed from the XFDF file.</param>
    virtual void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    /// <summary>
    /// Drawes triangle ("arrow") whcih consists of two strokes by angles "angle1" and "angle2" to p1, p2 vector. 
    /// </summary>
    /// <param name="p1">First point.</param>
    /// <param name="p2">Second point.</param>
    /// <param name="angle1">Angle of first stroke. </param>
    /// <param name="angle2">Angle of second stroke.</param>
    /// <param name="closed">Is triangle closed.</param>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawLines(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, double angle1, double angle2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSlash(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawButt(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2);
    double GetEndingRadius();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawRArrow(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawArrow(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSquare(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawDiamond(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircle(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawLineEnding(System::SharedPtr<Point> ending, System::SharedPtr<Point> starting, LineEnding endingStyle);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<PopupAnnotation> _popup;
    System::String _inReplyToName;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


