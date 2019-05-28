#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class InkAnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class CapStyle; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a freehand "scribble" composed of one or more disjoint paths.
/// </summary>
class ASPOSE_PDF_SHARED_API InkAnnotation FINAL : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef InkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::InkAnnotationTests;
    
public:

    /// <summary>
    /// Style of ink annotation line endings.
    /// </summary>
    Aspose::Pdf::Annotations::CapStyle get_CapStyle();
    /// <summary>
    /// Style of ink annotation line endings.
    /// </summary>
    void set_CapStyle(Aspose::Pdf::Annotations::CapStyle value);
    /// <summary>
    /// Gets or sets list of gestures that are independent lines which are represented by Point[] arrays.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> get_InkList();
    /// <summary>
    /// Gets or sets list of gestures that are independent lines which are represented by Point[] arrays.
    /// </summary>
    void set_InkList(System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> value);
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
    /// Constructor for Ink annotation for Generator.
    /// </summary>
    /// <param name="document">Document where ink annotation will be created.</param>
    /// <param name="inkList">An array of Point[] arrays, each representing a stroked path.</param>
    InkAnnotation(System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> inkList);
    /// <summary>
    /// Creates new Ink annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="inkList">An array of Point[] arrays, each representing a stroked path.</param>
    InkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> inkList);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes Ink annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    InkAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static const System::String CapStyleEntry;
    Aspose::Pdf::Annotations::CapStyle _capStyle;
    
    System::SharedPtr<Rectangle> CalculateRect();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


