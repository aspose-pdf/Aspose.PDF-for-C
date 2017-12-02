#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_LinkAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_LinkAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class IAppointment; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class HighlightingMode; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents either a hypertext link to a destination elsewhere in the document or an action to be performed.
/// </summary>
class ASPOSE_PDF_SHARED_API LinkAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation
{
    typedef LinkAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    
public:

    /// <summary>
    /// An action to be performed when the link annotation is activated.
    /// </summary>
    System::SharedPtr<PdfAction> get_Action();
    /// <summary>
    /// An action to be performed when the link annotation is activated.
    /// </summary>
    void set_Action(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// A destination to be displayed when the annotation is activated.
    /// </summary>
    System::SharedPtr<IAppointment> get_Destination();
    /// <summary>
    /// A destination to be displayed when the annotation is activated.
    /// </summary>
    void set_Destination(System::SharedPtr<IAppointment> value);
    /// <summary>
    /// The visual effect to be used when the mouse button is pressed or held down inside its active area.
    /// </summary>
    HighlightingMode get_Highlighting();
    /// <summary>
    /// The visual effect to be used when the mouse button is pressed or held down inside its active area.
    /// </summary>
    void set_Highlighting(HighlightingMode value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new Link annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    LinkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    /// <summary>
    /// Ititializes Link annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">Document.</param>
    LinkAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<PdfAction> _action;
    System::SharedPtr<IAppointment> _destination;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_LinkAnnotation_h_

