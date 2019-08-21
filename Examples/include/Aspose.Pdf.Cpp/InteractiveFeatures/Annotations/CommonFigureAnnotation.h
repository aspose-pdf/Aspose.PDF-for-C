#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class CircleAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SquareAnnotation; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Abstract class representing common figure annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API CommonFigureAnnotation : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef CommonFigureAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::CircleAnnotation;
    friend class Aspose::Pdf::Annotations::SquareAnnotation;
    
public:

    /// <summary>
    /// Interior color with which to fill the annotation�s rectangle or ellipse.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    /// <summary>
    /// Interior color with which to fill the annotation�s rectangle or ellipse.
    /// </summary>
    void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// The rectangle describing the numerical differences between two rectangles:
    /// the Rect entry of the annotation and the actual boundaries of the underlying square or circle.
    /// </summary>
    System::SharedPtr<Rectangle> get_Frame();
    /// <summary>
    /// The rectangle describing the numerical differences between two rectangles:
    /// the Rect entry of the annotation and the actual boundaries of the underlying square or circle.
    /// </summary>
    void set_Frame(System::SharedPtr<Rectangle> value);
    
    /// <summary>
    /// Constructor for using in Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be placed.</param>
    CommonFigureAnnotation(System::SharedPtr<Document> document);
    
protected:

    CommonFigureAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    CommonFigureAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


