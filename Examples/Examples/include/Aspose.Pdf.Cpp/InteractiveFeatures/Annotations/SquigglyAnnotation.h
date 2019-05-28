#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/TextMarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class SquigglyAnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents the squiggly annotation that appears as a jagged underline in the text of a document.
/// </summary>
class ASPOSE_PDF_SHARED_API SquigglyAnnotation FINAL : public Aspose::Pdf::Annotations::TextMarkupAnnotation
{
    typedef SquigglyAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::TextMarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::SquigglyAnnotationTests;
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new Squiggly annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    SquigglyAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    
    /// <summary>
    /// Ititializes Squiggly annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    SquigglyAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


