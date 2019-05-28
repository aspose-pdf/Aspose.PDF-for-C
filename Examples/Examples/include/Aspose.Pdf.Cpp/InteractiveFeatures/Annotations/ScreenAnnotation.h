#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// A screen annotation that specifies a region of a page upon which media clips may be played.
/// </summary>
class ASPOSE_PDF_SHARED_API ScreenAnnotation FINAL : public Aspose::Pdf::Annotations::Annotation, public Aspose::Pdf::Annotations::Annotation::ITitledAnnotation
{
    typedef ScreenAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// Gets or sets the title of the screen annotation.
    /// </summary>
    System::String get_Title();
    /// <summary>
    /// Gets or sets the title of the screen annotation.
    /// </summary>
    void set_Title(System::String value);
    /// <summary>
    /// Gets or sets an action to be performed when the annotation is activated.
    /// </summary>
    System::SharedPtr<PdfAction> get_Action();
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Creates new Screen annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="mediaFile">The path to multimedia file.</param>
    ScreenAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String mediaFile);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
protected:

    ScreenAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
private:

    /// <summary>
    /// Gets or sets an action to be performed when the annotation is activated.
    /// </summary>
    void set_Action(System::SharedPtr<PdfAction> value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


