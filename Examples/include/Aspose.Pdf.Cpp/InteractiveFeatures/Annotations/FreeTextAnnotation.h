#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_FreeTextAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_FreeTextAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    LineEnding get_StartingStyle();
    void set_StartingStyle(LineEnding value);
    LineEnding get_EndingStyle();
    void set_EndingStyle(LineEnding value);
    Aspose::Pdf::InteractiveFeatures::Justification get_Justification();
    void set_Justification(Aspose::Pdf::InteractiveFeatures::Justification value);
    System::String get_DefaultAppearance();
    void set_DefaultAppearance(System::String value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> get_DefaultAppearanceObject();
    FreeTextIntent get_Intent();
    void set_Intent(FreeTextIntent value);
    System::String get_DefaultStyle();
    void set_DefaultStyle(System::String value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::TextStyle> get_TextStyle();
    void set_TextStyle(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::TextStyle> value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    FreeTextAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> appearance);
    
protected:

    virtual System::SharedPtr<Rectangle> get_InnerRect();
    
    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    
    FreeTextAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateFrame(System::SharedPtr<Annotation::AppearanceParameters> parametes, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FreeTextAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> _defaultAppearance;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::TextStyle> _style;
    
    bool get_HasCallout();
    
    System::String ArrayToString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> ParseNumberArray(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::String array);
    void SetText(System::String contents);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawArrow(System::ArrayPtr<System::ArrayPtr<double>> stroke);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCalloutLine();
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_FreeTextAnnotation_h_

