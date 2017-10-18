#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_WidgetAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_WidgetAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::SharedPtr<PdfAction> get_OnActivated();
    void set_OnActivated(System::SharedPtr<PdfAction> value);
    System::SharedPtr<AnnotationActionCollection> get_Actions();
    HighlightingMode get_Highlighting();
    void set_Highlighting(HighlightingMode value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> get_Parent();
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> get_DefaultAppearance();
    void set_DefaultAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> value);
    bool get_ReadOnly();
    void set_ReadOnly(bool value);
    bool get_Required();
    void set_Required(bool value);
    bool get_Exportable();
    void set_Exportable(bool value);
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
protected:

    static const int32_t _ReadOnly;
    static const int32_t _Required;
    static const int32_t _NoExport;
    
    WidgetAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    WidgetAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    WidgetAnnotation(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    WidgetAnnotation();
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect);
    static int32_t getFieldFlag(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> field);
    void setFieldFlag(int32_t bit, bool set);
    virtual System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    virtual void ClearAppearance(System::SharedPtr<OperatorCollection> appearance);
    virtual void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual System::Drawing::Color GetBackgroundColor();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "WidgetAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t ff;
    System::SharedPtr<PdfAction> onActivated;
    System::SharedPtr<AnnotationActionCollection> actions;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> _defaultAppearance;
    
    System::String FindFontInResources(System::SharedPtr<Aspose::Pdf::Text::Font> font);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_WidgetAnnotation_h_

