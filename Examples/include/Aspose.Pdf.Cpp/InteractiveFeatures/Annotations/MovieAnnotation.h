#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_MovieAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_MovieAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents a movie annotation that contains animated graphics and sound to be presented on the computer screen and through the speakers. When the annotation is activated, the movie is played.
/// </summary>
class ASPOSE_PDF_SHARED_API MovieAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation, public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::ITitledAnnotation
{
    typedef MovieAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    
public:

    /// <summary>
    /// Gets or sets the title of the movie annotation.
    /// </summary>
    System::String get_Title();
    /// <summary>
    /// Gets or sets the title of the movie annotation.
    /// </summary>
    void set_Title(System::String value);
    /// <summary>
    /// Gets or sets a file specification identifying a self-describing movie file.
    /// </summary>
    System::SharedPtr<FileSpecification> get_File();
    /// <summary>
    /// Gets or sets a file specification identifying a self-describing movie file.
    /// </summary>
    void set_File(System::SharedPtr<FileSpecification> value);
    /// <summary>
    /// Gets or sets the width and height of the movie�s bounding box, in pixels, specified as [ width height ].
    /// </summary>
    System::SharedPtr<Point> get_Aspect();
    /// <summary>
    /// Gets or sets the width and height of the movie�s bounding box, in pixels, specified as [ width height ].
    /// </summary>
    void set_Aspect(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Creates new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="movieFile">A movie file to be played when the annotation is activated.</param>
    MovieAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String movieFile);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
protected:

    MovieAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<FileSpecification> _fileSpec;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_MovieAnnotation_h_

