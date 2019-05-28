#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PolygonAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PolylineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Measure; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class LineEnding; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class PolyIntent; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Abstract base class for poly- annotations.
/// </summary>
class ASPOSE_PDF_SHARED_API PolyAnnotation : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef PolyAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PolygonAnnotation;
    friend class Aspose::Pdf::Annotations::PolylineAnnotation;
    
public:

    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::Measure> get_Measure();
    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    void set_Measure(System::SharedPtr<Aspose::Pdf::Annotations::Measure> value);
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
    /// <param name="document">Document where annotation will be created.</param>
    /// <param name="vertices">An array of points representing the horizontal and vertical coordinates of each vertex.</param>
    PolyAnnotation(System::SharedPtr<Document> document, System::ArrayPtr<System::SharedPtr<Point>> vertices);
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
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::Measure> _measure;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


