#ifndef _Aspose_Pdf_Facades_FormattedText_h_
#define _Aspose_Pdf_Facades_FormattedText_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Facades { class Stamp; } } }
namespace Aspose { namespace Pdf { class PageNumberStamp; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class FormattedTextTests; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class FontStyle; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class EncodingType; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FontColor; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class which represents formatted text. Contains information about text and its color, size, style.
/// </summary>
class ASPOSE_PDF_SHARED_API FormattedText FINAL : public System::Object
{
    typedef FormattedText ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::Stamp;
    friend class Aspose::Pdf::PageNumberStamp;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Facades::FormattedTextTests;
    
public:

    float get_TextHeight();
    float get_TextWidth();
    
    FormattedText();
    FormattedText(System::String text);
    FormattedText(System::String text, System::SharedPtr<FontColor> fontColor, FontStyle fontStyle, EncodingType encodingType, bool embedded, float textSize);
    FormattedText(System::String text, System::SharedPtr<FontColor> fontColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    FormattedText(System::String text, System::Drawing::Color color, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize);
    FormattedText(System::String text, System::Drawing::Color textColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    FormattedText(System::String text, System::SharedPtr<FontColor> textColor, System::SharedPtr<FontColor> backColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize);
    FormattedText(System::String text, System::SharedPtr<FontColor> textColor, System::SharedPtr<FontColor> backColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor, FontStyle textFont, EncodingType encoding, bool embedded, float textSize);
    FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor, System::String fontName, EncodingType textEncoding, bool embedded, float fontSize);
    FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor);
    
    void AddNewLineText(System::String newLineText);
    void AddNewLineText(System::String newLineText, float lineSpacing);
    
    FormattedText(System::String text, System::Drawing::Color textColor, System::String fontName, EncodingType textEncoding, bool embedded, float fontSize);
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::String>> text;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>> mpCustomLineSpacing;
    
    float LineSpacing(int32_t idx);
    System::String getFirstLine();
    System::Drawing::Color getTextColor();
    System::Drawing::Color getBackColor();
    System::SharedPtr<Aspose::Pdf::Text::Font> getFont();
    float getFontSize();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FormattedText"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> sync;
    System::Drawing::Color textColor;
    System::Drawing::Color backColor;
    System::SharedPtr<Aspose::Pdf::Text::Font> font;
    float fontSize;
    static const float DEFAULT_SPACING;
    
    void SetDefaultValues();
    void initFont(FontStyle fontStyle, bool embedded);
    void initEncoding(EncodingType textEncoding);
    void initLineSpacing(int32_t lineIndex, float lineSpacing);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_FormattedText_h_

