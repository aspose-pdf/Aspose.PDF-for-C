#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_CommonFigureAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_CommonFigureAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class CircleAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SquareAnnotation; } } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Abstract class representing common figure annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT CommonFigureAnnotation : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef CommonFigureAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::CircleAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::SquareAnnotation;
    
public:

    System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    System::SharedPtr<Rectangle> get_Frame();
    void set_Frame(System::SharedPtr<Rectangle> value);
    
protected:

    CommonFigureAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    CommonFigureAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CommonFigureAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_CommonFigureAnnotation_h_

