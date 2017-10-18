#ifndef _Aspose_Pdf_Text_TextOptions_TextEditOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextEditOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Text/TextOptions/TextOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// Language transformation modes
/// </summary>
class ASPOSE_PDF_SHARED_API TextEditOptions FINAL : public Aspose::Pdf::Text::TextOptions::TextOptions
{
    typedef TextEditOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    enum class NoCharacterAction
    {
        ThrowException,
        UseStandardFont,
        ReplaceAnyway
    };
    
    enum class FontReplace
    {
        Default,
        RemoveUnusedFonts
    };
    
    enum class LanguageTransformation
    {
        Default,
        ExactlyAsISee,
        None
    };
    
    
protected:

    enum class TextRearrangement
    {
        None,
        Auto
    };
    
    
public:

    TextEditOptions::NoCharacterAction get_NoCharacterBehavior();
    void set_NoCharacterBehavior(TextEditOptions::NoCharacterAction value);
    TextEditOptions::FontReplace get_FontReplaceBehavior();
    void set_FontReplaceBehavior(TextEditOptions::FontReplace value);
    bool get_AllowLanguageTransformation();
    void set_AllowLanguageTransformation(bool value);
    TextEditOptions::LanguageTransformation get_LanguageTransformationBehavior();
    void set_LanguageTransformationBehavior(TextEditOptions::LanguageTransformation value);
    
    TextEditOptions(TextEditOptions::NoCharacterAction noCharacterBehavior);
    TextEditOptions(TextEditOptions::FontReplace fontReplaceBehavior);
    TextEditOptions(bool allowLanguageTransformation);
    TextEditOptions(TextEditOptions::LanguageTransformation languageTransformationBehavior);
    
protected:

    TextEditOptions::TextRearrangement get_RearrangementMode();
    void set_RearrangementMode(TextEditOptions::TextRearrangement value);
    
    TextEditOptions(TextEditOptions::TextRearrangement rearrangementMode);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextEditOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    TextEditOptions::NoCharacterAction noCharacterBehavior;
    TextEditOptions::TextRearrangement rearrangementMode;
    TextEditOptions::FontReplace fontReplace;
    TextEditOptions::LanguageTransformation languageTransformation;
    bool allowLanguageTransformation;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextEditOptions_h_

