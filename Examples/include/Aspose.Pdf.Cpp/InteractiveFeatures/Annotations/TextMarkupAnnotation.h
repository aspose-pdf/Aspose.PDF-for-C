#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_TextMarkupAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_TextMarkupAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class HighlightAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SquigglyAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class StrikeOutAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class UnderlineAnnotation; } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Abstract base class for text markup annotations.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT TextMarkupAnnotation : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef TextMarkupAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::SquigglyAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::StrikeOutAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::UnderlineAnnotation;
    
public:

    /// <summary>
    /// Gets or sets an array of points specifying the coordinates of n quadrilaterals. Each quadrilateral encompasses a word or group of contiguous words in the text underlying the annotation.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_QuadPoints();
    /// <summary>
    /// Gets or sets an array of points specifying the coordinates of n quadrilaterals. Each quadrilateral encompasses a word or group of contiguous words in the text underlying the annotation.
    /// </summary>
    void set_QuadPoints(System::ArrayPtr<System::SharedPtr<Point>> value);
    
protected:

    TextMarkupAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    TextMarkupAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
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
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_TextMarkupAnnotation_h_

