#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SystemFontsSubstitution_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SystemFontsSubstitution_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
    /// <summary>
    /// The fonts that are named the same as system fonts.
    /// Those fonts are mostly safe to be substituted with the same named system fonts.
    /// </summary>
    TheSameNamedEmbeddedFonts,
    /// <summary>
    /// All embedded fonts are substituted.
    /// </summary>
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

    /// <summary>
    /// Gets or sets substitution font categories that should be substituted with system fonts.
    /// </summary>
    SubstitutionFontCategories get_FontCategories();
    /// <summary>
    /// Gets or sets substitution font categories that should be substituted with system fonts.
    /// </summary>
    void set_FontCategories(SubstitutionFontCategories value);
    /// <summary>
    /// Gets or sets default substitution font.
    /// The font is used when no other valid substitution were found but initial font belongs to target substitution category (<see cref="FontCategories"/>).
    /// </summary>
    System::SharedPtr<Font> get_DefaultFont();
    /// <summary>
    /// Gets or sets default substitution font.
    /// The font is used when no other valid substitution were found but initial font belongs to target substitution category (<see cref="FontCategories"/>).
    /// </summary>
    void set_DefaultFont(System::SharedPtr<Font> value);
    
    /// <summary> 
    /// Initializes a new instance of <see cref="SystemFontsSubstitution"/> class.
    /// </summary>
    /// <param name="fontCategories">Target font categories to substitute with system fonts</param>
    SystemFontsSubstitution(SubstitutionFontCategories fontCategories);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    SubstitutionFontCategories fontCategories;
    System::SharedPtr<Font> defaultFont;
    System::SharedPtr<System::Object> sync;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SystemFontsSubstitution_h_

