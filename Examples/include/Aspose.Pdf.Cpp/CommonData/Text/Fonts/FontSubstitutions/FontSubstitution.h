#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitution_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitution_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Encoding { namespace PdfFontEncoding { class Type1PdfFontEncoding; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class PdfFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Substitution { class FontSubstitutor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace APSImpl { class APSPresenter; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace GDIImpl { class GdiPresenter; } } } } }
namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

///<summary>
/// Represents a base class fot font substitution strategies.
/// </summary>
class ASPOSE_PDF_SHARED_API FontSubstitution : public System::Object
{
    typedef FontSubstitution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Encoding::PdfFontEncoding::Type1PdfFontEncoding;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::PdfFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::Presentation::APSImpl::APSPresenter;
    friend class Aspose::Pdf::Engine::Presentation::GDIImpl::GdiPresenter;
    
protected:

    System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> get_SubstitutionFontDefinition();
    void set_SubstitutionFontDefinition(System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> value);
    
    FontSubstitution();
    
    virtual wchar_t GetSubstitutedUnicode(wchar_t unicode);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontSubstitution"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> pr_SubstitutionFontDefinition;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitution_h_

