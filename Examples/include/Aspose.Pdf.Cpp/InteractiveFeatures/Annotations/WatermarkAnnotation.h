#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FixedPrint; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

class ASPOSE_PDF_SHARED_API WatermarkAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef WatermarkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// Fuxed print object of Watermark annotation. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::FixedPrint> get_FixedPrint();
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    /// <summary>
    /// Gets opacity of the annotation.
    /// </summary>
    double get_Opacity();
    /// <summary>
    /// Sets opacity of the annotation.
    /// </summary>
    void set_Opacity(double value);
    
    /// <summary>
    /// Constuctore for Watermark annotation class.
    /// </summary>
    /// <param name="page">Page where annotation should be placed.</param>
    /// <param name="rect">Position of the annotation.</param>
    WatermarkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Set text of the annotation.
    /// </summary>
    /// <param name="text"></param>
    void SetText(System::SharedPtr<Aspose::Pdf::Facades::FormattedText> text);
    /// <summary>
    /// Set text of the annotation.
    /// </summary>
    /// <param name="text"></param>
    /// <param name="textState"></param>
    void SetTextAndState(System::ArrayPtr<System::String> text, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
protected:

    WatermarkAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::FixedPrint> _fixedPrint;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _textState;
    double _opacity;
    
    System::SharedPtr<Aspose::Pdf::Text::TextState> TranslateFormattedTextToTextState(System::SharedPtr<Aspose::Pdf::Facades::FormattedText> formattedText);
    System::String CreateGraphicState(System::SharedPtr<Resources> resources);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


