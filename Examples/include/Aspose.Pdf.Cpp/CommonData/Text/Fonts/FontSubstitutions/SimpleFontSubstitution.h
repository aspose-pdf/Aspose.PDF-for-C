#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SimpleFontSubstitution_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SimpleFontSubstitution_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/array.h>

#include "CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents character code substitution.
/// </summary>
/// <remarks>
/// In some cases substituting font may not contain original unicode character.
/// For those cases characted substitution may be set explicitly with <see cref="UnicodeSubstitution"/> structs.
/// </remarks>
class ASPOSE_PDF_SHARED_API UnicodeSubstitution : public System::Object
{
    typedef UnicodeSubstitution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend bool operator ==(UnicodeSubstitution const &x, UnicodeSubstitution const &y);
    friend bool operator !=(UnicodeSubstitution const &x, UnicodeSubstitution const &y);
    
public:

    wchar_t OriginalCode;
    wchar_t SubstitutionCode;
    
    /// <summary>
    /// Creates character code substitution struct.
    /// </summary>
    /// <param name="originalCode">Original unicode value.</param>
    /// <param name="substitutionCode">Substitution unicode value.</param>
    UnicodeSubstitution(wchar_t originalCode, wchar_t substitutionCode);
    UnicodeSubstitution();
    
};

bool operator ==(UnicodeSubstitution const &x, UnicodeSubstitution const &y);
bool operator !=(UnicodeSubstitution const &x, UnicodeSubstitution const &y);

///<summary>
/// Represents a class for simple font substitution strategy.
/// </summary>
class ASPOSE_PDF_SHARED_API SimpleFontSubstitution FINAL : public Aspose::Pdf::Text::FontSubstitution
{
    typedef SimpleFontSubstitution ThisType;
    typedef Aspose::Pdf::Text::FontSubstitution BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    /// Gets original font name that should be substituted with <see cref="SubstitutionFontName"/>
    /// </summary>
    System::String get_OriginalFontName();
    /// <summary>
    /// Gets font name that should substitute the <see cref="OriginalFontName"/>
    /// </summary>
    System::String get_SubstitutionFontName();
    
    /// <summary> 
    /// Initializes a new instance of <see cref="SimpleFontSubstitution"/> class.
    /// </summary>
    /// <param name="originalFontName">Original font name.</param>
    /// <param name="substitutionFontName">Substitution font name.</param>
    SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName);
    
protected:

    /// <summary>
    /// Gets unicode substitution objects that define characted code substitutions
    /// </summary>
    System::ArrayPtr<UnicodeSubstitution> get_UnicodeSubstitutions();
    
    /// <summary>
    /// Initializes a new instance of <see cref="SimpleFontSubstitution"/> class.
    /// </summary>
    /// <param name="originalFontName">Original font name.</param>
    /// <param name="substitutionFontName">Substitution font name.</param>
    /// <param name="unicodeSubstitutions">Unicode substitution object list.</param>
    SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName, System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions);
    
    virtual wchar_t GetSubstitutedUnicode(wchar_t unicode);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String originalFontName;
    System::String substitutionFontName;
    System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SimpleFontSubstitution_h_

