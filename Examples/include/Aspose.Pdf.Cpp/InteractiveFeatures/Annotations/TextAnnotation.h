#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class TextAnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace OriginalKit { namespace Old { namespace TestWei { class Wei_PdfContentEditor; } } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class TextIcon; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationState; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationStateModel; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a text annotation that is a �sticky note� attached to a point in the PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API TextAnnotation FINAL : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef TextAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::TextAnnotationTests;
    friend class Aspose::Pdf::Tests::OriginalKit::Old::TestWei::Wei_PdfContentEditor;
    
public:

    /// <summary>
    /// Gets or sets a flag specifying whether the annotation should initially be displayed open.
    /// </summary>
    bool get_Open();
    /// <summary>
    /// Gets or sets a flag specifying whether the annotation should initially be displayed open.
    /// </summary>
    void set_Open(bool value);
    /// <summary>
    /// Gets or sets an icon to be used in displaying the annotation.
    /// </summary>
    TextIcon get_Icon();
    /// <summary>
    /// Gets or sets an icon to be used in displaying the annotation.
    /// </summary>
    void set_Icon(TextIcon value);
    /// <summary>
    /// Gets or sets the state to which the original annotation should be set.
    /// </summary>
    AnnotationState get_State();
    /// <summary>
    /// Gets or sets the state to which the original annotation should be set.
    /// </summary>
    void set_State(AnnotationState value);
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
    /// Constructor for annotation when used in Generator.
    /// </summary>
    /// <param name="document">Document where text annotation will be created.</param>
    TextAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Creates new Text annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    TextAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    AnnotationStateModel get_StateModel();
    void set_StateModel(AnnotationStateModel value);
    
    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes Text annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    TextAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawKey();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCross();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCheck();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircle();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawComment();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawHelp();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawInsert();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawNewParagraph();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawNote();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawParagraph();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawStar();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


