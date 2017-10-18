#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SystemFontsSubstitution_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SystemFontsSubstitution_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class Font; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font categories that can be substituted.
/// </summary>
enum class SubstitutionFontCategories
{
    TheSameNamedEmbeddedFonts,
    AllEmbeddedFonts
};

///<summary>
/// Represents a class for font substitution strategy that substitutes fonts with system fonts.
/// </summary>
class ASPOSE_PDF_SHARED_API SystemFontsSubstitution FINAL : public Aspose::Pdf::Text::FontSubstitution
{
    typedef SystemFontsSubstitution ThisType;
    typedef Aspose::Pdf::Text::FontSubstitution BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    SubstitutionFontCategories get_FontCategories();
    void set_FontCategories(SubstitutionFontCategories value);
    System::SharedPtr<Font> get_DefaultFont();
    void set_DefaultFont(System::SharedPtr<Font> value);
    
    SystemFontsSubstitution(SubstitutionFontCategories fontCategories);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SystemFontsSubstitution"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    SubstitutionFontCategories fontCategories;
    System::SharedPtr<Font> defaultFont;
    System::SharedPtr<System::Object> sync;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SystemFontsSubstitution_h_

