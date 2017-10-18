#ifndef _Aspose_Pdf_Facades_FormFieldFacade_h_
#define _Aspose_Pdf_Facades_FormFieldFacade_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <system/array.h>
#include <drawing/rectangle.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class FontStyle; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class EncodingType; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class BoxStyle; } } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for representing field properties.
/// </summary>
class ASPOSE_PDF_SHARED_API FormFieldFacade FINAL : public System::Object
{
    typedef FormFieldFacade ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    
public:

    System::Drawing::Color get_BorderColor();
    void set_BorderColor(System::Drawing::Color value);
    int32_t get_BorderStyle();
    void set_BorderStyle(int32_t value);
    float get_BorderWidth();
    void set_BorderWidth(float value);
    FontStyle get_Font();
    void set_Font(FontStyle value);
    System::String get_CustomFont();
    void set_CustomFont(System::String value);
    float get_FontSize();
    void set_FontSize(float value);
    System::Drawing::Color get_TextColor();
    void set_TextColor(System::Drawing::Color value);
    EncodingType get_TextEncoding();
    void set_TextEncoding(EncodingType value);
    int32_t get_Alignment();
    void set_Alignment(int32_t value);
    int32_t get_Rotation();
    void set_Rotation(int32_t value);
    System::String get_Caption();
    void set_Caption(System::String value);
    int32_t get_ButtonStyle();
    void set_ButtonStyle(int32_t value);
    System::Drawing::Rectangle get_Box();
    void set_Box(System::Drawing::Rectangle value);
    System::ArrayPtr<float> get_Position();
    void set_Position(System::ArrayPtr<float> value);
    int32_t get_PageNumber();
    void set_PageNumber(int32_t value);
    System::ArrayPtr<System::String> get_Items();
    void set_Items(System::ArrayPtr<System::String> value);
    System::ArrayPtr<System::ArrayPtr<System::String>> get_ExportItems();
    void set_ExportItems(System::ArrayPtr<System::ArrayPtr<System::String>> value);
    System::Drawing::Color get_BackgroundColor();
    void set_BackgroundColor(System::Drawing::Color value);
    
    constexpr static const float BorderWidthUndefined = -1;
    constexpr static const float BorderWidthThin = 1;
    constexpr static const float BorderWidthMedium = 2;
    constexpr static const float BorderWidthThick = 3;
    constexpr static const int32_t BorderStyleSolid = 0;
    constexpr static const int32_t BorderStyleDashed = 1;
    constexpr static const int32_t BorderStyleBeveled = 2;
    constexpr static const int32_t BorderStyleInset = 3;
    constexpr static const int32_t BorderStyleUnderline = 4;
    constexpr static const int32_t BorderStyleUndefined = 5;
    constexpr static const int32_t AlignLeft = 0;
    constexpr static const int32_t AlignCenter = 1;
    constexpr static const int32_t AlignRight = 2;
    constexpr static const int32_t AlignUndefined = 3;
    constexpr static const int32_t AlignJustified = 4;
    constexpr static const int32_t AlignTop = 0;
    constexpr static const int32_t AlignMiddle = 1;
    constexpr static const int32_t AlignBottom = 2;
    constexpr static const int32_t CheckBoxStyleCircle = L'l';
    constexpr static const int32_t CheckBoxStyleCheck = L'4';
    constexpr static const int32_t CheckBoxStyleCross = L'8';
    constexpr static const int32_t CheckBoxStyleDiamond = L'u';
    constexpr static const int32_t CheckBoxStyleStar = L'H';
    constexpr static const int32_t CheckBoxStyleSquare = L'n';
    constexpr static const int32_t CheckBoxStyleUndefined = L' ';
    
    void Reset();
    
    FormFieldFacade();
    
protected:

    bool _customFontSpecified;
    System::String _customFont;
    
    void setFontStyle(System::String fontName);
    FontStyle shortNameToStyle(System::String fontName);
    Aspose::Pdf::InteractiveFeatures::Forms::BoxStyle translateCheckBoxStyle();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FormFieldFacade"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::Drawing::Color borderColor;
    System::Drawing::Color backgroundColor;
    int32_t borderStyle;
    float borderWidth;
    FontStyle fontStyle;
    float fontSize;
    System::Drawing::Color textColor;
    EncodingType encodingType;
    int32_t alignment;
    int32_t rotation;
    System::String caption;
    int32_t buttonStyle;
    System::Drawing::Rectangle box;
    System::ArrayPtr<float> position;
    int32_t pageNumber;
    System::ArrayPtr<System::String> items;
    System::ArrayPtr<System::ArrayPtr<System::String>> exportItems;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_FormFieldFacade_h_

