#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_StampAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_StampAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class StampAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class StampIcon; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XImage; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

///<summary>
/// Represents rubber stamp annotation. 
/// This type of annotation displays text or graphics intended to look as if they were stamped on the page with a rubber stamp.
/// </summary>
/// <example>
/// Next code snippet demonstrates how to add 2 stamps into the first pdf document page.
/// Input document comes from inFile and changes are saved into the outFile.
/// The first stamp has icon NotForPublicRelease and the second comes with image from rubber.jpg.
/// <code></code>
/// </example>
class ASPOSE_PDF_SHARED_API StampAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef StampAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::StampAnnotationTests;
    
public:

    /// <summary>
    /// Gets or sets icon for rubber stamp.
    /// </summary>
    StampIcon get_Icon();
    /// <summary>
    /// Gets or sets icon for rubber stamp.
    /// </summary>
    void set_Icon(StampIcon value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    /// <summary>
    /// Gets or sets image of the annotation.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Image();
    /// <summary>
    /// Gets or sets image of the annotation.
    /// </summary>
    void set_Image(System::SharedPtr<System::IO::Stream> value);
    
    /// <summary>
    /// Acepts <see cref="AnnotationSelector"/> visitor when browsing annotation collection.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new Stamp annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    StampAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes Stamp annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    StampAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::IO::Stream> _image;
    
    System::SharedPtr<XImage> GetXImage();
    System::SharedPtr<System::IO::Stream> ExtractImage();
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_StampAnnotation_h_

