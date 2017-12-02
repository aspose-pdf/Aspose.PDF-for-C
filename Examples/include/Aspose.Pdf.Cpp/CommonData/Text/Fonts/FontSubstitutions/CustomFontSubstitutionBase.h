#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_CustomFontSubstitutionBase_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_CustomFontSubstitutionBase_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Substitution { class FontSubstitutor; } } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

///<summary>
/// Represents a base class for custom font substitution strategy.
/// </summary>
class ASPOSE_PDF_SHARED_API CustomFontSubstitutionBase : public Aspose::Pdf::Text::FontSubstitution
{
    typedef CustomFontSubstitutionBase ThisType;
    typedef Aspose::Pdf::Text::FontSubstitution BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    class ASPOSE_PDF_SHARED_API OriginalFontSpecification FINAL : public System::Object
    {
        typedef OriginalFontSpecification ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
        
    public:
    
        /// <summary>
        /// Gets original font name.
        /// </summary>
        System::String get_OriginalFontName();
        /// <summary>
        /// Gets a value that indicates whether the font is embedded.
        /// </summary>
        bool get_IsEmbedded();
        /// <summary>
        /// Gets a value that indicates that the substitution is unavoidable. 
        /// </summary>
        /// <remarks>
        /// Returns true in case substitution was requested because of absence of the original font or in case original font cannot be used in context of some task.
        /// In case user ignores the flag and doesn't substitute the font - default font substitution procedure is performed.
        /// But it provides opportunity for the user to alternate standard font substitution procedure and set better font to the system.
        /// Returns false in case original font is present, valid, but it is allowed for the user to substitute it.  
        /// </remarks>
        bool get_IsSubstitutionUnavoidable();
        
    protected:
    
        /// <summary>
        /// Initializes new OriginalFontSpecification object.
        /// </summary>
        OriginalFontSpecification(System::String originalFontName, bool isEmbedded, bool isUnavoidable);
        
    private:
    
        System::String originalFontName;
        bool isEmbedded;
        bool isUnavoidable;
        
    };
    
    
public:

    /// <summary>
    /// Substitutes original font with another font.
    /// </summary>
    /// <remarks>
    /// The class CustomFontSubstitutionBase should be inherited to implement custom font substitution logic.
    /// TrySubstitute method should be overridden properly:
    /// Must return true in case substitution is required. substitutionFont must be set to valid Font object.
    /// Must return false in case no substitution is required. substitutionFont may be set to null. 
    /// </remarks>
    /// <param name="originalFontSpecification">Original font specification.</param>
    /// <param name="substitutionFont">Substitution font.</param>
    /// <returns>True in case substitution was successfull.</returns>
    virtual bool TrySubstitute(System::SharedPtr<CustomFontSubstitutionBase::OriginalFontSpecification> originalFontSpecification, System::SharedPtr<Font>& substitutionFont);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_CustomFontSubstitutionBase_h_

