#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_FileAttachmentAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_FileAttachmentAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    System::SharedPtr<FileSpecification> get_File();
    void set_File(System::SharedPtr<FileSpecification> value);
    FileIcon get_Icon();
    void set_Icon(FileIcon value);
    double get_Opacity();
    void set_Opacity(double value);
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    FileAttachmentAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<FileSpecification> fileSpec);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    FileAttachmentAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FileAttachmentAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<FileSpecification> fileSpecification;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_FileAttachmentAnnotation_h_

