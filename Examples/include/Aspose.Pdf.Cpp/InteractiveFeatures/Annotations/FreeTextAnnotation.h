#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_writer.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <drawing/color.h>

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Annotations { class FreeTextAnnotationTests; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class LineEnding; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class Justification; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class FreeTextIntent; } } }
namespace Aspose { namespace Pdf { enum class Rotation; } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DefaultAppearance; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextStyle; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

//TODO: 1. RichText value should have priority over simple text (i.e. if RichText is set create appearance should use Rich Text). Should be checked how RichText works with rotations. 
// 2. fontSize should be used instead of TExtStyle.FontSize, this is more precisely
/// <summary>
/// Represents a free text annotation that displays text directly on the page. Unlike an ordinary text annotation, a free text annotation has no open or closed state; instead of being displayed in a pop-up window, the text is always visible.
/// </summary>
class ASPOSE_PDF_SHARED_API FreeTextAnnotation FINAL : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef FreeTextAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::FreeTextAnnotationTests;
    
private:

    class Word : public System::Object
    {
        typedef Word ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Text();
        bool get_IsWholeWord();
        
        Word(System::String text, bool isWholeWord);
        
    private:
    
        System::String _text;
        bool _isWholeWord;
        
    };
    
    
public:

    /// <summary>
    /// Gets line ending style for line ending point.
    /// OThis property is obsolete, please use EndingStyle. 
    /// </summary>
    LineEnding get_StartingStyle();
    /// <summary>
    /// Sets line ending style for line ending point.
    /// OThis property is obsolete, please use EndingStyle. 
    /// </summary>
    void set_StartingStyle(LineEnding value);
    /// <summary>
    /// Gets line ending style for line ending point.
    /// </summary>
    LineEnding get_EndingStyle();
    /// <summary>
    /// Sets line ending style for line ending point.
    /// </summary>
    void set_EndingStyle(LineEnding value);
    /// <summary>
    /// Gets or set a code specifying the form of quadding (justification) to be used in displaying the annotation�s text.
    /// </summary>
    Aspose::Pdf::Annotations::Justification get_Justification();
    /// <summary>
    /// Gets or set a code specifying the form of quadding (justification) to be used in displaying the annotation�s text.
    /// </summary>
    void set_Justification(Aspose::Pdf::Annotations::Justification value);
    /// <summary>
    /// Gets the default appearance string to be used in formatting the text.
    /// </summary>
    System::String get_DefaultAppearance();
    /// <summary>
    /// Sets the default appearance string to be used in formatting the text.
    /// </summary>
    void set_DefaultAppearance(System::String value);
    /// <summary>
    /// Object which represents default appearance of FreeText annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> get_DefaultAppearanceObject();
    /// <summary>
    /// Gets the intent of the free text annotation.
    /// </summary>
    FreeTextIntent get_Intent();
    /// <summary>
    /// Sets the intent of the free text annotation.
    /// </summary>
    void set_Intent(FreeTextIntent value);
    /// <summary>
    /// Gets a default style string.
    /// </summary>
    System::String get_DefaultStyle();
    /// <summary>
    /// Sets a default style string.
    /// </summary>
    void set_DefaultStyle(System::String value);
    /// <summary>
    /// Gets style of the text in appearance. when text style is changed, text appearance is updated.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::TextStyle> get_TextStyle();
    /// <summary>
    /// Sets style of the text in appearance. when text style is changed, text appearance is updated.
    /// </summary>
    void set_TextStyle(System::SharedPtr<Aspose::Pdf::Annotations::TextStyle> value);
    /// <summary>
    /// Angle of annotation rotation.
    /// </summary>
    Rotation get_Rotate();
    /// <summary>
    /// Angle of annotation rotation.
    /// </summary>
    void set_Rotate(Rotation value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    /// <summary>
    /// Array of point specifying callout line.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_Callout();
    /// <summary>
    /// Array of point specifying callout line.
    /// </summary>
    void set_Callout(System::ArrayPtr<System::SharedPtr<Point>> value);
    
    /// <summary>
    /// Constructor to use with Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    /// <param name="appearance">Default Appearance</param>
    FreeTextAnnotation(System::SharedPtr<Document> document, System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> appearance);
    
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
    FreeTextAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> appearance);
    
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
    
    /// <summary>
    /// This method must be overriden to return true in classes where apperance generation is supported. 
    /// </summary>
    /// <returns></returns>
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    virtual void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Create frame.
    /// </summary>
    /// <param name="parametes">Appearance parameters.</param>
    /// <param name="annotation">The annotation.</param>
    /// <returns></returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateFrame(System::SharedPtr<Annotation::AppearanceParameters> parametes, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> _defaultAppearance;
    System::SharedPtr<Aspose::Pdf::Annotations::TextStyle> _style;
    Rotation _rotate;
    
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
    /// Draws callout line according to CL parameters.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCalloutLine();
    bool IsValidXml(System::String s);
    System::Drawing::Color GetDefaultStrokeColor();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawRichText();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSimpleText(System::String value, System::SharedPtr<XForm> appearance);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


