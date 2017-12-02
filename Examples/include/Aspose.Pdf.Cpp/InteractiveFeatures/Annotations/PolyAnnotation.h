#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_PolyAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_PolyAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets an array of points representing the horizontal and vertical coordinates of each vertex.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_Vertices();
    /// <summary>
    /// Gets or sets an array of points representing the horizontal and vertical coordinates of each vertex.
    /// </summary>
    void set_Vertices(System::ArrayPtr<System::SharedPtr<Point>> value);
    /// <summary>
    /// Gets or sets the interior color with which to fill the annotation�s line endings.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    /// <summary>
    /// Gets or sets the interior color with which to fill the annotation�s line endings.
    /// </summary>
    void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets or sets the style of first line ending.
    /// </summary>
    LineEnding get_StartingStyle();
    /// <summary>
    /// Gets or sets the style of first line ending.
    /// </summary>
    void set_StartingStyle(LineEnding value);
    /// <summary>
    /// Gets or sets the style of second line ending.
    /// </summary>
    LineEnding get_EndingStyle();
    /// <summary>
    /// Gets or sets the style of second line ending.
    /// </summary>
    void set_EndingStyle(LineEnding value);
    /// <summary>
    /// Gets or sets the intent of the polygon or polyline annotation.
    /// </summary>
    PolyIntent get_Intent();
    /// <summary>
    /// Gets or sets the intent of the polygon or polyline annotation.
    /// </summary>
    void set_Intent(PolyIntent value);
    
protected:

    PolyAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="vertices">An array of points representing the horizontal and vertical coordinates of each vertex.</param>
    PolyAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::ArrayPtr<System::SharedPtr<Point>> vertices);
    
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
    /// <summary>
    /// When overridden in a derived class, import annotation elements from XFDF.
    /// </summary>
    /// <param name="table">Hashtable with information parsed from the XFDF file.</param>
    virtual void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_PolyAnnotation_h_

