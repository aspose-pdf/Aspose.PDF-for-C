#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class HighlightAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SquigglyAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class StrikeOutAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class UnderlineAnnotation; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Abstract base class for text markup annotations.
/// </summary>
class ASPOSE_PDF_SHARED_API TextMarkupAnnotation : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef TextMarkupAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Annotations::SquigglyAnnotation;
    friend class Aspose::Pdf::Annotations::StrikeOutAnnotation;
    friend class Aspose::Pdf::Annotations::UnderlineAnnotation;
    
public:

    /// <summary>
    /// Gets an array of points specifying the coordinates of n quadrilaterals. Each quadrilateral encompasses a word or group of contiguous words in the text underlying the annotation.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_QuadPoints();
    /// <summary>
    /// Sets an array of points specifying the coordinates of n quadrilaterals. Each quadrilateral encompasses a word or group of contiguous words in the text underlying the annotation.
    /// </summary>
    void set_QuadPoints(System::ArrayPtr<System::SharedPtr<Point>> value);
    
    /// <summary>
    /// Gets text under markup annotation as string.
    /// </summary>
    /// <returns>String containing text that is under markup annotation.</returns>
    System::String GetMarkedText();
    /// <summary>
    /// Gets text under markup annotation as <see cref="TextFragmentCollection"/>.
    /// </summary>
    /// <returns><see cref="TextFragmentCollection"/> containing <see cref="TextFragment"/>s that is under markup annotation.</returns>
    System::SharedPtr<Aspose::Pdf::Text::TextFragmentCollection> GetMarkedTextFragments();
    
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
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber>>> GetTextAbsorbersForMarkedText();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


