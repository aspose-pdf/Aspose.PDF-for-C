#ifndef _Aspose_Pdf_Text_TextOptions_TextFormattingOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextFormattingOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
        /// <summary>
        /// No wrapping is performed
        /// </summary>
        NoWrap,
        /// <summary>
        /// Discretionary hyphenation is performed. Allows breaking words in the middle.
        /// </summary>
        DiscretionaryHyphenation,
        /// <summary>
        /// Word wrapping only wraps complete words.
        /// If the complete word cannot be wrapped, attempts to use discretionary hyphenation
        /// </summary>
        ByWords
    };
    
    
protected:

    enum class LineSpacingMode
    {
        /// <summary>
        /// Line spacing is font size
        /// </summary>
        FontSize,
        /// <summary>
        /// Line spacing is a full space between descender and ascender
        /// </summary>
        FullSize
    };
    
    
public:

    /// <summary>
    /// Gets or sets word wrap mode. 
    /// Default value is WordWrapMode.NoWrap
    /// </summary>
    TextFormattingOptions::WordWrapMode get_WrapMode();
    /// <summary>
    /// Gets or sets word wrap mode. 
    /// Default value is WordWrapMode.NoWrap
    /// </summary>
    void set_WrapMode(TextFormattingOptions::WordWrapMode value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFormattingOptions"/> object for the specified word wrap mode.
    /// </summary>
    /// <param name="wrapMode">Word wrap mode.</param>
    TextFormattingOptions(TextFormattingOptions::WordWrapMode wrapMode);
    
protected:

    /// <summary>
    /// Gets line spacing mode. 
    /// Default value is LineSpacingMode.FontSize
    /// </summary>
    TextFormattingOptions::LineSpacingMode get_LineSpacing();
    /// <summary>
    /// Gets line spacing mode. 
    /// Default value is LineSpacingMode.FontSize
    /// </summary>
    void set_LineSpacing(TextFormattingOptions::LineSpacingMode value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    TextFormattingOptions::WordWrapMode _wrapMode;
    TextFormattingOptions::LineSpacingMode _lineSpacing;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextFormattingOptions_h_

