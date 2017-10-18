#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_PolylineAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_PolylineAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/PolyAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class PolyLineAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Measure; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Point; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents polyline annotation that is similar to polygon, except that the first and last vertex are not implicitly connected.
/// </summary>
class ASPOSE_PDF_SHARED_API PolylineAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::PolyAnnotation
{
    typedef PolylineAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::PolyAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::PolyLineAnnotationTests;
    
public:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> get_Measure();
    void set_Measure(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    PolylineAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::ArrayPtr<System::SharedPtr<Point>> vertices);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    
    PolylineAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PolylineAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> _measure;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_PolylineAnnotation_h_

