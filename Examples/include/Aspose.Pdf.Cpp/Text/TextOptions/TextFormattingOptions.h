#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Text/TextOptions/TextOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Defines line spacing specifics
/// </summary>
class ASPOSE_PDF_SHARED_API TextFormattingOptions FINAL : public Aspose::Pdf::Text::TextOptions
{
    typedef TextFormattingOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    
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
        ByWords,
        /// <summary>
        /// WordWrapMode not set.
        /// Wrapping strategie of upper level structure (table cell, paragraph etc.) will be used.
        /// </summary>
        Undefined
    };
    
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
    /// Gets word wrap mode.
    /// Default value is WordWrapMode.NoWrap
    /// </summary>
    TextFormattingOptions::WordWrapMode get_WrapMode();
    /// <summary>
    /// Sets word wrap mode.
    /// Default value is WordWrapMode.NoWrap
    /// </summary>
    void set_WrapMode(TextFormattingOptions::WordWrapMode value);
    /// <summary>
    /// Gets line spacing mode.
    /// Default value is LineSpacingMode.FontSize
    /// </summary>
    TextFormattingOptions::LineSpacingMode get_LineSpacing();
    /// <summary>
    /// Sets line spacing mode.
    /// Default value is LineSpacingMode.FontSize
    /// </summary>
    void set_LineSpacing(TextFormattingOptions::LineSpacingMode value);
    /// <summary>
    /// Gets subsequent lines indent value.
    /// </summary>
    float get_SubsequentLinesIndent();
    /// <summary>
    /// Sets subsequent lines indent value.
    /// </summary>
    void set_SubsequentLinesIndent(float value);
    /// <summary>
    /// Gets first line indent value.
    /// </summary>
    float get_FirstLineIndent();
    /// <summary>
    /// Sets first line indent value.
    /// </summary>
    void set_FirstLineIndent(float value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFormattingOptions"/> object for the specified word wrap mode.
    /// </summary>
    /// <param name="wrapMode">Word wrap mode.</param>
    TextFormattingOptions(TextFormattingOptions::WordWrapMode wrapMode);
    /// <summary>
    /// Initializes new instance of the <see cref="TextFormattingOptions"/> object with undefined word wrap mode.
    /// </summary>
    TextFormattingOptions();
    
protected:

    bool get_IsChanged();
    void set_IsChanged(bool value);
    
    /// <summary>
    /// Clones TextFormattingOptions instance.
    /// </summary>
    /// <returns>Cloned TextFormattingOptions</returns>
    System::SharedPtr<TextFormattingOptions> Clone();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    TextFormattingOptions::WordWrapMode _wrapMode;
    TextFormattingOptions::LineSpacingMode _lineSpacing;
    float _subsequentLinesIndent;
    float _firstLineIndent;
    bool pr_IsChanged;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


