#ifndef _Aspose_Pdf_Facades_FormFieldFacade_h_
#define _Aspose_Pdf_Facades_FormFieldFacade_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// The color of a field border. 
    /// </summary>
    System::Drawing::Color get_BorderColor();
    /// <summary>
    /// The color of a field border. 
    /// </summary>
    void set_BorderColor(System::Drawing::Color value);
    /// <summary>
    /// The style of a field border.
    /// </summary>
    int32_t get_BorderStyle();
    /// <summary>
    /// The style of a field border.
    /// </summary>
    void set_BorderStyle(int32_t value);
    /// <summary>
    /// The width of a field border.
    /// </summary>
    float get_BorderWidth();
    /// <summary>
    /// The width of a field border.
    /// </summary>
    void set_BorderWidth(float value);
    /// <summary>
    /// The font type of a field text.
    /// </summary>
    FontStyle get_Font();
    /// <summary>
    /// The font type of a field text.
    /// </summary>
    void set_Font(FontStyle value);
    /// <summary>
    /// Gets or sets name of the font when this is non-standart (other then 14 standard fonts).
    /// </summary>
    System::String get_CustomFont();
    /// <summary>
    /// Gets or sets name of the font when this is non-standart (other then 14 standard fonts).
    /// </summary>
    void set_CustomFont(System::String value);
    /// <summary>
    /// The size of a field text.
    /// </summary>
    float get_FontSize();
    /// <summary>
    /// The size of a field text.
    /// </summary>
    void set_FontSize(float value);
    /// <summary>
    /// The color of the field text.
    /// </summary>
    System::Drawing::Color get_TextColor();
    /// <summary>
    /// The color of the field text.
    /// </summary>
    void set_TextColor(System::Drawing::Color value);
    /// <summary>
    /// The text encoding type of the field text.
    /// </summary>
    EncodingType get_TextEncoding();
    /// <summary>
    /// The text encoding type of the field text.
    /// </summary>
    void set_TextEncoding(EncodingType value);
    /// <summary>
    /// The alignment of a field text, default is left alignment.
    /// </summary>
    int32_t get_Alignment();
    /// <summary>
    /// The alignment of a field text, default is left alignment.
    /// </summary>
    void set_Alignment(int32_t value);
    /// <summary>
    /// The rotation of a field text.
    /// </summary>
    int32_t get_Rotation();
    /// <summary>
    /// The rotation of a field text.
    /// </summary>
    void set_Rotation(int32_t value);
    /// <summary>
    /// The normal caption of form field.
    /// </summary>
    System::String get_Caption();
    /// <summary>
    /// The normal caption of form field.
    /// </summary>
    void set_Caption(System::String value);
    /// <summary>
    /// The style of check box or radio box field, defined by FormFieldFacade.CheckBoxStyle*.
    /// </summary>
    int32_t get_ButtonStyle();
    /// <summary>
    /// The style of check box or radio box field, defined by FormFieldFacade.CheckBoxStyle*.
    /// </summary>
    void set_ButtonStyle(int32_t value);
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    System::Drawing::Rectangle get_Box();
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    void set_Box(System::Drawing::Rectangle value);
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    System::ArrayPtr<float> get_Position();
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    void set_Position(System::ArrayPtr<float> value);
    /// <summary>
    /// An integer value holding the number of page on which field locates.
    /// </summary>
    int32_t get_PageNumber();
    /// <summary>
    /// An integer value holding the number of page on which field locates.
    /// </summary>
    void set_PageNumber(int32_t value);
    /// <summary>
    /// An array of string, each representing an option of a combo box/list/radio box field.
    /// </summary>
    System::ArrayPtr<System::String> get_Items();
    /// <summary>
    /// An array of string, each representing an option of a combo box/list/radio box field.
    /// </summary>
    void set_Items(System::ArrayPtr<System::String> value);
    /// <summary> The options for adding a list/combo/radio box</summary>
    System::ArrayPtr<System::ArrayPtr<System::String>> get_ExportItems();
    /// <summary> The options for adding a list/combo/radio box</summary>
    void set_ExportItems(System::ArrayPtr<System::ArrayPtr<System::String>> value);
    /// <summary>
    /// The color of a field background, default is white.
    /// </summary>
    System::Drawing::Color get_BackgroundColor();
    /// <summary>
    /// The color of a field background, default is white.
    /// </summary>
    void set_BackgroundColor(System::Drawing::Color value);
    
    static constexpr float BorderWidthUndefined = -1;
    static constexpr float BorderWidthThin = 1;
    static constexpr float BorderWidthMedium = 2;
    static constexpr float BorderWidthThick = 3;
    static constexpr int32_t BorderStyleSolid = 0;
    static constexpr int32_t BorderStyleDashed = 1;
    static constexpr int32_t BorderStyleBeveled = 2;
    static constexpr int32_t BorderStyleInset = 3;
    static constexpr int32_t BorderStyleUnderline = 4;
    static constexpr int32_t BorderStyleUndefined = 5;
    static constexpr int32_t AlignLeft = 0;
    static constexpr int32_t AlignCenter = 1;
    static constexpr int32_t AlignRight = 2;
    static constexpr int32_t AlignUndefined = 3;
    static constexpr int32_t AlignJustified = 4;
    static constexpr int32_t AlignTop = 0;
    static constexpr int32_t AlignMiddle = 1;
    static constexpr int32_t AlignBottom = 2;
    static constexpr int32_t CheckBoxStyleCircle = L'l';
    static constexpr int32_t CheckBoxStyleCheck = L'4';
    static constexpr int32_t CheckBoxStyleCross = L'8';
    static constexpr int32_t CheckBoxStyleDiamond = L'u';
    static constexpr int32_t CheckBoxStyleStar = L'H';
    static constexpr int32_t CheckBoxStyleSquare = L'n';
    static constexpr int32_t CheckBoxStyleUndefined = L' ';
    
    /// <summary>
    /// Reset all visual attribtues to empty value.
    /// </summary>
    void Reset();
    
    FormFieldFacade();
    
protected:

    bool _customFontSpecified;
    System::String _customFont;
    
    void setFontStyle(System::String fontName);
    /// <summary>
    /// Converts font name into fotn style name.
    /// </summary>
    /// <param name="fontName"></param>
    /// <returns></returns>
    FontStyle shortNameToStyle(System::String fontName);
    Aspose::Pdf::InteractiveFeatures::Forms::BoxStyle translateCheckBoxStyle();
    System::Object::shared_members_type GetSharedMembers() override;
    
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

