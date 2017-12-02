#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_PolylineAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_PolylineAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> get_Measure();
    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    void set_Measure(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new Polyline annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="vertices">An array of polygon vertices points.</param>
    PolylineAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::ArrayPtr<System::SharedPtr<Point>> vertices);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    
    /// <summary>
    /// Ititializes Polyline annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    PolylineAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Measure> _measure;
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_PolylineAnnotation_h_

