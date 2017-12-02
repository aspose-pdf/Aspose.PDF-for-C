#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_CaretAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_CaretAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class CaretAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class CaretSymbol; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class representing Caret annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API CaretAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef CaretAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::CaretAnnotationTests;
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    /// <summary>
    /// Gets or sets caret rectangle.
    /// </summary>
    System::SharedPtr<Rectangle> get_Frame();
    /// <summary>
    /// Gets or sets caret rectangle.
    /// </summary>
    void set_Frame(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Gets or sets symbol associated with caret.
    /// </summary>
    /// <see cref="CaretSymbol"/>
    CaretSymbol get_Symbol();
    /// <summary>
    /// Gets or sets symbol associated with caret.
    /// </summary>
    /// <see cref="CaretSymbol"/>
    void set_Symbol(CaretSymbol value);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new Caret annotation on the specified page.
    /// </summary>
    /// <param name="page">Document's page where annotation should be created.</param>
    /// <param name="rect">Required rectangle that sets annotation's border.</param>
    CaretAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes Caret annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    CaretAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_CaretAnnotation_h_

