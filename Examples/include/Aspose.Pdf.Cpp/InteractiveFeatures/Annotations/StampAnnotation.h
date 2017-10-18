#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_StampAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_StampAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
/// <code lang="C#">
/// Document document = new Document(inFile);
/// StampAnnotation stamp1 = new StampAnnotation(StampIcon.NotForPublicRelease);
///	stamp1.Rect = new Rectangle(100, 100, 120, 120)
///	document.Pages[1].Annotations.Add(stamp1);
/// StampAnnotation stamp2 = new StampAnnotation(new FileStream("rubber.jpg", FileMode.Open));
///	stamp2.Rect = new Rectangle(200, 200, 220, 220)
///	document.Pages[1].Annotations.Add(stamp2);
/// document.Save(outFile);
/// </code>
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

    StampIcon get_Icon();
    void set_Icon(StampIcon value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    System::SharedPtr<System::IO::Stream> get_Image();
    void set_Image(System::SharedPtr<System::IO::Stream> value);
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    StampAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    StampAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "StampAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

