#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Point; } }
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
/// Represents a movie annotation that contains animated graphics and sound to be presented on the computer screen and through the speakers. When the annotation is activated, the movie is played.
/// </summary>
class ASPOSE_PDF_SHARED_API MovieAnnotation FINAL : public Aspose::Pdf::Annotations::Annotation, public Aspose::Pdf::Annotations::Annotation::ITitledAnnotation
{
    typedef MovieAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    
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
    /// Gets or sets a flag or stream specifying whether and how a poster image representing the movie shall be displayed. If true, the poster image shall be retrieved from the movie file; if it is false, no poster shall be displayed.
    /// </summary>
    bool get_Poster();
    /// <summary>
    /// Gets or sets a flag or stream specifying whether and how a poster image representing the movie shall be displayed. If true, the poster image shall be retrieved from the movie file; if it is false, no poster shall be displayed.
    /// </summary>
    void set_Poster(bool value);
    /// <summary>
    /// Gets or sets the width and height of the movie�s bounding box, in pixels.
    /// </summary>
    System::SharedPtr<Point> get_Aspect();
    /// <summary>
    /// Gets or sets the width and height of the movie�s bounding box, in pixels.
    /// </summary>
    void set_Aspect(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets or sets the number of degrees by which the movie shall be rotated clockwise relative to the page. The value shall be a multiple of 90.
    /// </summary>
    int32_t get_Rotate();
    /// <summary>
    /// Gets or sets the number of degrees by which the movie shall be rotated clockwise relative to the page. The value shall be a multiple of 90.
    /// </summary>
    void set_Rotate(int32_t value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Constructor for using with Generator.
    /// </summary>
    /// <param name="document">Document where movie annotation will be created.</param>
    /// <param name="movieFile">Name of movie file. </param>
    MovieAnnotation(System::SharedPtr<Document> document, System::String movieFile);
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
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_Movie();
    
    void Initialize();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


