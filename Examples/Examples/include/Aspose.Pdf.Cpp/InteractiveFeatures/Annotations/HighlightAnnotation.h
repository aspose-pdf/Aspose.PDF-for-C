#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/collections/list.h>
#include <system/collections/icomparer.h>
#include <system/array.h>

#include "Point.h"
#include "InteractiveFeatures/Annotations/TextMarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class HighlightAnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a highlight annotation that highlights a range of text in the document.
/// </summary>
class ASPOSE_PDF_SHARED_API HighlightAnnotation FINAL : public Aspose::Pdf::Annotations::TextMarkupAnnotation
{
    typedef HighlightAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::TextMarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::HighlightAnnotationTests;
    
private:

    class PointComparer : public System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Point>>
    {
        typedef PointComparer ThisType;
        typedef System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Point>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t Compare(System::SharedPtr<Point> x, System::SharedPtr<Point> y) const;
        
    };
    
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new Highlight annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    HighlightAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    
    /// <summary>
    /// Ititializes Highlight annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    HighlightAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    virtual bool IsBackground();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    
private:

    static System::ArrayPtr<System::SharedPtr<Point>> Normalize(System::ArrayPtr<System::SharedPtr<Point>> points);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


