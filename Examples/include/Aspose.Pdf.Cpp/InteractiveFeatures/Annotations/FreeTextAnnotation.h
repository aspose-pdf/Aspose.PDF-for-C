#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_FreeTextAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_FreeTextAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/string.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class LineEnding; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DefaultAppearance; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextStyle; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class Justification; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class FreeTextIntent; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents a free text annotation that displays text directly on the page. Unlike an ordinary text annotation, a free text annotation has no open or closed state; instead of being displayed in a pop-up window, the text is always visible.
/// </summary>
class ASPOSE_PDF_SHARED_API FreeTextAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef FreeTextAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::FreeTextAnnotationTests;
    
public:

    /// <summary>
    /// Gets or sets line ending style for line starting point.
    /// </summary>
    LineEnding get_StartingStyle();
    /// <summary>
    /// Gets or sets line ending style for line starting point.
    /// </summary>
    void set_StartingStyle(LineEnding value);
    /// <summary>
    /// Gets or sets line ending style for line ending point.
    /// </summary>
    LineEnding get_EndingStyle();
    /// <summary>
    /// Gets or sets line ending style for line ending point.
    /// </summary>
    void set_EndingStyle(LineEnding value);
    /// <summary>
    /// Gets or set a code specifying the form of quadding (justification) to be used in displaying the annotation�s text.
    /// </summary>
    Aspose::Pdf::InteractiveFeatures::Justification get_Justification();
    /// <summary>
    /// Gets or set a code specifying the form of quadding (justification) to be used in displaying the annotation�s text.
    /// </summary>
    void set_Justification(Aspose::Pdf::InteractiveFeatures::Justification value);
    /// <summary>
    /// Gets or sets the default appearance string to be used in formatting the text.
    /// </summary>
    System::String get_DefaultAppearance();
    /// <summary>
    /// Gets or sets the default appearance string to be used in formatting the text.
    /// </summary>
    void set_DefaultAppearance(System::String value);
    /// <summary>
    /// Object which represents default appearance of FreeText annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> get_DefaultAppearanceObject();
    /// <summary>
    /// Gets or sets the intent of the free text annotation.
    /// </summary>
    FreeTextIntent get_Intent();
    /// <summary>
    /// Gets or sets the intent of the free text annotation.
    /// </summary>
    void set_Intent(FreeTextIntent value);
    /// <summary>
    /// Gets or sets a default style string.
    /// </summary>
    System::String get_DefaultStyle();
    /// <summary>
    /// Gets or sets a default style string.
    /// </summary>
    void set_DefaultStyle(System::String value);
    /// <summary>
    /// Gets or sets style of the text in appearance. when text style is changed, text appearance is updated.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::TextStyle> get_TextStyle();
    /// <summary>
    /// Gets or sets style of the text in appearance. when text style is changed, text appearance is updated.
    /// </summary>
    void set_TextStyle(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::TextStyle> value);
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
    /// Creates new FreeText annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="appearance">The default appearance to be used in formatting the text.</param>
    FreeTextAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> appearance);
    
protected:

    /// <summary>
    /// Returns internal rectnagle of annotation, i.e. rectangle recalculated according to RD entry of annotation
    /// </summary>
    virtual System::SharedPtr<Rectangle> get_InnerRect();
    
    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes FreeText annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    FreeTextAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Create frame.
    /// </summary>
    /// <param name="parametes">Appearance parameters.</param>
    /// <param name="annotation">The annotation.</param>
    /// <returns></returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateFrame(System::SharedPtr<Annotation::AppearanceParameters> parametes, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> _defaultAppearance;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::TextStyle> _style;
    
    /// <summary>
    /// Returns true if annotation has callout line parameters array. 
    /// </summary>
    bool get_HasCallout();
    
    System::String ArrayToString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> ParseNumberArray(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::String array);
    /// <summary>
    /// Sets text of the annotation and changes appearance .
    /// </summary>
    /// <param name="contents"></param>
    /// Obsolete - to be removed. 
    void SetText(System::String contents);
    /// <summary>
    /// Draws arrow on the edge of line. Stroke is array with start and end points of the line. 
    /// </summary>
    /// <param name="stroke"></param>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawArrow(System::ArrayPtr<System::ArrayPtr<double>> stroke);
    /// <summary>
    /// Draws callout line according to CL parameters.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCalloutLine();
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_FreeTextAnnotation_h_

