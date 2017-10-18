#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_LineAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_LineAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/string.h>
#include <system/collections/list.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class LineAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class LineEnding; } } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class CaptionPosition; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Measure; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class LineIntent; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class representing line annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API LineAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef LineAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::LineAnnotationTests;
    
public:

    System::SharedPtr<Point> get_Starting();
    void set_Starting(System::SharedPtr<Point> value);
    LineEnding get_StartingStyle();
    void set_StartingStyle(LineEnding value);
    System::SharedPtr<Point> get_Ending();
    void set_Ending(System::SharedPtr<Point> value);
    LineEnding get_EndingStyle();
    void set_EndingStyle(LineEnding value);
    System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    double get_LeaderLine();
    void set_LeaderLine(double value);
    double get_LeaderLineExtension();
    void set_LeaderLineExtension(double value);
    bool get_ShowCaption();
    void set_ShowCaption(bool value);
    double get_LeaderLineOffset();
    void set_LeaderLineOffset(double value);
    System::SharedPtr<Point> get_CaptionOffset();
    void set_CaptionOffset(System::SharedPtr<Point> value);
    Aspose::Pdf::InteractiveFeatures::Annotations::CaptionPosition get_CaptionPosition();
    void set_CaptionPosition(Aspose::Pdf::InteractiveFeatures::Annotations::CaptionPosition value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> get_Measure();
    void set_Measure(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> value);
    LineIntent get_Intent();
    void set_Intent(LineIntent value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    LineAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    LineAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LineAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> _measure;
    
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
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_LineAnnotation_h_

