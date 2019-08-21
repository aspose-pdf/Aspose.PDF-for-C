#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/array.h>

#include "CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { class OperationContext; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Substitution { class FontSubstitutor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class UnicodeSubstitution; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a class for simple font substitution strategy.
/// </summary>
class ASPOSE_PDF_SHARED_API SimpleFontSubstitution FINAL : public Aspose::Pdf::Text::FontSubstitution
{
    typedef SimpleFontSubstitution ThisType;
    typedef Aspose::Pdf::Text::FontSubstitution BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::OperationContext;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    
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
    /// <param name="forcedBySaveOption">Substitution forced by DefaultFontName save option.</param>
    SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName, bool isForcedBySaveOption = false);
    
protected:

    /// <summary>
    /// Gets unicode substitution objects that define characted code substitutions
    /// </summary>
    System::ArrayPtr<UnicodeSubstitution> get_UnicodeSubstitutions();
    /// <summary>
    /// Gets the flag denoting whether substitution is forced by DefaultFontName save option
    /// </summary>
    bool get_IsForcedBySaveOption();
    
    /// <summary>
    /// Initializes a new instance of <see cref="SimpleFontSubstitution"/> class.
    /// </summary>
    /// <param name="originalFontName">Original font name.</param>
    /// <param name="substitutionFontName">Substitution font name.</param>
    /// <param name="unicodeSubstitutions">Unicode substitution object list.</param>
    SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName, System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions);
    
    virtual char16_t GetSubstitutedUnicode(char16_t unicode);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String originalFontName;
    System::String substitutionFontName;
    bool isForcedBySaveOption;
    System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions;
    
};

/// <summary>
/// Represents character code substitution.
/// </summary>
/// <remarks>
/// In some cases substituting font may not contain original unicode character.
/// For those cases characted substitution may be set explicitly with <see cref="UnicodeSubstitution"/> structs.
/// </remarks>
class UnicodeSubstitution : public System::Object
{
    typedef UnicodeSubstitution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    char16_t OriginalCode;
    char16_t SubstitutionCode;
    
    /// <summary>
    /// Creates character code substitution struct.
    /// </summary>
    /// <param name="originalCode">Original unicode value.</param>
    /// <param name="substitutionCode">Substitution unicode value.</param>
    UnicodeSubstitution(char16_t originalCode, char16_t substitutionCode);
    UnicodeSubstitution();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


