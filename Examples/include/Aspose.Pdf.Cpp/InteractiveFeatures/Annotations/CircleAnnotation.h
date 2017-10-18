#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_CircleAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_CircleAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/string.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/CommonFigureAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class CircleAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class representing Circle annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API CircleAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::CommonFigureAnnotation
{
    typedef CircleAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::CommonFigureAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::CircleAnnotationTests;
    
public:

    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    CircleAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    
    CircleAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CircleAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<double> get_BoundFrame();
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_CircleAnnotation_h_

