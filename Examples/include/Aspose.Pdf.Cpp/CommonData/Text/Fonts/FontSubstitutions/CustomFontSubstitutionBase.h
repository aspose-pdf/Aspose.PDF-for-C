#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_CustomFontSubstitutionBase_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_CustomFontSubstitutionBase_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    
        System::String get_OriginalFontName();
        bool get_IsEmbedded();
        bool get_IsSubstitutionUnavoidable();
        
    protected:
    
        OriginalFontSpecification(System::String originalFontName, bool isEmbedded, bool isUnavoidable);
        
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "OriginalFontSpecification"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::String originalFontName;
        bool isEmbedded;
        bool isUnavoidable;
        
    };
    
    
public:

    virtual bool TrySubstitute(System::SharedPtr<CustomFontSubstitutionBase::OriginalFontSpecification> originalFontSpecification, System::SharedPtr<Font> &substitutionFont);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CustomFontSubstitutionBase"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_CustomFontSubstitutionBase_h_

