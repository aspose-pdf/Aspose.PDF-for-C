#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_MovieAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_MovieAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_Title();
    void set_Title(System::String value);
    System::SharedPtr<FileSpecification> get_File();
    void set_File(System::SharedPtr<FileSpecification> value);
    System::SharedPtr<Point> get_Aspect();
    void set_Aspect(System::SharedPtr<Point> value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    MovieAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String movieFile);
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
protected:

    MovieAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MovieAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<FileSpecification> _fileSpec;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_MovieAnnotation_h_

