#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Encoding { namespace PdfFontEncoding { class Type1PdfFontEncoding; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class PdfFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Substitution { class FontSubstitutor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace APSImpl { class APSPresenter; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace GDIImpl { class GdiPresenter; } } } } }
namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a base class fot font substitution strategies.
/// </summary>
class ASPOSE_PDF_SHARED_API FontSubstitution : public System::Object
{
    typedef FontSubstitution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Encoding::PdfFontEncoding::Type1PdfFontEncoding;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::PdfFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Engine::Presentation::APSImpl::APSPresenter;
    friend class Aspose::Pdf::Engine::Presentation::GDIImpl::GdiPresenter;
    
protected:

    System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> get_SubstitutionFontDefinition();
    void set_SubstitutionFontDefinition(System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> value);
    
    FontSubstitution();
    
    /// <summary>
    /// Returns unicode substitution
    /// </summary>
    /// <param name="unicode"></param>
    /// <returns></returns>
    virtual char16_t GetSubstitutedUnicode(char16_t unicode);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> pr_SubstitutionFontDefinition;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


