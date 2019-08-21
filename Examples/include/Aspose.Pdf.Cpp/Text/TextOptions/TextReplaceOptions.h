#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

#include "Text/TextOptions/TextOptions.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Determines action that will be done after replace of text fragment to more short.
/// None - no action, replaced text may overlaps rest of the line;
/// AdjustSpaceWidth - tries adjust spaces between words to keep line length;
/// WholeWordsHyphenation - tries distribute words between paragraph lines to keep paragraph's right field;
/// ShiftRestOfLine - shifts rest of the line according to changing length of text, length of the line may be changed;
/// Default value is ShiftRestOfLine.
/// </summary>
class ASPOSE_PDF_SHARED_API TextReplaceOptions FINAL : public Aspose::Pdf::Text::TextOptions
{
    typedef TextReplaceOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class Scope
    {
        /// <summary>
        /// Replace only first occurrence of the text on each of affected pages
        /// </summary>
        REPLACE_FIRST,
        /// <summary>
        /// Replace all text occurrences on all affected pages
        /// </summary>
        REPLACE_ALL
    };
    
    enum class ReplaceAdjustment
    {
        /// <summary>
        /// No action, replaced text may overlaps rest of the line
        /// </summary>
        None = 0,
        /// <summary>
        /// Tries adjust spaces between words to keep line length
        /// </summary>
        AdjustSpaceWidth = 1,
        /// <summary>
        /// Tries distribute words between paragraph lines to keep paragraph's right field
        /// </summary>
        WholeWordsHyphenation = 2,
        /// <summary>
        /// (Default) Shifts rest of the line according to changing length of text, length of the line may be changed
        /// </summary>
        ShiftRestOfLine = 4
    };
    
    
public:

    /// <summary>
    /// Gets or sets a scope where replace text operation is applied 
    /// </summary>
    TextReplaceOptions::Scope get_ReplaceScope();
    /// <summary>
    /// Gets or sets a scope where replace text operation is applied 
    /// </summary>
    void set_ReplaceScope(TextReplaceOptions::Scope value);
    /// <summary>
    /// Gets or sets an action that will be done after replace of text fragment to more short.
    /// </summary>
    TextReplaceOptions::ReplaceAdjustment get_ReplaceAdjustmentAction();
    /// <summary>
    /// Gets or sets an action that will be done after replace of text fragment to more short.
    /// </summary>
    void set_ReplaceAdjustmentAction(TextReplaceOptions::ReplaceAdjustment value);
    /// <summary>
    /// Gets or sets value of line spacing that used if replace adjustment is forced to create new line of text.
    /// The value expected is multiplier of font size of the replaced text. Default is 1.2.
    /// </summary>
    double get_AdjustmentNewLineSpacing();
    /// <summary>
    /// Gets or sets value of line spacing that used if replace adjustment is forced to create new line of text.
    /// The value expected is multiplier of font size of the replaced text. Default is 1.2.
    /// </summary>
    void set_AdjustmentNewLineSpacing(double value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextReplaceOptions"/> object for the specified scope.
    /// </summary>
    /// <param name="scope">Scope object.</param>
    TextReplaceOptions(TextReplaceOptions::Scope scope);
    /// <summary>
    /// Initializes new instance of the <see cref="TextReplaceOptions"/> object for the specified after replace action.
    /// </summary>
    /// <param name="adjustment">ReplaceAdjustment object.</param>
    TextReplaceOptions(TextReplaceOptions::ReplaceAdjustment adjustment);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    TextReplaceOptions::Scope scope;
    TextReplaceOptions::ReplaceAdjustment _replaceAdjustment;
    double _adjustmentNewLineSpacing;
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextReplaceOptions::ReplaceAdjustment);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text);



