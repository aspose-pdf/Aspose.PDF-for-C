#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_TextBoxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_TextBoxField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if SUPPORT_ASPOSE_JAVASCRIPT 

/* C# INACTIVE CODE:
using Aspose.JavaScript;
*/

// C# preprocessor directive: #endif 


#include <system/text/string_builder.h>
#include <system/collections/list.h>
#include <drawing/image.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class BarcodeField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class FileSelectBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PasswordBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RichTextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DomFormTests; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFont; } } } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing text box field.
/// </summary>
class ASPOSE_PDF_SHARED_API TextBoxField : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef TextBoxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::BarcodeField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::FileSelectBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PasswordBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    
public:

    bool get_Multiline();
    void set_Multiline(bool value);
    bool get_SpellCheck();
    void set_SpellCheck(bool value);
    bool get_Scrollable();
    void set_Scrollable(bool value);
    bool get_ForceCombs();
    void set_ForceCombs(bool value);
    int32_t get_MaxLen();
    void set_MaxLen(int32_t value);
    virtual System::String get_Value();
    virtual void set_Value(System::String value);
    
    TextBoxField();
    TextBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    TextBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    void AddImage(System::SharedPtr<System::Drawing::Image> image);
    void AddBarcode(System::String code);
    
protected:

    bool get_Justification();
    void set_Justification(bool value);
    
    TextBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    TextBoxField(System::SharedPtr<Document> doc);
    
    virtual bool AppearanceSupported();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    virtual void ClearAppearance(System::SharedPtr<OperatorCollection> appearance);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextBoxField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t maxLen;
    System::String previousValue;
    bool _justification;
    
    int32_t getMaxLen(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annot);
    double getTextWidth(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize);
    bool IsNewLine(System::String text, int32_t i);
    bool IsWords(System::String text);
    bool IsSpace(System::SharedPtr<System::Text::StringBuilder> s);
    System::SharedPtr<System::Collections::Generic::List<System::String>> BreakStringIntoWords(System::String text);
    System::SharedPtr<System::Collections::Generic::List<System::String>> splitStringByWords(System::SharedPtr<System::Collections::Generic::List<System::String>> words, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize, double width);
    System::SharedPtr<System::Collections::Generic::List<System::String>> splitString(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize, double width);
    double AdjustFontSize(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double width, double height);
    void showCombs(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize);
    void AddImage(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annot, System::SharedPtr<System::Drawing::Image> image);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_TextBoxField_h_

