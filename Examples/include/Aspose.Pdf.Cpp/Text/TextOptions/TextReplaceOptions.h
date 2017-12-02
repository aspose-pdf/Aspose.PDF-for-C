#ifndef _Aspose_Pdf_Text_TextOptions_TextReplaceOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextReplaceOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

#include "Text/TextOptions/TextOptions.h"

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// Determines action that will be done after replace of text fragment to more short.
/// None - no action, length of the line may be changed;
/// AdjustSpaceWidth - tries adjust spaces between words to keep line length;
/// WholeWordsHyphenation - tries distribute words between paragraph lines to keep paragraph's right field;
/// Default value is None;
/// </summary>
class ASPOSE_PDF_SHARED_API TextReplaceOptions FINAL : public Aspose::Pdf::Text::TextOptions::TextOptions
{
    typedef TextReplaceOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions::TextOptions BaseType;
    
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
        /// No action, length of the line may be changed
        /// </summary>
        None = 0,
        /// <summary>
        /// Tries adjust spaces between words to keep line length
        /// </summary>
        AdjustSpaceWidth = 1,
        /// <summary>
        /// Tries distribute words between paragraph lines to keep paragraph's right field
        /// </summary>
        WholeWordsHyphenation = 2
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
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextOptions::TextReplaceOptions::ReplaceAdjustment);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text::TextOptions);


#endif // _Aspose_Pdf_Text_TextOptions_TextReplaceOptions_h_

