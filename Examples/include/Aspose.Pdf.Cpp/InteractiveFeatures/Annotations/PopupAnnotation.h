#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class MarkupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class PopupAnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class AnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents the pop-up annotation that displays text in a pop-up window for entry and editing.
/// </summary>
class ASPOSE_PDF_SHARED_API PopupAnnotation FINAL : public Aspose::Pdf::Annotations::Annotation
{
    typedef PopupAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::Tests::Annotations::PopupAnnotationTests;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationTests;
    
public:

    /// <summary>
    /// Gets a flag specifying whether the pop-up annotation should initially be displayed open.
    /// </summary>
    bool get_Open();
    /// <summary>
    /// Sets a flag specifying whether the pop-up annotation should initially be displayed open.
    /// </summary>
    void set_Open(bool value);
    /// <summary>
    /// Gets the parent annotation with which this pop-up annotation shall be associated.
    /// If this entry is present, the parent annotation�s Contents, M, C, and T entries shall override those of the pop-up annotation itself.
    /// </summary>
    System::SharedPtr<Annotation> get_Parent();
    /// <summary>
    /// Sets the parent annotation with which this pop-up annotation shall be associated.
    /// If this entry is present, the parent annotation�s Contents, M, C, and T entries shall override those of the pop-up annotation itself.
    /// </summary>
    void set_Parent(System::SharedPtr<Annotation> value);
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
    /// Constructor. for using in Generator.
    /// </summary>
    /// <param name="document">Document where new popup annotation will be created.</param>
    PopupAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Creates new Popup annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    PopupAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes Popup annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">Document.</param>
    PopupAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Annotation> _parent;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


