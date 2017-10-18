#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SimpleFontSubstitution_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SimpleFontSubstitution_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    
    UnicodeSubstitution(wchar_t originalCode, wchar_t substitutionCode);
    UnicodeSubstitution();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "UnicodeSubstitution"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_OriginalFontName();
    System::String get_SubstitutionFontName();
    
    SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName);
    
protected:

    System::ArrayPtr<UnicodeSubstitution> get_UnicodeSubstitutions();
    
    SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName, System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions);
    
    virtual wchar_t GetSubstitutedUnicode(wchar_t unicode);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SimpleFontSubstitution"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String originalFontName;
    System::String substitutionFontName;
    System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_SimpleFontSubstitution_h_

