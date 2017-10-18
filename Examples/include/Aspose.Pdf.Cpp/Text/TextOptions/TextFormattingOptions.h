#ifndef _Aspose_Pdf_Text_TextOptions_TextFormattingOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextFormattingOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "Text/TextOptions/TextOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// Defines line spacing specifics
/// </summary>
class ASPOSE_PDF_SHARED_API TextFormattingOptions FINAL : public Aspose::Pdf::Text::TextOptions::TextOptions
{
    typedef TextFormattingOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextParagraph;
    
public:

    enum class WordWrapMode
    {
        NoWrap,
        DiscretionaryHyphenation,
        ByWords
    };
    
    
protected:

    enum class LineSpacingMode
    {
        FontSize,
        FullSize
    };
    
    
public:

    TextFormattingOptions::WordWrapMode get_WrapMode();
    void set_WrapMode(TextFormattingOptions::WordWrapMode value);
    
    TextFormattingOptions(TextFormattingOptions::WordWrapMode wrapMode);
    
protected:

    TextFormattingOptions::LineSpacingMode get_LineSpacing();
    void set_LineSpacing(TextFormattingOptions::LineSpacingMode value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextFormattingOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    TextFormattingOptions::WordWrapMode _wrapMode;
    TextFormattingOptions::LineSpacingMode _lineSpacing;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextFormattingOptions_h_

