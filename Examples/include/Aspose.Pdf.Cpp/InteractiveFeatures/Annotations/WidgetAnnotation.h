#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_WidgetAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_WidgetAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/color.h>
#include <cstdint>

#include "InteractiveFeatures/Annotations/Annotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class BarcodeField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ChoiceOption; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationActionCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DefaultAppearance; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class HighlightingMode; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class representing widget annotation.
/// </summary>
class ASPOSE_PDF_SHARED_API WidgetAnnotation : public Aspose::Pdf::InteractiveFeatures::Annotations::Annotation
{
    typedef WidgetAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::BarcodeField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ChoiceOption;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::ApsToPdfConverter;
    
public:

    /// <summary>
    /// An action which shall be performed when the annotation is activated.
    /// </summary>
    System::SharedPtr<PdfAction> get_OnActivated();
    /// <summary>
    /// An action which shall be performed when the annotation is activated.
    /// </summary>
    void set_OnActivated(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets the annotation actions.
    /// </summary>
    System::SharedPtr<AnnotationActionCollection> get_Actions();
    /// <summary>
    /// Annotation highlighting mode.
    /// </summary>
    HighlightingMode get_Highlighting();
    /// <summary>
    /// Annotation highlighting mode.
    /// </summary>
    void set_Highlighting(HighlightingMode value);
    /// <summary>
    /// Gets annotation parent.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> get_Parent();
    /// <summary>
    /// Gets or sets default appearance of the field.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> get_DefaultAppearance();
    /// <summary>
    /// Gets or sets default appearance of the field.
    /// </summary>
    void set_DefaultAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> value);
    /// <summary>
    /// Gets or sets read only status of the field.
    /// </summary>
    bool get_ReadOnly();
    /// <summary>
    /// Gets or sets read only status of the field.
    /// </summary>
    void set_ReadOnly(bool value);
    /// <summary>
    /// Gets or sets required status of the field.
    /// </summary>
    bool get_Required();
    /// <summary>
    /// Gets or sets required status of the field.
    /// </summary>
    void set_Required(bool value);
    /// <summary>
    /// Gets or sets exportable flag of the field. 
    /// </summary>
    bool get_Exportable();
    /// <summary>
    /// Gets or sets exportable flag of the field. 
    /// </summary>
    void set_Exportable(bool value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor.
    /// </summary>
    /// <param name="visitor">Visitor to be accepted.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
protected:

    static const int32_t _ReadOnly;
    static const int32_t _Required;
    static const int32_t _NoExport;
    
    /// <summary>
    /// Ititializes Widget annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">Document.</param>
    WidgetAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    /// <summary>
    /// Creates new Widget annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    WidgetAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    WidgetAnnotation(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    WidgetAnnotation();
    
    /// <summary>
    /// Initialize the annotation.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page object.</param>
    /// <param name="rect">The rectangle of the annotation.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect);
    static int32_t getFieldFlag(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> field);
    void setFieldFlag(int32_t bit, bool set);
    /// <summary>
    /// Creates normal appearance for annotation and fills matrix and rectangle for appearance.
    /// </summary>
    /// <param name="key">Appearance type (N/D)</param>
    /// <param name="annotation">Annotation where appearance should be changed.</param>
    /// <returns></returns>
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Remove operators of old appearance. This may be overriden to remove only required part of appearance (e.g. TextBoxField)
    /// </summary>
    /// <param name="appearance"></param>
    virtual void ClearAppearance(System::SharedPtr<OperatorCollection> appearance);
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual System::Drawing::Color GetBackgroundColor();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t ff;
    System::SharedPtr<PdfAction> onActivated;
    System::SharedPtr<AnnotationActionCollection> actions;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> _defaultAppearance;
    
    /// <summary>
    /// Search required font in default resources, add the font if is not added yet.
    /// </summary>
    /// <param name="font"></param>
    /// <returns></returns>
    System::String FindFontInResources(System::SharedPtr<Aspose::Pdf::Text::Font> font);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_WidgetAnnotation_h_

