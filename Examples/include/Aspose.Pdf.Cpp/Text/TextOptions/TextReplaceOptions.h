#ifndef _Aspose_Pdf_Text_TextOptions_TextReplaceOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextReplaceOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
        REPLACE_FIRST,
        REPLACE_ALL
    };
    
    enum class ReplaceAdjustment
    {
        None = 0,
        AdjustSpaceWidth = 1,
        WholeWordsHyphenation = 2
    };
    
    
public:

    TextReplaceOptions::Scope get_ReplaceScope();
    void set_ReplaceScope(TextReplaceOptions::Scope value);
    TextReplaceOptions::ReplaceAdjustment get_ReplaceAdjustmentAction();
    void set_ReplaceAdjustmentAction(TextReplaceOptions::ReplaceAdjustment value);
    
    TextReplaceOptions(TextReplaceOptions::Scope scope);
    TextReplaceOptions(TextReplaceOptions::ReplaceAdjustment adjustment);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextReplaceOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    TextReplaceOptions::Scope scope;
    TextReplaceOptions::ReplaceAdjustment _replaceAdjustment;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextOptions::TextReplaceOptions::ReplaceAdjustment);


#endif // _Aspose_Pdf_Text_TextOptions_TextReplaceOptions_h_

