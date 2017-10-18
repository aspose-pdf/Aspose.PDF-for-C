#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_TextAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_TextAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class TextAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class TextIcon; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationState; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationStateModel; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents a text annotation that is a �sticky note� attached to a point in the PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API TextAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef TextAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::TextAnnotationTests;
    
public:

    bool get_Open();
    void set_Open(bool value);
    TextIcon get_Icon();
    void set_Icon(TextIcon value);
    AnnotationState get_State();
    void set_State(AnnotationState value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    TextAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    AnnotationStateModel get_StateModel();
    void set_StateModel(AnnotationStateModel value);
    
    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    TextAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawKey();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCross();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCheck();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircle();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawComment();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawHelp();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawInsert();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawNewParagraph();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawNote();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawParagraph();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawStar();
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_TextAnnotation_h_

