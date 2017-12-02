#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_FileAttachmentAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_FileAttachmentAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class FileAttachmentAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class FileIcon; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class describes file attachment annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API FileAttachmentAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef FileAttachmentAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::FileAttachmentAnnotationTests;
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    /// <summary>
    /// The specification of the file associated with this annotation.
    /// </summary>
    System::SharedPtr<FileSpecification> get_File();
    /// <summary>
    /// The specification of the file associated with this annotation.
    /// </summary>
    void set_File(System::SharedPtr<FileSpecification> value);
    /// <summary>
    /// Gets or sets icon that shall be used in displaying annotation.
    /// </summary>
    FileIcon get_Icon();
    /// <summary>
    /// Gets or sets icon that shall be used in displaying annotation.
    /// </summary>
    void set_Icon(FileIcon value);
    /// <summary>
    /// Gets or sets icon's opacity from 0 to 1: 0 - completely transparant, 1 - completely opaque.
    /// </summary>
    double get_Opacity();
    /// <summary>
    /// Gets or sets icon's opacity from 0 to 1: 0 - completely transparant, 1 - completely opaque.
    /// </summary>
    void set_Opacity(double value);
    
    /// <summary>
    /// Accepts visitor object to process annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new FileAttachment annotation on the specified page.
    /// </summary>
    /// <param name="page">Document's page where annotation should be created.</param>
    /// <param name="rect">Required rectangle that sets annotation's border.</param>
    /// <param name="fileSpec">Describes the file that shoud be bound with the annotation.</param>
    FileAttachmentAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<FileSpecification> fileSpec);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes FileAttachment annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    FileAttachmentAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<FileSpecification> fileSpecification;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_FileAttachmentAnnotation_h_

