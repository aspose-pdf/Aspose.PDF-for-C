#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_PolyAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_PolyAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolygonAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolylineAnnotation; } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class LineEnding; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class PolyIntent; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Abstract base class for poly- annotations.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT PolyAnnotation : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef PolyAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::PolygonAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::PolylineAnnotation;
    
public:

    System::ArrayPtr<System::SharedPtr<Point>> get_Vertices();
    void set_Vertices(System::ArrayPtr<System::SharedPtr<Point>> value);
    System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    LineEnding get_StartingStyle();
    void set_StartingStyle(LineEnding value);
    LineEnding get_EndingStyle();
    void set_EndingStyle(LineEnding value);
    PolyIntent get_Intent();
    void set_Intent(PolyIntent value);
    
protected:

    PolyAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    PolyAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::ArrayPtr<System::SharedPtr<Point>> vertices);
    
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PolyAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_PolyAnnotation_h_

