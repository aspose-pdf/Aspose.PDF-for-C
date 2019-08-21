#pragma once

#include <system/text/string_builder.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextExtractionVerifier; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextExtractionErrorLocation; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Describes the text extraction error has appeared in the PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API TextExtractionError FINAL : public System::Object
{
    typedef TextExtractionError ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    friend class Aspose::Pdf::Text::TextAbsorber;
    
public:

    /// <summary>
    /// Brief description of the error.
    /// </summary>
    System::String get_Summary();
    /// <summary>
    /// Expanded description of the error.
    /// </summary>
    System::String get_Description();
    /// <summary>
    /// Location of the error.
    /// </summary>
    System::SharedPtr<TextExtractionErrorLocation> get_Location();
    /// <summary>
    /// Key (PDF name) of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    System::String get_FontKey();
    /// <summary>
    /// Readable (internal) name of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    System::String get_FontName();
    /// <summary>
    /// Text that was actually extracted.
    /// </summary>
    System::String get_ExtractedText();
    
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Brief description of the error.
    /// </summary>
    void set_Summary(System::String value);
    /// <summary>
    /// Expanded description of the error.
    /// </summary>
    void set_Description(System::String value);
    /// <summary>
    /// Key (PDF name) of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    void set_FontKey(System::String value);
    /// <summary>
    /// Readable (internal) name of the Font object that is used for showing text that causes extraction error.
    /// </summary>
    void set_FontName(System::String value);
    /// <summary>
    /// Text that was actually extracted.
    /// </summary>
    void set_ExtractedText(System::String value);
    System::SharedPtr<System::Text::StringBuilder> get_DescriptionSb();
    
    TextExtractionError(System::SharedPtr<TextExtractionErrorLocation> location);
    
    void FlushDescription();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _summary;
    System::String _description;
    System::SharedPtr<TextExtractionErrorLocation> _location;
    System::String _fontKey;
    System::String _fontName;
    System::String _extractedText;
    System::SharedPtr<System::Text::StringBuilder> _descriptionSb;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


